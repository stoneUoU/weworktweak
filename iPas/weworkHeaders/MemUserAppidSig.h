//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class MemAppidSigManager, WloginUserInfo;

@interface MemUserAppidSig : NSObject <NSCoding>
{
    WloginUserInfo *userInfo;
    MemAppidSigManager *userSigList;
}

@property(readonly, nonatomic) WloginUserInfo *userInfo; // @synthesize userInfo;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)writeToKeychainForceByAppid:(unsigned int)arg1;
- (void)writeToKeychainByAppid:(unsigned int)arg1;
- (int)decodeUserJumpLoginBuff:(id)arg1 byKey:(id)arg2 outPwdSig:(id)arg3;
- (_Bool)encodeUserJumpLoginBuff:(unsigned int)arg1 byKey:(id)arg2 outDataBuff:(id)arg3;
- (int)decodeUserPwdSigData:(id)arg1 andSigAppId:(unsigned int)arg2 byKey:(id)arg3 outPwdSig:(id)arg4;
- (_Bool)encodeUserPwdSig:(id)arg1 byKey:(id)arg2 outDataBuff:(id)arg3;
- (void)printUserInfo;
- (void)printUserAndSig;
- (unsigned int)topPriorityAppid;
- (unsigned int)userUin;
- (void)setUserUin:(unsigned long long)arg1;
- (_Bool)hasExpireBySigType:(unsigned int)arg1 andAppid:(unsigned int)arg2;
- (_Bool)hasExpireByAppid:(unsigned int)arg1 andAppExpTime:(unsigned int)arg2;
- (void)setPriority:(unsigned int)arg1 andTime:(unsigned int)arg2 byAppid:(unsigned int)arg3;
- (void)setKeySig:(id)arg1 withKey:(id)arg2;
- (id)sigByDomain:(id)arg1 withKey:(id)arg2;
- (void)setSKeySig:(id)arg1;
- (id)skeySigByDomain:(id)arg1;
- (void)setOpenSig_v2:(id)arg1;
- (id)openSigByAppid_v2:(unsigned int)arg1;
- (void)setOpenSig:(id)arg1;
- (id)openSigByAppid:(unsigned int)arg1;
- (void)setSig:(id)arg1;
- (void)removeSigByAppid:(unsigned int)arg1 andSigName:(id)arg2;
- (void)removeSigByAppid:(unsigned int)arg1;
- (_Bool)removeSigByKey:(id)arg1;
- (id)sigByAppid:(unsigned int)arg1 andSigName:(id)arg2;
- (void)dealloc;
- (id)initWithBasicInfo:(unsigned int)arg1 andPubNo:(unsigned int)arg2 andClientType:(unsigned int)arg3;

@end

