//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WWKUpdateMobileControllerDelegate-Protocol.h"

@class CTCallCenter, NSString, UIViewController, WWPstnTalkWindow;
@protocol WWPstnTalkMgrDelegate;

@interface WWPstnTalkMgr : NSObject <WWKUpdateMobileControllerDelegate>
{
    unsigned int _mRoomID;
    unsigned long long _mRoomKey;
    unsigned long long _mPstnClientID;
    long long _statusBarStyle;
    id <WWPstnTalkMgrDelegate> _mDelegate;
    WWPstnTalkWindow *_mPstnTalkWindow;
    CTCallCenter *_mCallCenter;
    CDUnknownBlockType _mCallHandler;
    UIViewController *_mGuideViewRootController;
    double _mCallDurationStart;
    double _mCallDurationEnd;
}

+ (id)shareInstance;
@property(nonatomic) double mCallDurationEnd; // @synthesize mCallDurationEnd=_mCallDurationEnd;
@property(nonatomic) double mCallDurationStart; // @synthesize mCallDurationStart=_mCallDurationStart;
@property(nonatomic) __weak UIViewController *mGuideViewRootController; // @synthesize mGuideViewRootController=_mGuideViewRootController;
@property(copy, nonatomic) CDUnknownBlockType mCallHandler; // @synthesize mCallHandler=_mCallHandler;
@property(retain, nonatomic) CTCallCenter *mCallCenter; // @synthesize mCallCenter=_mCallCenter;
@property(retain, nonatomic) WWPstnTalkWindow *mPstnTalkWindow; // @synthesize mPstnTalkWindow=_mPstnTalkWindow;
@property(nonatomic) id <WWPstnTalkMgrDelegate> mDelegate; // @synthesize mDelegate=_mDelegate;
- (void).cxx_destruct;
- (void)verifyMobileSuccessful:(struct PhoneItem)arg1;
- (void)manualSetStatusBarStyle:(long long)arg1;
- (id)currentControllerFromNavigationController:(id)arg1;
- (id)currentControllerFromTabbarController:(id)arg1;
- (id)currentViewController;
- (void)jumpToPstnPhoneGuideController;
- (_Bool)checkUserHaveMobilePhoneAtDialViewController:(id)arg1;
- (_Bool)checkUserHaveMobilePhoneAtController:(id)arg1;
- (_Bool)checkIsInTalking;
- (_Bool)_calleeIsSelfAtPeerID:(unsigned long long)arg1 peerNumber:(id)arg2 localContactID:(id)arg3;
- (_Bool)_networkAvailableAtPeerID:(unsigned long long)arg1 peerNumber:(id)arg2 localContactID:(id)arg3;
- (_Bool)isInSystemCall;
- (void)unregistNormalCallBack;
- (void)registNormalCallBack;
- (_Bool)isPSTNFeatureEnabled;
- (_Bool)isInSingleCalling;
- (void)_showInvalidPhoneTips:(id)arg1;
- (void)closePstnTalkView;
- (void)_talkWindowHideAnim:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)_talkWindowShowAnim:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)openPstnTalkView:(unsigned long long)arg1 peerNumber:(id)arg2 localContactID:(id)arg3 showAnimCompleteAction:(CDUnknownBlockType)arg4;
- (void)openPstnTalkView:(unsigned long long)arg1 peerNumber:(id)arg2 localContactID:(id)arg3 otherInfo:(id)arg4 showAnimCompleteAction:(CDUnknownBlockType)arg5;
- (void)openPstnTalkView:(unsigned long long)arg1 peerNumber:(id)arg2 localContactID:(id)arg3;
- (_Bool)p_checkPstnRangeLimitedWithVid:(unsigned long long)arg1 phoneNumber:(id)arg2;
- (void)openPstnTalkView:(scoped_refptr_e1f85e48)arg1 peerNumber:(id)arg2 showAnimCompleteAction:(CDUnknownBlockType)arg3;
- (void)resetTalkInfo;
- (void)resetMgr;
- (id)init;
- (unsigned long long)genPstnClientID;
- (void)sendPstnReportReq:(int)arg1 curRoomID:(unsigned int)arg2 roomKey:(unsigned long long)arg3 reportInfo:(const struct WWPstnCBReportInfo *)arg4;
- (void)sendPstnCancelReq;
- (void)sendPstnInviteReq:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
