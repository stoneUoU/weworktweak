//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface WWBBSDataChangeNotifyMgr : NSObject
{
    NSDictionary *_mDataChangeTypeToNotifiDic;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *mDataChangeTypeToNotifiDic; // @synthesize mDataChangeTypeToNotifiDic=_mDataChangeTypeToNotifiDic;
- (void).cxx_destruct;
- (void)postDataChangeNotifyReplyDelete:(id)arg1 poster:(id)arg2;
- (void)postDataChangeNotifyReplyCommentCountUpdate:(id)arg1 poster:(id)arg2;
- (void)postDataChangeNotifyReplyCountUpdate:(id)arg1 poster:(id)arg2;
- (void)postDataChangeNotifyReplyLikeCountUpdate:(id)arg1 poster:(id)arg2;
- (id)genUserInfoByData:(id)arg1 poster:(id)arg2;
- (id)getReplyDeleteFromNoti:(id)arg1;
- (id)getReplyCommentCountFromNoti:(id)arg1;
- (id)getReplyCountFromNoti:(id)arg1;
- (id)getLikeCountFromNoti:(id)arg1;
- (_Bool)isSelfNotify:(id)arg1 selfObj:(id)arg2;
- (void)removeRegisterNotify:(id)arg1 notifyType:(unsigned long long)arg2;
- (void)removeAllRegisterNotify:(id)arg1;
- (void)registerNotifyObserver:(id)arg1 selector:(SEL)arg2 notifyType:(unsigned long long)arg3;
- (id)getNotifiStrByType:(unsigned long long)arg1;
- (id)init;

@end
