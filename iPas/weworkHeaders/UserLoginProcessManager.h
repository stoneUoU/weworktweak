//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, UserLoginProcess;
@protocol OS_dispatch_queue;

@interface UserLoginProcessManager : NSObject
{
    unsigned short wUserVer;
    NSString *userAppVer;
    unsigned int dwUserPubNo;
    unsigned int dwUserClientType;
    id managerSdkDelegate;
    id managerDelegate;
    UserLoginProcess *defaultProcess;
    NSMutableArray *processArray;
    NSObject<OS_dispatch_queue> *processQueue;
    NSMutableDictionary *basicInfoTlvStore;
    unsigned int dwTmpSubAppid;
    unsigned int dwLastSubAppid;
    id tmpDelegate;
}

@property id tmpDelegate; // @synthesize tmpDelegate;
@property unsigned int dwLastSubAppid; // @synthesize dwLastSubAppid;
@property unsigned int dwTmpSubAppid; // @synthesize dwTmpSubAppid;
- (void)setPublicBasicInfoTlv:(id)arg1;
- (void)setProcessDispatchQueue:(id)arg1;
- (id)userLoginProcessByTag:(long long)arg1;
- (id)defaultUserLoginProcess;
- (id)emptyUserLoginProcess;
- (void)dealloc;
- (id)initWithClientVer:(unsigned short)arg1 andAppVer:(id)arg2 andPubNo:(unsigned int)arg3 andClientType:(unsigned int)arg4 andDelegate:(id)arg5 andSdkDelegate:(id)arg6;

@end
