//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSTimerProxy, UISegmentedControl, WWKAttendanceBinaryCheckViewController, WWKAttendanceRamdonCheckViewController, WWKLocationRetriever;

@interface WWKAttendanceCheckViewController : UIViewController
{
    UISegmentedControl *navigationSegment_;
    _Bool _isFinishAllLoading;
    int _checkType;
    long long _fromType;
    WWKAttendanceBinaryCheckViewController *_binaryCtrl;
    WWKAttendanceRamdonCheckViewController *_randomCtrl;
    NSTimerProxy *_weakNetworkTimer;
    WWKLocationRetriever *_locationRetriever;
}

@property(retain, nonatomic) WWKLocationRetriever *locationRetriever; // @synthesize locationRetriever=_locationRetriever;
@property(retain, nonatomic) NSTimerProxy *weakNetworkTimer; // @synthesize weakNetworkTimer=_weakNetworkTimer;
@property(nonatomic) _Bool isFinishAllLoading; // @synthesize isFinishAllLoading=_isFinishAllLoading;
@property(retain, nonatomic) WWKAttendanceRamdonCheckViewController *randomCtrl; // @synthesize randomCtrl=_randomCtrl;
@property(retain, nonatomic) WWKAttendanceBinaryCheckViewController *binaryCtrl; // @synthesize binaryCtrl=_binaryCtrl;
@property(nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(nonatomic) int checkType; // @synthesize checkType=_checkType;
- (void).cxx_destruct;
- (void)p_updateUIWithMangeInfo:(scoped_refptr_4757c6a0)arg1;
- (void)p_showRandomCtrl;
- (void)p_showBinaryCtrl;
- (void)updateNavigationTitleView;
- (void)p_onDidClickedRightItem;
- (void)viewDidLayoutSubviews;
- (void)p_onNaviSegmentDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)p_checkStatus;
- (void)p_onWeakNetworkReached:(id)arg1;
- (id)initWithCheckType:(int)arg1 andFromType:(long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

