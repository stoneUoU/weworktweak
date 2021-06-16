#import <UIKit/UIKit.h>
#import "src/YLZLocationManager.h"

#define YLZDefaults [NSUserDefaults standardUserDefaults]
#define YLZKey @"switch_isOpen"

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
