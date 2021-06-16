//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableDictionary;

@interface MemAppidSigManager : NSObject <NSCoding>
{
    NSMutableDictionary *appidSigDic;
}

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)printAppidSigAll;
- (unsigned int)topPriorityAppid;
- (unsigned int)sigTimeByAppid:(unsigned int)arg1;
- (unsigned int)expireTimeByAppid:(unsigned int)arg1 andAppExpTime:(unsigned int)arg2;
- (void)setMemPriority:(unsigned int)arg1 andTime:(unsigned int)arg2 byAppid:(unsigned int)arg3;
- (void)removeMemSigByAppid:(unsigned int)arg1 andSigName:(id)arg2;
- (void)removeMemSigByAppid:(unsigned int)arg1;
- (_Bool)removeMemSigByKey:(id)arg1;
- (id)sigByDomain:(id)arg1 withKey:(id)arg2;
- (void)setSig:(id)arg1 withKey:(id)arg2;
- (id)skeySigByDomain:(id)arg1;
- (void)setSKeySig:(id)arg1;
- (id)openSigByAppid:(unsigned int)arg1;
- (id)openSigByAppid_v2:(unsigned int)arg1;
- (void)setOpenSig_v2:(id)arg1;
- (void)setOpenSig:(id)arg1;
- (id)memSigByAppid:(unsigned int)arg1 andName:(id)arg2;
- (void)setMemSig:(id)arg1;
- (void)dealloc;
- (id)init;

@end

