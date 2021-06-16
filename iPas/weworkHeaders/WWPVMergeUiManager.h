//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "PvMergeMultiViewControllerDelegate-Protocol.h"
#import "PvMergeWindowDelegate-Protocol.h"
#import "WWPVMergeAppUIDelegate-Protocol.h"
#import "WXCPstnFloatingWindowDelegate-Protocol.h"

@class AVAudioPlayer, NSData, NSString, WWKAlertController, WWPvMergeMultiViewController, WWPvMergeWindow, WXCPstnFloatingWindow;

@interface WWPVMergeUiManager : NSObject <PvMergeWindowDelegate, PvMergeMultiViewControllerDelegate, WWPVMergeAppUIDelegate, WXCPstnFloatingWindowDelegate>
{
    vector_c17a647d pvMemberList;
    _Bool _needReCall;
    _Bool _recallAlertIsShowing;
    WWPvMergeWindow *_mMergeWindow;
    WWPvMergeMultiViewController *_mPvMultiCtr;
    AVAudioPlayer *_mSoundPlayer;
    NSData *_mPvIncallData;
    WWKAlertController *_mAlterCtr;
    WXCPstnFloatingWindow *_mFloatingWindow;
    WWKAlertController *_recallAlertCtrlr;
}

+ (id)sharedInstance;
@property(retain, nonatomic) WWKAlertController *recallAlertCtrlr; // @synthesize recallAlertCtrlr=_recallAlertCtrlr;
@property(nonatomic) _Bool recallAlertIsShowing; // @synthesize recallAlertIsShowing=_recallAlertIsShowing;
@property(retain, nonatomic) WXCPstnFloatingWindow *mFloatingWindow; // @synthesize mFloatingWindow=_mFloatingWindow;
@property(retain, nonatomic) WWKAlertController *mAlterCtr; // @synthesize mAlterCtr=_mAlterCtr;
@property(retain, nonatomic) NSData *mPvIncallData; // @synthesize mPvIncallData=_mPvIncallData;
@property(retain, nonatomic) AVAudioPlayer *mSoundPlayer; // @synthesize mSoundPlayer=_mSoundPlayer;
@property(retain, nonatomic) WWPvMergeMultiViewController *mPvMultiCtr; // @synthesize mPvMultiCtr=_mPvMultiCtr;
@property(retain, nonatomic) WWPvMergeWindow *mMergeWindow; // @synthesize mMergeWindow=_mMergeWindow;
@property(nonatomic) _Bool needReCall; // @synthesize needReCall=_needReCall;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)unregisterSysVolumeChangeLisener;
- (void)registerSysVolumeChangeLisener;
- (void)OnPVRoomScreenShareVideoChanged:(struct CGSize)arg1;
- (void)onPVRoomScreenShareEnd;
- (void)onPVRoomReceivedFirstScreenShareData;
- (void)onPVRoomScreenShareStart:(id)arg1 shareTopic:(id)arg2;
- (void)onPVRoomDocShareError:(int)arg1;
- (void)onPVRoomDocShareOpDrawLineOnPage:(int)arg1 start:(struct CGPoint)arg2 endPoint:(struct CGPoint)arg3 drawCompleted:(_Bool)arg4 opUuid:(int)arg5;
- (void)onPVRoomDocShareOpMoveToX:(int)arg1 yPos:(int)arg2 scale:(int)arg3;
- (void)onPVRoomDocShareOpPage:(int)arg1;
- (void)onPVRoomDocShareEnd;
- (void)onPVRoomDocShareStart:(id)arg1 shareTopic:(id)arg2 picsInfo:(id)arg3;
- (void)onPVRoomSignalChange:(_Bool)arg1 isLocal:(_Bool)arg2;
- (void)onAccountInfoChange;
- (void)onPVRoomErr:(int)arg1;
- (void)onOtherDeviceRejectNotify;
- (void)onOtherDeviceAcceptNotify;
- (void)onPVSelectWechatInvite;
- (void)onPVRoomSysCallHoldEnd;
- (void)onPVRoomSysCallHoldBegin;
- (void)onPVMemberCloseCamera:(unsigned long long)arg1;
- (id)onPVMemberOpenCamera:(unsigned long long)arg1;
- (void)onPVRoomMemberTalking:(id)arg1;
- (void)onPVRoomMemberChange:(id)arg1;
- (void)onPVRoomSpeakerStateChange:(_Bool)arg1;
- (void)onPVRoomMuteStateChange:(_Bool)arg1;
- (void)onPVRoomTalkReady;
- (void)onPVCreateRoomSuccess;
- (void)hideStatus;
- (void)showStatus;
- (void)switchToVOIPWindow;
- (void)switchToMiniWindow;
- (_Bool)isCurTalkInMinimizeState;
- (void)onFloatingWindowTapped:(id)arg1;
- (void)onPvMergeMultiViewControllerResumeTalk;
- (void)onPvMergeMultiViewControllerMinimizedWindowTitleUpdate:(id)arg1;
- (void)onPvMergeMultiViewControllerShareWxSucc;
- (void)onPvMergeMultiViewControllerPstnCall;
- (void)onPvMergeMultiViewControllerMinimize;
- (void)onPvMergeMultiViewControllerAddMem;
- (void)onPvMergeMultiViewControllerVideo:(_Bool)arg1;
- (void)onPvMergeMultiViewControllerMute:(_Bool)arg1;
- (void)onPvMergeMultiViewControllerSpeaker:(_Bool)arg1;
- (void)onPvMergeMultiViewControllerAccept;
- (void)onPvMergeMultiViewControllerHangUp:(int)arg1 animate:(_Bool)arg2;
- (void)onPvMergeMultiViewControllerHangUp:(int)arg1;
- (void)onPvMergeMultiViewControllerReject:(int)arg1;
- (void)onPvMergeMultiViewControllerPrepare2Hangup:(int)arg1;
- (void)onMergeWindowQuitAnimationDidEnd;
- (void)notifyMergeEvent:(id)arg1;
- (id)getCallInvalidMessageWithServerGroup:(id)arg1;
- (id)getInCallTipsMessageWithServerGroup:(id)arg1;
- (id)getInCallTipsMessage;
- (id)p_getMemberNamesFromMergeGroup:(id)arg1;
- (id)p_callkitProperNameFromPVGroupMember:(id)arg1;
- (id)fetchMemberNamesFromMergeGroupList:(id)arg1;
- (id)p_genInviteDicFromInviteType:(unsigned int)arg1;
- (void)_openPvMultiWithContacts:(id)arg1 isInCall:(_Bool)arg2 inviteType:(unsigned int)arg3 invitevid:(unsigned long long)arg4 autoAccept:(_Bool)arg5;
- (void)stopPlaySound;
- (void)playOutgoingCallSound;
- (void)checkAndPlayOutgoingCallSoundWithDelayIfNeed;
- (void)startPlayCallSound:(_Bool)arg1;
- (void)checkAndPlayCallEndSound;
- (void)playSound:(id)arg1 type:(id)arg2 loops:(int)arg3;
- (void)checkAndSetAudioSession:(_Bool)arg1;
- (void)setPoximityMonitoringState:(_Bool)arg1;
- (void)keepScreenOn:(_Bool)arg1;
- (void)delayHandleSpeakerSwitch;
- (_Bool)showAlertView;
- (_Bool)isMergeGroupValid:(id)arg1;
- (id)p_pvIncallDataWithBase64Str:(id)arg1;
- (id)curTalkingRoomDataBase64Str;
- (void)checkNetworkIssueFromCallkit;
- (void)onUserTapAppBtnFromCallkit;
- (void)onUserTapVideoBtnFromCallkit;
- (_Bool)isCurrentTalkGroup:(id)arg1;
- (void)handlePushAction:(_Bool)arg1;
- (scoped_refptr_fd92d7bf)getGroupTalkConversation;
- (void)forceClosePVMergeView;
- (void)checkAndRemoveFailAddMembers:(vector_c17a647d)arg1;
- (id)curTalkData;
- (void)updatePvTalkData:(id)arg1;
- (void)redialWithContacts:(vector_c17a647d)arg1;
- (void)addPvMultiWithNewContacts:(vector_c17a647d)arg1 inviteType:(unsigned int)arg2;
- (_Bool)p_doReciveInCallIssueWhenRecallAlertIsShowingWithGroup:(id)arg1 callData:(id)arg2 inviteType:(unsigned int)arg3 invitevid:(unsigned long long)arg4;
- (_Bool)openIncallPvMultiWithContacts:(id)arg1 callData:(id)arg2 inviteType:(unsigned int)arg3 invitevid:(unsigned long long)arg4 autoAccept:(_Bool)arg5 showPush:(_Bool)arg6;
- (void)openOutcallPvMultiWithContacts:(vector_c17a647d)arg1 inviteType:(unsigned int)arg2;
- (void)p_showRedialAlert;
- (void)p_doTheFuckingBullshitRedialProgress;
- (void)reDialOutcallPvMultiWithContacts;
- (_Bool)checkNeedShowConvBanner:(id)arg1;
- (_Bool)isInSysCallHoldTalking;
- (void)setCameraToggleTipsShowed;
- (_Bool)showCameraToggleTips;
- (_Bool)checkInvalidCallAndShowTipsWithServerGroup:(id)arg1;
- (_Bool)checkInvalidCallAndShowTips;
- (void)p_dismissCurAlertCompleted:(CDUnknownBlockType)arg1;
- (_Bool)checkAndShowPvTalkingTips;
- (_Bool)isShowMissCallips:(id)arg1;
- (_Bool)isMergeMultiActive;
- (_Bool)curVoipIsSelfMade;
- (long long)curVoipInvitorVid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
