//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ASIHTTPRequest, NSInputStream;

@interface ASIInputStream : NSObject
{
    NSInputStream *stream;
    ASIHTTPRequest *request;
}

+ (id)inputStreamWithData:(id)arg1 request:(id)arg2;
+ (id)inputStreamWithFileAtPath:(id)arg1 request:(id)arg2;
+ (void)initialize;
@property(nonatomic) ASIHTTPRequest *request; // @synthesize request;
@property(retain, nonatomic) NSInputStream *stream; // @synthesize stream;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)streamError;
- (unsigned long long)streamStatus;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)close;
- (void)open;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)dealloc;

@end

