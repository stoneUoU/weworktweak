//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

#import "MailProxyObserverDelegate-Protocol.h"

@class NSString, NSThread;

@interface WWKCidURLProtocol : NSURLProtocol <MailProxyObserverDelegate>
{
    struct scoped_ptr<MailSmartProxyObserver, base::DefaultDeleter<MailSmartProxyObserver>> _attachment_state_observer;
    int _attach_index;
    scoped_refptr_b418b350 _mail;
    _Bool _stoped;
    NSThread *_callbackThread;
    NSString *_filePath;
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (void)load;
@property(nonatomic) _Bool stoped; // @synthesize stoped=_stoped;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSThread *callbackThread; // @synthesize callbackThread=_callbackThread;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)doCallback;
- (void)freeObserver;
- (void)mail:(struct Mail *)arg1 didChangeAttachmentDownloadStateAtIndex:(int)arg2;
- (void)stopLoading;
- (void)startLoading;
- (unsigned long long)fileSizeAtPath:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

