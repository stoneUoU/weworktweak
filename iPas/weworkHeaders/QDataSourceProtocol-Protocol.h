//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, NSURL, UIImage;

@protocol QDataSourceProtocol <NSObject>
@property(readonly, nonatomic) double tileSize;
- (NSData *)tileData:(CDStruct_74b02b43)arg1;

@optional
@property(nonatomic) unsigned long long mapLanguage;
@property(readonly, nonatomic) long long maxZoomLevel;
@property(readonly, nonatomic) long long minZoomLevel;
- (UIImage *)tileImage:(CDStruct_74b02b43)arg1 needFresh:(_Bool *)arg2;
- (NSURL *)tileURL:(CDStruct_74b02b43)arg1;
- (NSString *)tilePath:(CDStruct_74b02b43)arg1;
@end

