//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WWKApi : NSObject
{
}

+ (_Bool)sendObj:(id)arg1;
+ (_Bool)sendResp:(id)arg1;
+ (_Bool)sendReq:(id)arg1;
+ (_Bool)openApp;
+ (id)getApiVersion;
+ (id)getAppInstallUrl;
+ (_Bool)isAppInstalled;
+ (_Bool)handleOpenURL:(id)arg1 delegate:(id)arg2;
+ (_Bool)registerApp:(id)arg1 corpId:(id)arg2 agentId:(id)arg3;
+ (_Bool)registerApp:(id)arg1;
+ (_Bool)sendObj:(id)arg1 scheme:(id)arg2;
+ (_Bool)sendResp:(id)arg1 scheme:(id)arg2;

@end
