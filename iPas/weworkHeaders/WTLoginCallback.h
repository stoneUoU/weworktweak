//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class WloginSdk_v2;

@interface WTLoginCallback : NSObject
{
    long long _type;
    WloginSdk_v2 *_sdk;
    long long _tag;
}

@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) WloginSdk_v2 *sdk; // @synthesize sdk=_sdk;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

