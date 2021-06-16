//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "WXCNetWorkDelegate-Protocol.h"

@class NSArray, NSString, NSTimer, WXCPbSCWxlUpdateDetailInfoResp;

@interface WXCLiveRoomMgr : MMService <WXCNetWorkDelegate, MMService>
{
    NSArray *mLiveRoomItemsList;
    NSString *mOpenGroupID;
    WXCPbSCWxlUpdateDetailInfoResp *mCurRoomInfo;
    NSTimer *_mGetLiveRoomItemsListTimer;
    NSTimer *_mGetLiveRoomDetailTimer;
    long long _mGetLiveRoomDetailSeq;
    CDUnknownBlockType _mGetRoomListCallback;
}

+ (long long)genQXinUniqueMsgID:(int)arg1;
@property(copy, nonatomic) CDUnknownBlockType mGetRoomListCallback; // @synthesize mGetRoomListCallback=_mGetRoomListCallback;
@property long long mGetLiveRoomDetailSeq; // @synthesize mGetLiveRoomDetailSeq=_mGetLiveRoomDetailSeq;
@property(retain, nonatomic) NSTimer *mGetLiveRoomDetailTimer; // @synthesize mGetLiveRoomDetailTimer=_mGetLiveRoomDetailTimer;
@property(retain, nonatomic) NSTimer *mGetLiveRoomItemsListTimer; // @synthesize mGetLiveRoomItemsListTimer=_mGetLiveRoomItemsListTimer;
@property(retain) WXCPbSCWxlUpdateDetailInfoResp *mCurRoomInfo; // @synthesize mCurRoomInfo;
@property(copy, nonatomic) NSString *mOpenGroupID; // @synthesize mOpenGroupID;
@property(retain) NSArray *mLiveRoomItemsList; // @synthesize mLiveRoomItemsList;
- (void).cxx_destruct;
- (_Bool)isBigVideo:(int)arg1;
- (void)onRespData:(id)arg1 taskId:(int)arg2 retCode:(int)arg3 retBuf:(id)arg4 backfillData:(id)arg5;
- (void)handleLiveRoomMsgs:(id)arg1;
- (void)getRoomList:(CDUnknownBlockType)arg1;
- (id)curLiveItem;
- (void)handleGetLiveRoomDetailResp:(id)arg1 retCode:(int)arg2 backFillData:(id)arg3;
- (void)handleGetLiveRoomListResp:(id)arg1 retCode:(int)arg2 backFillData:(id)arg3;
- (_Bool)MsgWxlDoAction:(int)arg1 action:(int)arg2;
- (_Bool)sendMsgWxlAnswerInviteJoin:(int)arg1 isOK:(_Bool)arg2;
- (_Bool)sendMsgWxlInviteJoin:(int)arg1;
- (_Bool)sendMsgWxlAnswerReqAddIn:(int)arg1 isOK:(_Bool)arg2;
- (_Bool)sendMsgWxlReqAddIn:(int)arg1;
- (_Bool)sendSetBigVideoUuidReq:(int)arg1;
- (_Bool)sendPostCommentRequestWithType:(int)arg1 withContent:(id)arg2;
- (_Bool)sendGetLiveRoomDetailRequeset:(id)arg1;
- (_Bool)sendGetLiveRoomListRequeset;
- (void)onGetRoomDetailTimerFired;
- (void)onGetRoomListTimerFired;
- (void)onExitRoom;
- (void)onEnterRoom:(id)arg1;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

