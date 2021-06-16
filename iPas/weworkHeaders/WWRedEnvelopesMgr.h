//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WWRedEnvSelectContactHolderDelegate-Protocol.h"
#import "WWRedEnvWxPayUIHelperDelegate-Protocol.h"
#import "WWRedEnvelopesProxyObserverDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, WWRedEnvMakeFloatBaseView, WWRedEnvOpenHongBaoWindow, WWRedEnvOpenResultWindow, WWRedEnvWxPayUIHelper;

@interface WWRedEnvelopesMgr : NSObject <WWRedEnvWxPayUIHelperDelegate, WWRedEnvSelectContactHolderDelegate, WWRedEnvelopesProxyObserverDelegate>
{
    WWRedEnvOpenHongBaoWindow *_mHongBaoWindow;
    WWRedEnvOpenResultWindow *_mOpenResultWindow;
    NSArray *_guideStrArr;
    _Bool _bIsTestMode;
    WWRedEnvWxPayUIHelper *_activeWXPayUIHelpler;
    WWRedEnvMakeFloatBaseView *_mCurrFloatView;
    NSMutableArray *_mSelectContactHolderArray;
    struct WWRedEnvelopesProxyObserver *_mProxyObserver;
}

+ (_Bool)isGroupHongBaoWithHongbaoType:(int)arg1 hongbaoSubType:(int)arg2;
+ (id)shareInstance;
@property(nonatomic) struct WWRedEnvelopesProxyObserver *mProxyObserver; // @synthesize mProxyObserver=_mProxyObserver;
@property(nonatomic) _Bool bIsTestMode; // @synthesize bIsTestMode=_bIsTestMode;
@property(retain, nonatomic) NSMutableArray *mSelectContactHolderArray; // @synthesize mSelectContactHolderArray=_mSelectContactHolderArray;
@property(retain, nonatomic) WWRedEnvMakeFloatBaseView *mCurrFloatView; // @synthesize mCurrFloatView=_mCurrFloatView;
@property(retain, nonatomic) WWRedEnvWxPayUIHelper *activeWXPayUIHelpler; // @synthesize activeWXPayUIHelpler=_activeWXPayUIHelpler;
- (void).cxx_destruct;
- (void)reportPayResult:(int)arg1 cost:(double)arg2 hongbaoId:(id)arg3 extraInfo:(id)arg4;
- (id)currentActiveHongbaoWindow;
- (void)checkEmotionCard;
- (_Bool)isHongbaoAnnounceEnabled;
- (_Bool)isHongbaoEnabled;
- (_Bool)getTestMode;
- (void)switchTestMode;
- (id)getRandomHongBaoTime:(unsigned int)arg1;
- (void)onSelectContactHolderFinish:(id)arg1;
- (scoped_refptr_464f8da5)parseSendInfoChangeNotification:(id)arg1;
- (scoped_refptr_76e17a3e)parseRecvInfoChangeNotification:(id)arg1;
- (void)postSendInfoChangeNotification:(const scoped_refptr_464f8da5 *)arg1;
- (void)postRecvInfoChangeNotification:(const scoped_refptr_76e17a3e *)arg1;
- (void)logoutToWxLoginController;
- (_Bool)alertWXRiskControlBySvrRetCode:(int)arg1 riskMsg:(id)arg2;
- (_Bool)alertCommonErrorBySvrRetCode:(int)arg1;
- (id)getCommonErrorMsgBySvrRetCode:(int)arg1 defaultErrorMsg:(id)arg2;
- (_Bool)isFloatViewShow;
- (void)floatViewHasClose:(id)arg1;
- (void)closeCurrFloatView;
- (void)showMakeRedEnvFloatView:(int)arg1 conv:(scoped_refptr_fd92d7bf)arg2 vidList:(id)arg3 hongbaoSubType:(unsigned int)arg4;
- (_Bool)p_isCorpClosedOuterContactFuncAndWantSendHongbaoToOuterContactOrRoom:(scoped_refptr_fd92d7bf)arg1;
- (_Bool)conversationHaveOuterContacts:(scoped_refptr_fd92d7bf)arg1;
- (void)showMakeRedEnvViewWithConv:(scoped_refptr_fd92d7bf)arg1 fromController:(id)arg2;
- (void)_hongbaoWindowHideAnim:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)_hongbaoWindowShowAnim:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (_Bool)checkWxHasInstallAndBind:(_Bool)arg1 isSendHongBao:(_Bool)arg2;
- (id)getHongBaoTypeDescFromType:(int)arg1 subHongbaoType:(int)arg2;
- (void)tony_filterQueryResult:(const scoped_refptr_1160ad40 *)arg1 withToVidList:(id)arg2;
- (void)tony_jumpToHongBaoDetail:(const basic_string_a490aa4c *)arg1 vidticket:(int)arg2 toVidList:(id)arg3 naviController:(id)arg4 isFromHistory:(_Bool)arg5 hbTicket:(const basic_string_a490aa4c *)arg6 conv:(scoped_refptr_fd92d7bf)arg7;
- (void)jumpToHongBaoDetail:(const basic_string_a490aa4c *)arg1 vidticket:(int)arg2 toVidList:(id)arg3 naviController:(id)arg4 isFromHistory:(_Bool)arg5 hbTicket:(const basic_string_a490aa4c *)arg6 conv:(scoped_refptr_fd92d7bf)arg7;
- (void)tony_fuckingJumpToHongBaoDetail:(const basic_string_a490aa4c *)arg1 vidticket:(int)arg2 toVidList:(id)arg3 naviController:(id)arg4 isFromHistory:(_Bool)arg5 hbTicket:(const basic_string_a490aa4c *)arg6 info:(id)arg7 conv:(scoped_refptr_fd92d7bf)arg8;
- (void)fuckingJumpToHongBaoDetail:(const basic_string_a490aa4c *)arg1 vidticket:(int)arg2 toVidList:(id)arg3 naviController:(id)arg4 isFromHistory:(_Bool)arg5 hbTicket:(const basic_string_a490aa4c *)arg6 info:(id)arg7 conv:(scoped_refptr_fd92d7bf)arg8;
- (void)closeIncentWindow;
- (void)closeHongBaoWindow;
- (void)openHongBaoWindowForQueryResult:(const scoped_refptr_1160ad40 *)arg1 toVidList:(id)arg2 hbTicket:(const basic_string_a490aa4c *)arg3 vidTicket:(int)arg4 conv:(scoped_refptr_fd92d7bf)arg5;
- (void)openHongBaoWindow:(const scoped_refptr_0d8089ec *)arg1 toVidList:(id)arg2 hbTicket:(const basic_string_a490aa4c *)arg3 vidTicket:(int)arg4 conv:(scoped_refptr_fd92d7bf)arg5;
- (void)closeResultWindow;
- (void)openResultWindow:(const scoped_refptr_8305d219 *)arg1 toVidList:(id)arg2 hbTicket:(const basic_string_a490aa4c *)arg3;
- (void)resetMgr;
- (void)_resetRedEnvelopesInfo;
- (id)fetchGuideStingIsSingleHongbao:(_Bool)arg1;
- (void)p_updateGuideStrArr;
- (void)_doInit;
- (void)dealloc;
- (id)init;
- (_Bool)wxSDKCheckBindErrAndAlert;
- (void)wwRedEnvWxPayError:(int)arg1 svrTips:(id)arg2;
- (void)wwRedEnvWxPayCancel;
- (void)wwRedEnvWxPaySuccess;
- (id)wwRedEnvWxPayUIHelperWaitingHudContainerView;
- (void)wxSDKPayStop;
- (void)wxSDKPay:(const scoped_refptr_d2137902 *)arg1 isLishi:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
