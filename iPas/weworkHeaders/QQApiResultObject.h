//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQApiObject.h"

@class NSString;

@interface QQApiResultObject : QQApiObject
{
    NSString *_error;
    NSString *_errorDescription;
    NSString *_extendInfo;
    int _xo;
}

- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSString *error; // @dynamic error;
@property(retain, nonatomic) NSString *errorDescription; // @dynamic errorDescription;
@property(retain, nonatomic) NSString *extendInfo; // @dynamic extendInfo;

@end

