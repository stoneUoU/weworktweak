//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WXCWifiInfo : NSObject
{
    NSString *_ssid;
    NSString *_bssid;
}

@property(copy, nonatomic) NSString *bssid; // @synthesize bssid=_bssid;
@property(copy, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
- (void)dealloc;
- (id)description;
- (_Bool)isEqual:(id)arg1;

@end

