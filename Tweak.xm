#import <UIKit/UIKit.h>
#import "src/YLZLocationManager.h"


#define YLZDefaults [NSUserDefaults standardUserDefaults]
#define YLZKey @"switch_isOpen"
#define YLZSiteKey0 @"switch_isOpen0"
#define YLZSiteKey1 @"switch_isOpen1"
#define YLZSiteKey2 @"switch_isOpen2"

//易联众信息技术股份有限公司位置:
// static NSString *latitudeString = @"24.48591012";
// static NSString *longitudeString = @"118.17774973";


//SM城市广场(宝岛眼镜):
// static NSString *latitudeString = @"24.50076200";
// static NSString *longitudeString = @"118.12739500";

//厦门北站:
// static NSString *latitudeString = @"24.63589400";
// static NSString *longitudeString = @"118.07418400";


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

- (UITableViewCell *)fireTableViewCellWith:(NSString *)cellId withSwitchOn:(BOOL)switchOn withTitleString:(NSString *)titleString withTag:(NSInteger)tag withTableView:(UITableView *)tableView;

@end


%hook WWKApplicationPageController

- (void)viewDidLoad {
    %orig;
    [YLZLocationManager shareInstance].isOpen = [YLZDefaults boolForKey:YLZKey];
    NSString *latitudeString = @"";
    NSString *longitudeString = @"";
    //设置打卡位置
    if ([YLZDefaults boolForKey:YLZSiteKey0]) {
        latitudeString = @"24.48591012";
        longitudeString = @"118.17774973";
    } else if ([YLZDefaults boolForKey:YLZSiteKey1]) {
        latitudeString = @"24.63589400";
        longitudeString = @"118.07418400";
    } else if ([YLZDefaults boolForKey:YLZSiteKey2]) {
        latitudeString = @"24.50076200";
        longitudeString = @"118.12739500";
    }
    [YLZLocationManager shareInstance].coordinate = CLLocationCoordinate2DMake([latitudeString doubleValue], [longitudeString doubleValue]); 
}

// 一共有多少组
- (long long)numberOfSectionsInTableView:(id)tableView
{
    return 4;
}

// 每一组有多少行
- (long long)tableView:(id)tableView numberOfRowsInSection:(long long)section
{
    if (section == 0) {
        return 0;
    } else if (section == 1)  {
        return 1;
    } else if (section == 2)  {
        return 1;
    }  else {
        return 3;
    } 
}

// 监听插件开关(新方法需要添加%new)
%new
- (void)onSwitch:(UISwitch *)switchView {
    if (switchView.tag == 0) {
        [YLZLocationManager shareInstance].isOpen = switchView.isOn;
        [YLZDefaults setBool:switchView.isOn forKey:YLZKey];
        if (!switchView.isOn) {
            [YLZDefaults setBool:NO forKey:YLZSiteKey0];
            [YLZDefaults setBool:NO forKey:YLZSiteKey1];
            [YLZDefaults setBool:NO forKey:YLZSiteKey2];
        }
    } else {
        if (switchView.tag == 1) {
            //易联众信息技术股份有限公司位置:
            NSString *latitudeString = @"24.48591012";
            NSString *longitudeString = @"118.17774973";
            if (switchView.isOn) {
               [YLZLocationManager shareInstance].coordinate = CLLocationCoordinate2DMake([latitudeString doubleValue], [longitudeString doubleValue]); 
            }
            [YLZDefaults setBool:switchView.isOn forKey:YLZSiteKey0];
            [YLZDefaults setBool:NO forKey:YLZSiteKey1];
            [YLZDefaults setBool:NO forKey:YLZSiteKey2];
        } else if (switchView.tag == 2) {
            //厦门北站:
            NSString *latitudeString = @"24.63589400";
            NSString *longitudeString = @"118.07418400";
            if (switchView.isOn) {
               [YLZLocationManager shareInstance].coordinate = CLLocationCoordinate2DMake([latitudeString doubleValue], [longitudeString doubleValue]); 
            }
            [YLZDefaults setBool:NO forKey:YLZSiteKey0];
            [YLZDefaults setBool:switchView.isOn forKey:YLZSiteKey1];
            [YLZDefaults setBool:NO forKey:YLZSiteKey2];
        } else {
            //SM城市广场(宝岛眼镜):
            NSString *latitudeString = @"24.50076200";
            NSString *longitudeString = @"118.12739500";
            if (switchView.isOn) {
               [YLZLocationManager shareInstance].coordinate = CLLocationCoordinate2DMake([latitudeString doubleValue], [longitudeString doubleValue]); 
            }
            [YLZDefaults setBool:NO forKey:YLZSiteKey0];
            [YLZDefaults setBool:NO forKey:YLZSiteKey1];
            [YLZDefaults setBool:switchView.isOn forKey:YLZSiteKey2];
        }
    }
    [YLZDefaults synchronize];
    UITableView *tableView = [(UITableView *)self valueForKey:@"tableView"];
    [tableView reloadData];
}

%new
- (UITableViewCell *)fireTableViewCellWith:(NSString *)cellId withSwitchOn:(BOOL)switchOn withTitleString:(NSString *)titleString withTag:(NSInteger)tag withTableView:(UITableView *)tableView {
    UITableViewCell *cell = [tableView 
       dequeueReusableCellWithIdentifier:cellId];
    cell.selectionStyle = UITableViewCellSelectionStyleNone;
    if (cell == nil) {
        cell = [[UITableViewCell alloc] 
        initWithStyle:UITableViewCellStyleDefault 
        reuseIdentifier:cellId];
        cell.backgroundColor = [UIColor whiteColor];
    }
    cell.textLabel.text = titleString;
    // 开关
    UISwitch *switchView = [[UISwitch alloc] init];
    switchView.on = switchOn;
    switchView.tag = tag;
    BOOL isOpen = [YLZDefaults boolForKey:YLZKey];
    if (tag != 0) {
        switchView.hidden = !isOpen;
    }
    [switchView addTarget:self 
      action:@selector(onSwitch:) 
      forControlEvents:UIControlEventValueChanged];
    cell.accessoryView = switchView;
    return cell;
}

// 返回每一行的cell
- (id)tableView:(id)tableView cellForRowAtIndexPath:(id)indexPath
{
    if ([indexPath section] == 2) {
        return [self fireTableViewCellWith:@"switchCellId" withSwitchOn:[YLZDefaults boolForKey:YLZKey] withTitleString:@"打卡插件开关" withTag:0 withTableView:tableView];
    } if ([indexPath section] == 3) {
        BOOL isOpen = [YLZDefaults boolForKey:YLZKey];
        if ([indexPath row] == 0) {
            return [self fireTableViewCellWith:@"switchCellId" withSwitchOn:isOpen ? [YLZDefaults boolForKey:YLZSiteKey0] : NO withTitleString:@"易联众技术股份有限公司" withTag:1 withTableView:tableView];
        } else if ([indexPath row] == 1) {
            return [self fireTableViewCellWith:@"switchCellId" withSwitchOn:isOpen ? [YLZDefaults boolForKey:YLZSiteKey1] : NO withTitleString:@"厦门北站" withTag:2 withTableView:tableView];
        } else {
            return [self fireTableViewCellWith:@"switchCellId" withSwitchOn:isOpen ? [YLZDefaults boolForKey:YLZSiteKey2] : NO withTitleString:@"SM城市广场(宝岛眼镜)" withTag:3 withTableView:tableView];
        }
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
    if ([indexPath section] == 0) {
        %orig;
    } else if ([indexPath section] == 1)  {
        %orig;
    } else if ([indexPath section] == 2)  {
        [tableView deselectRowAtIndexPath:indexPath animated:YES];
        return;
    }  else {
        [tableView deselectRowAtIndexPath:indexPath animated:YES];
        return;
    }   
}

%end

%hook WWKAttendanceBinaryCheckViewController

- (void)viewDidLoad {
    %orig;
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

%end