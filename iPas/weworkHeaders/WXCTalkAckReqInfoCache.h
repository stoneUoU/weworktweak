//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WXCTalkAckReqInfoCache : NSObject
{
    unsigned int _roomId;
    int _ackType;
    NSString *_svrGroupId;
    unsigned long long _roomKey;
}

@property(nonatomic) int ackType; // @synthesize ackType=_ackType;
@property(nonatomic) unsigned long long roomKey; // @synthesize roomKey=_roomKey;
@property(nonatomic) unsigned int roomId; // @synthesize roomId=_roomId;
@property(copy, nonatomic) NSString *svrGroupId; // @synthesize svrGroupId=_svrGroupId;
- (void)dealloc;

@end

