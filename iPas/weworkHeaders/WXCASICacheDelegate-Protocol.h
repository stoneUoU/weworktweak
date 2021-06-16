//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDate, NSDictionary, NSString, NSURL, WXCASIHTTPRequest;

@protocol WXCASICacheDelegate <NSObject>
- (void)clearCachedResponsesForStoragePolicy:(int)arg1;
- (NSString *)pathToStoreCachedResponseDataForRequest:(WXCASIHTTPRequest *)arg1;
- (NSString *)pathToStoreCachedResponseHeadersForRequest:(WXCASIHTTPRequest *)arg1;
- (NSString *)pathToCachedResponseHeadersForURL:(NSURL *)arg1;
- (NSString *)pathToCachedResponseDataForURL:(NSURL *)arg1;
- (NSData *)cachedResponseDataForURL:(NSURL *)arg1;
- (NSDictionary *)cachedResponseHeadersForURL:(NSURL *)arg1;
- (void)removeCachedDataForURL:(NSURL *)arg1;
- (void)storeResponseForRequest:(WXCASIHTTPRequest *)arg1 maxAge:(double)arg2;
- (_Bool)isCachedDataCurrentForRequest:(WXCASIHTTPRequest *)arg1;
- (void)removeCachedDataForRequest:(WXCASIHTTPRequest *)arg1;
- (_Bool)canUseCachedDataForRequest:(WXCASIHTTPRequest *)arg1;
- (void)updateExpiryForRequest:(WXCASIHTTPRequest *)arg1 maxAge:(double)arg2;
- (NSDate *)expiryDateForRequest:(WXCASIHTTPRequest *)arg1 maxAge:(double)arg2;
- (int)defaultCachePolicy;
@end

