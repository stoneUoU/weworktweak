//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXCHttpManagerDelegate-Protocol.h"

@class NSString;

@interface WXCLogUploadManager : NSObject <WXCHttpManagerDelegate>
{
    _Bool _mLogUpLoading;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property _Bool mLogUpLoading; // @synthesize mLogUpLoading=_mLogUpLoading;
- (void)httpManager:(id)arg1 didFinishWithResult:(int)arg2 withTaskId:(id)arg3 withRequest:(id)arg4;
- (_Bool)hasUpdateForceFlag;
- (void)updateForceFlag:(_Bool)arg1;
- (void)clearLogZipAfterMailSend;
- (id)getMailAttachments;
- (id)generateZipPath;
- (void)reUploadLog:(id)arg1;
- (id)getLogUploadTmpDir;
- (void)checkAndReUploadLogs;
- (void)clearUploadLogAfterZip;
- (id)genLogZipPath;
- (void)reqUploadLog:(_Bool)arg1;
- (void)_onEnterBackground;
- (void)p_regNoti;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
