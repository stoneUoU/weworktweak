//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

@class NSString;

@interface WWKFTNURLProtocol : NSURLProtocol
{
    NSString *task_id_;
    unsigned long long write_length_;
    _Bool cancelled_;
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (id)URLWithMailID:(id)arg1;
+ (void)load;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)startLoading;

@end

