//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface QQApiURLDecoder : NSObject
{
    NSString *_scheme;
    NSString *_host;
    NSString *_path;
    NSDictionary *_queryItem;
    int _xo;
}

+ (id)decoderWithUrl:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSString *host; // @dynamic host;
@property(copy, nonatomic) NSString *path; // @dynamic path;
@property(readonly, nonatomic) NSDictionary *queryItem; // @dynamic queryItem;
@property(copy, nonatomic) NSString *scheme; // @dynamic scheme;

@end

