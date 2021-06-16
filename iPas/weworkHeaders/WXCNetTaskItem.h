//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString, WXCNetworkDelegateWrapper;

@interface WXCNetTaskItem : NSObject
{
    int _taskId;
    WXCNetworkDelegateWrapper *delegateWrapper;
    NSString *taskTag;
    NSData *taskData;
    NSObject *backfillData;
    unsigned long long sendTime;
}

@property(nonatomic) int taskId; // @synthesize taskId=_taskId;
@property(nonatomic) unsigned long long sendTime; // @synthesize sendTime;
@property(retain, nonatomic) NSObject *backfillData; // @synthesize backfillData;
@property(retain, nonatomic) NSData *taskData; // @synthesize taskData;
@property(copy, nonatomic) NSString *taskTag; // @synthesize taskTag;
@property(retain, nonatomic) WXCNetworkDelegateWrapper *delegateWrapper; // @synthesize delegateWrapper;
- (void)dealloc;

@end

