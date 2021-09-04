#import <UIKit/UIKit.h>
#import "src/YLZLocationManager.h"

//其它位置:
// static NSString *latitudeString = @"24.497288808694895";
// static NSString *longitudeString = @"118.17793642306556";


#define YLZDefaults [NSUserDefaults standardUserDefaults]
#define YLZKey @"switch_isOpen"

//易联众信息技术股份有限公司位置:
static NSString *latitudeString = @"24.48606";
static NSString *longitudeString = @"118.17863";

@interface WWKAttendanceBinaryCheckViewController : UIViewController

@end

@interface WWKAttendanceCheckView_V13 : UIView

@property (nonatomic, strong) UIButton *innerButton;

@end

@interface WWKAttendanceCheckContainerView_V13 : UIView

@property (nonatomic, strong) UIView *boarderView;

@end

@interface WWKAttendanceMapView_V13 : UIView

@property (nonatomic, strong) UILabel *locationSubTitleLabel;

@property (nonatomic, strong) UIImageView *mapImageView;

@property (nonatomic, strong) UIView *mapView;

@end

@interface WWKApplicationPageController : UIViewController

@end


%hook WWKApplicationPageController

- (void)viewDidLoad {
    %orig;
    [YLZLocationManager shareInstance].coordinate = CLLocationCoordinate2DMake([latitudeString doubleValue], [longitudeString doubleValue]);
    [YLZLocationManager shareInstance].isOpen = [YLZDefaults boolForKey:YLZKey];
    NSLog(@"-----------------viewDidLoad--------------------------");
}

// 一共有多少组
- (long long)numberOfSectionsInTableView:(id)tableView
{
    return 2;
}

// 每一组有多少行
- (long long)tableView:(id)tableView numberOfRowsInSection:(long long)section
{
    if (section == 0) {
        return 0;
    } else {
        return 2;
    } 
}

// 监听插件开关(新方法需要添加%new)
%new
- (void)onSwitch:(UISwitch *)switchView {
    [YLZLocationManager shareInstance].isOpen = switchView.isOn;
    [YLZDefaults setBool:switchView.isOn forKey:YLZKey];
    [YLZDefaults synchronize];
}

// 返回每一行的cell
- (id)tableView:(id)tableView cellForRowAtIndexPath:(id)indexPath
{
    if ([indexPath section] == 1 && [indexPath row] == 1) {
        NSString *cellId = @"switchCellId";
        UITableViewCell *cell = [tableView 
           dequeueReusableCellWithIdentifier:cellId];
        if (cell == nil) {
            cell = [[UITableViewCell alloc] 
            initWithStyle:UITableViewCellStyleDefault 
            reuseIdentifier:cellId];
            cell.backgroundColor = [UIColor whiteColor];
        }
        cell.textLabel.text = @"打卡插件开关";
        // 开关
        UISwitch *switchView = [[UISwitch alloc] init];
        switchView.on = [YLZDefaults boolForKey:YLZKey];
        [switchView addTarget:self 
          action:@selector(onSwitch:) 
          forControlEvents:UIControlEventValueChanged];
        cell.accessoryView = switchView;
        return cell;
    }
    return %orig;
}

// 每一行的高度
- (double)tableView:(id)tableView heightForRowAtIndexPath:(id)indexPath
{
    return %orig;
}

// 点击的监听
- (void)tableView:(id)tableView didSelectRowAtIndexPath:(id)indexPath
{
    
    if ([indexPath section] == 1 && [indexPath row] == 1) {
        [tableView deselectRowAtIndexPath:indexPath animated:YES];
        return; 
    } else {
        %orig;
    }
    
}

%end

%hook WWKAttendanceBinaryCheckViewController

- (void)viewDidLoad {
    %orig;
    [YLZLocationManager shareInstance].coordinate = CLLocationCoordinate2DMake([latitudeString doubleValue], [longitudeString doubleValue]);
}

%end

%hook WWKLocationRetriever

+ (void)fetchAddrWithCoordinate:(struct CLLocationCoordinate2D)arg1 withCallback:(id )arg2 {
    //判断下开关是否打开：
    if ([YLZLocationManager shareInstance].isOpen) {
        arg1.latitude = [YLZLocationManager shareInstance].coordinate.latitude;
        arg1.longitude = [YLZLocationManager shareInstance].coordinate.longitude;
        NSLog(@"Open-Open-Open");
    } else {
        NSLog(@"Close-Close-Close");
    }
    %orig;
}

%end


%hook WWKLocationRetrieverBaseTask

- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 updatingLocation:(_Bool)arg3 {
    //判断下开关是否打开：
    if ([YLZLocationManager shareInstance].isOpen) {
        if ([NSStringFromClass([arg2 class]) isEqualToString:@"QUserLocation"]) {
            [YLZLocationManager shareInstance].location = [[CLLocation alloc] initWithLatitude:[YLZLocationManager shareInstance].coordinate.latitude longitude:[YLZLocationManager shareInstance].coordinate.longitude];
            [arg2 setValue:[YLZLocationManager shareInstance].location forKey:@"_location"];
        }
        NSLog(@"Open-Open-Open");
    } else {
        NSLog(@"Close-Close-Close");
    }
    
    %orig;
}

%end

%hook WWKAttendanceCheckView_V13

- (void)layoutSubviews {
    %orig;
    self.backgroundColor = [UIColor greenColor];
    self.innerButton.backgroundColor = [UIColor redColor];
};

%end

%hook  WWKAttendanceCheckContainerView_V13

- (void)layoutSubviews {
    %orig;
    self.boarderView.backgroundColor = [UIColor cyanColor];
};

%end

%hook WWKAttendanceMapView_V13

- (void)layoutSubviews {
    %orig;
    self.mapImageView.backgroundColor = [UIColor yellowColor]; 
    self.mapView.backgroundColor = [UIColor yellowColor]; 
};

- (void)displayLocation:(id)arg1 {
    %orig;
    // self.backgroundColor = [UIColor blueColor]
    self.locationSubTitleLabel.text = @"XXX公司";
    self.locationSubTitleLabel.textColor = [UIColor redColor];
};

- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 updatingLocation:(_Bool)arg3 {
    %orig;
    self.locationSubTitleLabel.text = @"XXX公司";
    self.locationSubTitleLabel.textColor = [UIColor redColor];
}

- (void)p_onlocatingTitleTimerReached {
    %orig;
    if (self.locationSubTitleLabel != nil) {
        self.locationSubTitleLabel.text = @"XXX公司";
        self.locationSubTitleLabel.textColor = [UIColor redColor];
    }
};
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 {
    %orig;
    if (self.locationSubTitleLabel != nil) {
        self.locationSubTitleLabel.text = @"XXX公司";
        self.locationSubTitleLabel.textColor = [UIColor redColor];
    }
};
- (void)updateViews {
    %orig;
    if (self.locationSubTitleLabel != nil) {
        self.locationSubTitleLabel.text = @"XXX公司";
        self.locationSubTitleLabel.textColor = [UIColor redColor];
    }
};
- (void)p_updateAdditionView {
    %orig;
    if (self.locationSubTitleLabel != nil) {
        self.locationSubTitleLabel.text = @"XXX公司";
        self.locationSubTitleLabel.textColor = [UIColor redColor];
    }
};
- (void)startRetrieverResultHandler:(id)arg1 {
    %orig;
    if (self.locationSubTitleLabel != nil) {
        self.locationSubTitleLabel.text = @"XXX公司";
        self.locationSubTitleLabel.textColor = [UIColor redColor];
    }
};

%end