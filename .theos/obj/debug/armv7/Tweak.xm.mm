#line 1 "Tweak.xm"
#import <UIKit/UIKit.h>
#import "src/YLZLocationManager.h"






#define YLZDefaults [NSUserDefaults standardUserDefaults]
#define YLZKey @"switch_isOpen"


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



#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class WWKAttendanceCheckContainerView_V13; @class WWKAttendanceBinaryCheckViewController; @class WWKAttendanceCheckView_V13; @class WWKAttendanceMapView_V13; @class WWKLocationRetrieverBaseTask; @class WWKApplicationPageController; @class WWKLocationRetriever; 
static void (*_logos_orig$_ungrouped$WWKApplicationPageController$viewDidLoad)(_LOGOS_SELF_TYPE_NORMAL WWKApplicationPageController* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$WWKApplicationPageController$viewDidLoad(_LOGOS_SELF_TYPE_NORMAL WWKApplicationPageController* _LOGOS_SELF_CONST, SEL); static long long (*_logos_orig$_ungrouped$WWKApplicationPageController$numberOfSectionsInTableView$)(_LOGOS_SELF_TYPE_NORMAL WWKApplicationPageController* _LOGOS_SELF_CONST, SEL, id); static long long _logos_method$_ungrouped$WWKApplicationPageController$numberOfSectionsInTableView$(_LOGOS_SELF_TYPE_NORMAL WWKApplicationPageController* _LOGOS_SELF_CONST, SEL, id); static long long (*_logos_orig$_ungrouped$WWKApplicationPageController$tableView$numberOfRowsInSection$)(_LOGOS_SELF_TYPE_NORMAL WWKApplicationPageController* _LOGOS_SELF_CONST, SEL, id, long long); static long long _logos_method$_ungrouped$WWKApplicationPageController$tableView$numberOfRowsInSection$(_LOGOS_SELF_TYPE_NORMAL WWKApplicationPageController* _LOGOS_SELF_CONST, SEL, id, long long); static void _logos_method$_ungrouped$WWKApplicationPageController$onSwitch$(_LOGOS_SELF_TYPE_NORMAL WWKApplicationPageController* _LOGOS_SELF_CONST, SEL, UISwitch *); static id (*_logos_orig$_ungrouped$WWKApplicationPageController$tableView$cellForRowAtIndexPath$)(_LOGOS_SELF_TYPE_NORMAL WWKApplicationPageController* _LOGOS_SELF_CONST, SEL, id, id); static id _logos_method$_ungrouped$WWKApplicationPageController$tableView$cellForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL WWKApplicationPageController* _LOGOS_SELF_CONST, SEL, id, id); static double (*_logos_orig$_ungrouped$WWKApplicationPageController$tableView$heightForRowAtIndexPath$)(_LOGOS_SELF_TYPE_NORMAL WWKApplicationPageController* _LOGOS_SELF_CONST, SEL, id, id); static double _logos_method$_ungrouped$WWKApplicationPageController$tableView$heightForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL WWKApplicationPageController* _LOGOS_SELF_CONST, SEL, id, id); static void (*_logos_orig$_ungrouped$WWKApplicationPageController$tableView$didSelectRowAtIndexPath$)(_LOGOS_SELF_TYPE_NORMAL WWKApplicationPageController* _LOGOS_SELF_CONST, SEL, id, id); static void _logos_method$_ungrouped$WWKApplicationPageController$tableView$didSelectRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL WWKApplicationPageController* _LOGOS_SELF_CONST, SEL, id, id); static void (*_logos_orig$_ungrouped$WWKAttendanceBinaryCheckViewController$viewDidLoad)(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceBinaryCheckViewController* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$WWKAttendanceBinaryCheckViewController$viewDidLoad(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceBinaryCheckViewController* _LOGOS_SELF_CONST, SEL); static void (*_logos_meta_orig$_ungrouped$WWKLocationRetriever$fetchAddrWithCoordinate$withCallback$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, struct CLLocationCoordinate2D, id ); static void _logos_meta_method$_ungrouped$WWKLocationRetriever$fetchAddrWithCoordinate$withCallback$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, struct CLLocationCoordinate2D, id ); static void (*_logos_orig$_ungrouped$WWKLocationRetrieverBaseTask$mapView$didUpdateUserLocation$updatingLocation$)(_LOGOS_SELF_TYPE_NORMAL WWKLocationRetrieverBaseTask* _LOGOS_SELF_CONST, SEL, id, id, _Bool); static void _logos_method$_ungrouped$WWKLocationRetrieverBaseTask$mapView$didUpdateUserLocation$updatingLocation$(_LOGOS_SELF_TYPE_NORMAL WWKLocationRetrieverBaseTask* _LOGOS_SELF_CONST, SEL, id, id, _Bool); static void (*_logos_orig$_ungrouped$WWKAttendanceCheckView_V13$layoutSubviews)(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceCheckView_V13* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$WWKAttendanceCheckView_V13$layoutSubviews(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceCheckView_V13* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$WWKAttendanceCheckContainerView_V13$layoutSubviews)(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceCheckContainerView_V13* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$WWKAttendanceCheckContainerView_V13$layoutSubviews(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceCheckContainerView_V13* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$WWKAttendanceMapView_V13$layoutSubviews)(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceMapView_V13* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$WWKAttendanceMapView_V13$layoutSubviews(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceMapView_V13* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$WWKAttendanceMapView_V13$displayLocation$)(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceMapView_V13* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$WWKAttendanceMapView_V13$displayLocation$(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceMapView_V13* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$WWKAttendanceMapView_V13$mapView$didUpdateUserLocation$updatingLocation$)(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceMapView_V13* _LOGOS_SELF_CONST, SEL, id, id, _Bool); static void _logos_method$_ungrouped$WWKAttendanceMapView_V13$mapView$didUpdateUserLocation$updatingLocation$(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceMapView_V13* _LOGOS_SELF_CONST, SEL, id, id, _Bool); static void (*_logos_orig$_ungrouped$WWKAttendanceMapView_V13$p_onlocatingTitleTimerReached)(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceMapView_V13* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$WWKAttendanceMapView_V13$p_onlocatingTitleTimerReached(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceMapView_V13* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$WWKAttendanceMapView_V13$locationManager$didChangeAuthorizationStatus$)(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceMapView_V13* _LOGOS_SELF_CONST, SEL, id, int); static void _logos_method$_ungrouped$WWKAttendanceMapView_V13$locationManager$didChangeAuthorizationStatus$(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceMapView_V13* _LOGOS_SELF_CONST, SEL, id, int); static void (*_logos_orig$_ungrouped$WWKAttendanceMapView_V13$updateViews)(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceMapView_V13* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$WWKAttendanceMapView_V13$updateViews(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceMapView_V13* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$WWKAttendanceMapView_V13$p_updateAdditionView)(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceMapView_V13* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$WWKAttendanceMapView_V13$p_updateAdditionView(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceMapView_V13* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$WWKAttendanceMapView_V13$startRetrieverResultHandler$)(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceMapView_V13* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$WWKAttendanceMapView_V13$startRetrieverResultHandler$(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceMapView_V13* _LOGOS_SELF_CONST, SEL, id); 

#line 47 "Tweak.xm"


static void _logos_method$_ungrouped$WWKApplicationPageController$viewDidLoad(_LOGOS_SELF_TYPE_NORMAL WWKApplicationPageController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    _logos_orig$_ungrouped$WWKApplicationPageController$viewDidLoad(self, _cmd);
    [YLZLocationManager shareInstance].coordinate = CLLocationCoordinate2DMake([latitudeString doubleValue], [longitudeString doubleValue]);
    [YLZLocationManager shareInstance].isOpen = [YLZDefaults boolForKey:YLZKey];
    NSLog(@"-----------------viewDidLoad--------------------------");
}



static long long _logos_method$_ungrouped$WWKApplicationPageController$numberOfSectionsInTableView$(_LOGOS_SELF_TYPE_NORMAL WWKApplicationPageController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id tableView) {
    return 2;
}



static long long _logos_method$_ungrouped$WWKApplicationPageController$tableView$numberOfRowsInSection$(_LOGOS_SELF_TYPE_NORMAL WWKApplicationPageController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id tableView, long long section) {
    if (section == 0) {
        return 0;
    } else {
        return 2;
    } 
}



static void _logos_method$_ungrouped$WWKApplicationPageController$onSwitch$(_LOGOS_SELF_TYPE_NORMAL WWKApplicationPageController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UISwitch * switchView) {
    [YLZLocationManager shareInstance].isOpen = switchView.isOn;
    [YLZDefaults setBool:switchView.isOn forKey:YLZKey];
    [YLZDefaults synchronize];
}



static id _logos_method$_ungrouped$WWKApplicationPageController$tableView$cellForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL WWKApplicationPageController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id tableView, id indexPath) {
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
        
        UISwitch *switchView = [[UISwitch alloc] init];
        switchView.on = [YLZDefaults boolForKey:YLZKey];
        [switchView addTarget:self 
          action:@selector(onSwitch:) 
          forControlEvents:UIControlEventValueChanged];
        cell.accessoryView = switchView;
        return cell;
    }
    return _logos_orig$_ungrouped$WWKApplicationPageController$tableView$cellForRowAtIndexPath$(self, _cmd, tableView, indexPath);
}



static double _logos_method$_ungrouped$WWKApplicationPageController$tableView$heightForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL WWKApplicationPageController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id tableView, id indexPath) {
    return _logos_orig$_ungrouped$WWKApplicationPageController$tableView$heightForRowAtIndexPath$(self, _cmd, tableView, indexPath);
}



static void _logos_method$_ungrouped$WWKApplicationPageController$tableView$didSelectRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL WWKApplicationPageController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id tableView, id indexPath) {
    
    if ([indexPath section] == 1 && [indexPath row] == 1) {
        [tableView deselectRowAtIndexPath:indexPath animated:YES];
        return; 
    } else {
        _logos_orig$_ungrouped$WWKApplicationPageController$tableView$didSelectRowAtIndexPath$(self, _cmd, tableView, indexPath);
    }
    
}





static void _logos_method$_ungrouped$WWKAttendanceBinaryCheckViewController$viewDidLoad(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceBinaryCheckViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    _logos_orig$_ungrouped$WWKAttendanceBinaryCheckViewController$viewDidLoad(self, _cmd);
    [YLZLocationManager shareInstance].coordinate = CLLocationCoordinate2DMake([latitudeString doubleValue], [longitudeString doubleValue]);
}





static void _logos_meta_method$_ungrouped$WWKLocationRetriever$fetchAddrWithCoordinate$withCallback$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, struct CLLocationCoordinate2D arg1, id  arg2) {
    
    if ([YLZLocationManager shareInstance].isOpen) {
        arg1.latitude = [YLZLocationManager shareInstance].coordinate.latitude;
        arg1.longitude = [YLZLocationManager shareInstance].coordinate.longitude;
        NSLog(@"Open-Open-Open");
    } else {
        NSLog(@"Close-Close-Close");
    }
    _logos_meta_orig$_ungrouped$WWKLocationRetriever$fetchAddrWithCoordinate$withCallback$(self, _cmd, arg1, arg2);
}






static void _logos_method$_ungrouped$WWKLocationRetrieverBaseTask$mapView$didUpdateUserLocation$updatingLocation$(_LOGOS_SELF_TYPE_NORMAL WWKLocationRetrieverBaseTask* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, _Bool arg3) {
    
    if ([YLZLocationManager shareInstance].isOpen) {
        if ([NSStringFromClass([arg2 class]) isEqualToString:@"QUserLocation"]) {
            [YLZLocationManager shareInstance].location = [[CLLocation alloc] initWithLatitude:[YLZLocationManager shareInstance].coordinate.latitude longitude:[YLZLocationManager shareInstance].coordinate.longitude];
            [arg2 setValue:[YLZLocationManager shareInstance].location forKey:@"_location"];
        }
        NSLog(@"Open-Open-Open");
    } else {
        NSLog(@"Close-Close-Close");
    }
    
    _logos_orig$_ungrouped$WWKLocationRetrieverBaseTask$mapView$didUpdateUserLocation$updatingLocation$(self, _cmd, arg1, arg2, arg3);
}





static void _logos_method$_ungrouped$WWKAttendanceCheckView_V13$layoutSubviews(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceCheckView_V13* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    _logos_orig$_ungrouped$WWKAttendanceCheckView_V13$layoutSubviews(self, _cmd);
    self.backgroundColor = [UIColor greenColor];
    self.innerButton.backgroundColor = [UIColor redColor];
};





static void _logos_method$_ungrouped$WWKAttendanceCheckContainerView_V13$layoutSubviews(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceCheckContainerView_V13* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    _logos_orig$_ungrouped$WWKAttendanceCheckContainerView_V13$layoutSubviews(self, _cmd);
    self.boarderView.backgroundColor = [UIColor cyanColor];
};





static void _logos_method$_ungrouped$WWKAttendanceMapView_V13$layoutSubviews(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceMapView_V13* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    _logos_orig$_ungrouped$WWKAttendanceMapView_V13$layoutSubviews(self, _cmd);
    self.mapImageView.backgroundColor = [UIColor yellowColor]; 
    self.mapView.backgroundColor = [UIColor yellowColor]; 
};

static void _logos_method$_ungrouped$WWKAttendanceMapView_V13$displayLocation$(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceMapView_V13* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    _logos_orig$_ungrouped$WWKAttendanceMapView_V13$displayLocation$(self, _cmd, arg1);
    
    self.locationSubTitleLabel.text = @"XXX公司";
    self.locationSubTitleLabel.textColor = [UIColor redColor];
};

static void _logos_method$_ungrouped$WWKAttendanceMapView_V13$mapView$didUpdateUserLocation$updatingLocation$(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceMapView_V13* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, _Bool arg3) {
    _logos_orig$_ungrouped$WWKAttendanceMapView_V13$mapView$didUpdateUserLocation$updatingLocation$(self, _cmd, arg1, arg2, arg3);
    self.locationSubTitleLabel.text = @"XXX公司";
    self.locationSubTitleLabel.textColor = [UIColor redColor];
}

static void _logos_method$_ungrouped$WWKAttendanceMapView_V13$p_onlocatingTitleTimerReached(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceMapView_V13* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    _logos_orig$_ungrouped$WWKAttendanceMapView_V13$p_onlocatingTitleTimerReached(self, _cmd);
    if (self.locationSubTitleLabel != nil) {
        self.locationSubTitleLabel.text = @"XXX公司";
        self.locationSubTitleLabel.textColor = [UIColor redColor];
    }
};
static void _logos_method$_ungrouped$WWKAttendanceMapView_V13$locationManager$didChangeAuthorizationStatus$(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceMapView_V13* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, int arg2) {
    _logos_orig$_ungrouped$WWKAttendanceMapView_V13$locationManager$didChangeAuthorizationStatus$(self, _cmd, arg1, arg2);
    if (self.locationSubTitleLabel != nil) {
        self.locationSubTitleLabel.text = @"XXX公司";
        self.locationSubTitleLabel.textColor = [UIColor redColor];
    }
};
static void _logos_method$_ungrouped$WWKAttendanceMapView_V13$updateViews(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceMapView_V13* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    _logos_orig$_ungrouped$WWKAttendanceMapView_V13$updateViews(self, _cmd);
    if (self.locationSubTitleLabel != nil) {
        self.locationSubTitleLabel.text = @"XXX公司";
        self.locationSubTitleLabel.textColor = [UIColor redColor];
    }
};
static void _logos_method$_ungrouped$WWKAttendanceMapView_V13$p_updateAdditionView(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceMapView_V13* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    _logos_orig$_ungrouped$WWKAttendanceMapView_V13$p_updateAdditionView(self, _cmd);
    if (self.locationSubTitleLabel != nil) {
        self.locationSubTitleLabel.text = @"XXX公司";
        self.locationSubTitleLabel.textColor = [UIColor redColor];
    }
};
static void _logos_method$_ungrouped$WWKAttendanceMapView_V13$startRetrieverResultHandler$(_LOGOS_SELF_TYPE_NORMAL WWKAttendanceMapView_V13* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    _logos_orig$_ungrouped$WWKAttendanceMapView_V13$startRetrieverResultHandler$(self, _cmd, arg1);
    if (self.locationSubTitleLabel != nil) {
        self.locationSubTitleLabel.text = @"XXX公司";
        self.locationSubTitleLabel.textColor = [UIColor redColor];
    }
};




static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$WWKApplicationPageController = objc_getClass("WWKApplicationPageController"); { MSHookMessageEx(_logos_class$_ungrouped$WWKApplicationPageController, @selector(viewDidLoad), (IMP)&_logos_method$_ungrouped$WWKApplicationPageController$viewDidLoad, (IMP*)&_logos_orig$_ungrouped$WWKApplicationPageController$viewDidLoad);}{ MSHookMessageEx(_logos_class$_ungrouped$WWKApplicationPageController, @selector(numberOfSectionsInTableView:), (IMP)&_logos_method$_ungrouped$WWKApplicationPageController$numberOfSectionsInTableView$, (IMP*)&_logos_orig$_ungrouped$WWKApplicationPageController$numberOfSectionsInTableView$);}{ MSHookMessageEx(_logos_class$_ungrouped$WWKApplicationPageController, @selector(tableView:numberOfRowsInSection:), (IMP)&_logos_method$_ungrouped$WWKApplicationPageController$tableView$numberOfRowsInSection$, (IMP*)&_logos_orig$_ungrouped$WWKApplicationPageController$tableView$numberOfRowsInSection$);}{ char _typeEncoding[1024]; unsigned int i = 0; _typeEncoding[i] = 'v'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; memcpy(_typeEncoding + i, @encode(UISwitch *), strlen(@encode(UISwitch *))); i += strlen(@encode(UISwitch *)); _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$WWKApplicationPageController, @selector(onSwitch:), (IMP)&_logos_method$_ungrouped$WWKApplicationPageController$onSwitch$, _typeEncoding); }{ MSHookMessageEx(_logos_class$_ungrouped$WWKApplicationPageController, @selector(tableView:cellForRowAtIndexPath:), (IMP)&_logos_method$_ungrouped$WWKApplicationPageController$tableView$cellForRowAtIndexPath$, (IMP*)&_logos_orig$_ungrouped$WWKApplicationPageController$tableView$cellForRowAtIndexPath$);}{ MSHookMessageEx(_logos_class$_ungrouped$WWKApplicationPageController, @selector(tableView:heightForRowAtIndexPath:), (IMP)&_logos_method$_ungrouped$WWKApplicationPageController$tableView$heightForRowAtIndexPath$, (IMP*)&_logos_orig$_ungrouped$WWKApplicationPageController$tableView$heightForRowAtIndexPath$);}{ MSHookMessageEx(_logos_class$_ungrouped$WWKApplicationPageController, @selector(tableView:didSelectRowAtIndexPath:), (IMP)&_logos_method$_ungrouped$WWKApplicationPageController$tableView$didSelectRowAtIndexPath$, (IMP*)&_logos_orig$_ungrouped$WWKApplicationPageController$tableView$didSelectRowAtIndexPath$);}Class _logos_class$_ungrouped$WWKAttendanceBinaryCheckViewController = objc_getClass("WWKAttendanceBinaryCheckViewController"); { MSHookMessageEx(_logos_class$_ungrouped$WWKAttendanceBinaryCheckViewController, @selector(viewDidLoad), (IMP)&_logos_method$_ungrouped$WWKAttendanceBinaryCheckViewController$viewDidLoad, (IMP*)&_logos_orig$_ungrouped$WWKAttendanceBinaryCheckViewController$viewDidLoad);}Class _logos_class$_ungrouped$WWKLocationRetriever = objc_getClass("WWKLocationRetriever"); Class _logos_metaclass$_ungrouped$WWKLocationRetriever = object_getClass(_logos_class$_ungrouped$WWKLocationRetriever); { MSHookMessageEx(_logos_metaclass$_ungrouped$WWKLocationRetriever, @selector(fetchAddrWithCoordinate:withCallback:), (IMP)&_logos_meta_method$_ungrouped$WWKLocationRetriever$fetchAddrWithCoordinate$withCallback$, (IMP*)&_logos_meta_orig$_ungrouped$WWKLocationRetriever$fetchAddrWithCoordinate$withCallback$);}Class _logos_class$_ungrouped$WWKLocationRetrieverBaseTask = objc_getClass("WWKLocationRetrieverBaseTask"); { MSHookMessageEx(_logos_class$_ungrouped$WWKLocationRetrieverBaseTask, @selector(mapView:didUpdateUserLocation:updatingLocation:), (IMP)&_logos_method$_ungrouped$WWKLocationRetrieverBaseTask$mapView$didUpdateUserLocation$updatingLocation$, (IMP*)&_logos_orig$_ungrouped$WWKLocationRetrieverBaseTask$mapView$didUpdateUserLocation$updatingLocation$);}Class _logos_class$_ungrouped$WWKAttendanceCheckView_V13 = objc_getClass("WWKAttendanceCheckView_V13"); { MSHookMessageEx(_logos_class$_ungrouped$WWKAttendanceCheckView_V13, @selector(layoutSubviews), (IMP)&_logos_method$_ungrouped$WWKAttendanceCheckView_V13$layoutSubviews, (IMP*)&_logos_orig$_ungrouped$WWKAttendanceCheckView_V13$layoutSubviews);}Class _logos_class$_ungrouped$WWKAttendanceCheckContainerView_V13 = objc_getClass("WWKAttendanceCheckContainerView_V13"); { MSHookMessageEx(_logos_class$_ungrouped$WWKAttendanceCheckContainerView_V13, @selector(layoutSubviews), (IMP)&_logos_method$_ungrouped$WWKAttendanceCheckContainerView_V13$layoutSubviews, (IMP*)&_logos_orig$_ungrouped$WWKAttendanceCheckContainerView_V13$layoutSubviews);}Class _logos_class$_ungrouped$WWKAttendanceMapView_V13 = objc_getClass("WWKAttendanceMapView_V13"); { MSHookMessageEx(_logos_class$_ungrouped$WWKAttendanceMapView_V13, @selector(layoutSubviews), (IMP)&_logos_method$_ungrouped$WWKAttendanceMapView_V13$layoutSubviews, (IMP*)&_logos_orig$_ungrouped$WWKAttendanceMapView_V13$layoutSubviews);}{ MSHookMessageEx(_logos_class$_ungrouped$WWKAttendanceMapView_V13, @selector(displayLocation:), (IMP)&_logos_method$_ungrouped$WWKAttendanceMapView_V13$displayLocation$, (IMP*)&_logos_orig$_ungrouped$WWKAttendanceMapView_V13$displayLocation$);}{ MSHookMessageEx(_logos_class$_ungrouped$WWKAttendanceMapView_V13, @selector(mapView:didUpdateUserLocation:updatingLocation:), (IMP)&_logos_method$_ungrouped$WWKAttendanceMapView_V13$mapView$didUpdateUserLocation$updatingLocation$, (IMP*)&_logos_orig$_ungrouped$WWKAttendanceMapView_V13$mapView$didUpdateUserLocation$updatingLocation$);}{ MSHookMessageEx(_logos_class$_ungrouped$WWKAttendanceMapView_V13, @selector(p_onlocatingTitleTimerReached), (IMP)&_logos_method$_ungrouped$WWKAttendanceMapView_V13$p_onlocatingTitleTimerReached, (IMP*)&_logos_orig$_ungrouped$WWKAttendanceMapView_V13$p_onlocatingTitleTimerReached);}{ MSHookMessageEx(_logos_class$_ungrouped$WWKAttendanceMapView_V13, @selector(locationManager:didChangeAuthorizationStatus:), (IMP)&_logos_method$_ungrouped$WWKAttendanceMapView_V13$locationManager$didChangeAuthorizationStatus$, (IMP*)&_logos_orig$_ungrouped$WWKAttendanceMapView_V13$locationManager$didChangeAuthorizationStatus$);}{ MSHookMessageEx(_logos_class$_ungrouped$WWKAttendanceMapView_V13, @selector(updateViews), (IMP)&_logos_method$_ungrouped$WWKAttendanceMapView_V13$updateViews, (IMP*)&_logos_orig$_ungrouped$WWKAttendanceMapView_V13$updateViews);}{ MSHookMessageEx(_logos_class$_ungrouped$WWKAttendanceMapView_V13, @selector(p_updateAdditionView), (IMP)&_logos_method$_ungrouped$WWKAttendanceMapView_V13$p_updateAdditionView, (IMP*)&_logos_orig$_ungrouped$WWKAttendanceMapView_V13$p_updateAdditionView);}{ MSHookMessageEx(_logos_class$_ungrouped$WWKAttendanceMapView_V13, @selector(startRetrieverResultHandler:), (IMP)&_logos_method$_ungrouped$WWKAttendanceMapView_V13$startRetrieverResultHandler$, (IMP*)&_logos_orig$_ungrouped$WWKAttendanceMapView_V13$startRetrieverResultHandler$);}} }
#line 251 "Tweak.xm"
