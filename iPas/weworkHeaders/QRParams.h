//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData;

@interface QRParams : NSObject
{
    unsigned int dwQRMicro;
    unsigned int dwQRVersion;
    unsigned int dwQRSize;
    unsigned int dwQRMargin;
    unsigned int dwQRdpi;
    unsigned int dwQREcLevel;
    unsigned int dwQRHint;
    NSData *qrPushSig;
}

@property(copy, nonatomic) NSData *qrPushSig; // @synthesize qrPushSig;
@property(nonatomic) unsigned int dwQRHint; // @synthesize dwQRHint;
@property(nonatomic) unsigned int dwQREcLevel; // @synthesize dwQREcLevel;
@property(nonatomic) unsigned int dwQRdpi; // @synthesize dwQRdpi;
@property(nonatomic) unsigned int dwQRMargin; // @synthesize dwQRMargin;
@property(nonatomic) unsigned int dwQRSize; // @synthesize dwQRSize;
@property(nonatomic) unsigned int dwQRVersion; // @synthesize dwQRVersion;
@property(nonatomic) unsigned int dwQRMicro; // @synthesize dwQRMicro;
- (void)dealloc;
- (id)init;

@end

