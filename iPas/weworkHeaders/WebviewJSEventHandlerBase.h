//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class JSEvent;

@interface WebviewJSEventHandlerBase : NSObject
{
    JSEvent *_currentEvent;
}

@property(retain, nonatomic) JSEvent *currentEvent; // @synthesize currentEvent=_currentEvent;
- (void).cxx_destruct;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;

@end

