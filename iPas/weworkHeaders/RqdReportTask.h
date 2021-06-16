//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "RqdNetRequestDelegatge-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface RqdReportTask : NSObject <RqdNetRequestDelegatge>
{
    NSArray *files_;
    long long sizeLimit_;
    long long fileSize;
    NSMutableArray *fileArray;
    _Bool running;
}

@property(nonatomic) long long sizeLimit; // @synthesize sizeLimit=sizeLimit_;
@property(copy, nonatomic) NSArray *files; // @synthesize files=files_;
- (void)failWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)finishWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)sendRequest:(id)arg1;
- (void)start;
- (_Bool)isRunning;
- (void)cancel;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

