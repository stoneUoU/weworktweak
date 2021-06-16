//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WloginProtocolBuff-Protocol.h"

@class NSString;

@interface WloginPkgHead : NSObject <WloginProtocolBuff>
{
    struct {
        unsigned short wVersion;
        unsigned short wCommand;
        unsigned short wSeq_num;
        unsigned int dwUin;
        unsigned char cExtVer;
        unsigned char cCmdVer;
        unsigned char cRetryTimes;
        unsigned int dwClientType;
        unsigned int dwPubNo;
        unsigned int dwInstanceID;
    } stClientPkgHead;
    struct {
        unsigned short wVersion;
        unsigned short wCommand;
        unsigned short wSeq_num;
        unsigned int dwUin;
        unsigned short wFlag;
        unsigned char cRetryTimes;
    } stServerPkgHead;
}

- (unsigned char)cmdVer;
- (void)setCmdVer:(unsigned char)arg1;
- (unsigned short)pkgCmd;
- (void)setPkgCmd:(unsigned short)arg1;
- (unsigned int)pkgUin;
- (void)setPkgUin:(unsigned int)arg1;
- (int)encode:(id)arg1;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
- (_Bool)resetHead;
- (id)initWithVerWithEcdh:(unsigned short)arg1 andPubNo:(unsigned int)arg2 andClientType:(unsigned int)arg3;
- (id)initWithVer:(unsigned short)arg1 andPubNo:(unsigned int)arg2 andClientType:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

