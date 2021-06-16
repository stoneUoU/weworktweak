//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKSDKApiHandler.h"

#import "WWKForwardingControllerDelegate-Protocol.h"

@class NSString, WWKForwardingController;

@interface WWKApiShareHandler : WWKSDKApiHandler <WWKForwardingControllerDelegate>
{
    WWKForwardingController *_forwardingController;
}

+ (_Bool)requiresLogin;
+ (id)reqtypes;
+ (id)handlers;
+ (void)load;
@property(retain, nonatomic) WWKForwardingController *forwardingController; // @synthesize forwardingController=_forwardingController;
- (void).cxx_destruct;
- (void)fillSourceApp:(struct Message *)arg1;
- (void)forwardingController:(id)arg1 messageDidCancel:(scoped_refptr_c1fa851d)arg2;
- (void)forwardingMessage:(scoped_refptr_c1fa851d)arg1 ToConversation:(scoped_refptr_fd92d7bf)arg2 isSuccess:(_Bool)arg3;
- (void)performForwardWithDictionary:(id)arg1;
- (void)performForwardWithRequest:(id)arg1;
- (_Bool)cancel;
- (_Bool)execute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
