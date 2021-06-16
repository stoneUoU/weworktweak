//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"
#import "WWKLocationRetrieverBaseTaskDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface WWKLocationRetriever : NSObject <CLLocationManagerDelegate, WWKLocationRetrieverBaseTaskDelegate>
{
    NSMutableArray *_taskList;
}

+ (void)fetchAddrWithCoordinate:(struct CLLocationCoordinate2D)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (_Bool)isLocationServiceAvailable;
@property(retain, nonatomic) NSMutableArray *taskList; // @synthesize taskList=_taskList;
- (void).cxx_destruct;
- (void)locationRetrieverBaseTaskDidStopLocation:(id)arg1;
- (void)startRetrieverResultsHandler:(CDUnknownBlockType)arg1 withTimeout:(double)arg2 withDestoryBlock:(CDUnknownBlockType)arg3;
- (void)startRetrieverResultHandler:(CDUnknownBlockType)arg1 withFilter:(CDUnknownBlockType)arg2;
- (void)startRetrieverResultHandler:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
