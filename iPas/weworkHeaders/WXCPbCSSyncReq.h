//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPPBGeneratedMessage.h"

@class NSData;

@interface WXCPbCSSyncReq : WXPPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *opLog; // @dynamic opLog;
@property(nonatomic) int packNum; // @dynamic packNum;
@property(nonatomic) int packSeq; // @dynamic packSeq;
@property(nonatomic) unsigned long long resourceId; // @dynamic resourceId;
@property(nonatomic) int skType; // @dynamic skType;
@property(retain, nonatomic) NSData *syncKey; // @dynamic syncKey;

@end

