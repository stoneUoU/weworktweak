//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKConversationWrapper.h"

#import "ConversationProxyObserverDelegate-Protocol.h"

@class NSString, WXCCallogDataItem;

@interface WWKPstnMissedCallWrapper : WWKConversationWrapper <ConversationProxyObserverDelegate>
{
    WXCCallogDataItem *_pstnCallLogData;
}

- (void).cxx_destruct;
- (void)updatePstnCallData:(scoped_refptr_fd92d7bf)arg1;
- (void)OnPropertyChanged:(scoped_refptr_fd92d7bf)arg1;
- (id)getSummary;
- (void)onRefleshPstnMissConv:(id)arg1;
- (void)onSysContactInfoChanged:(id)arg1;
- (void)dealloc;
- (id)initWithConversation:(scoped_refptr_fd92d7bf)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
