//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSData;

@interface QRCodeTlv_Sig : WloginTlv
{
    NSData *sigData;
}

@property(copy) NSData *sigData; // @synthesize sigData;
- (void)dealloc;
- (void)addSigData:(id)arg1;
- (int)encode:(id)arg1;

@end

