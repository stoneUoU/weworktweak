//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@protocol AFURLResponseSerialization;

@interface UIImageView (AFNetworking)
+ (void)setSharedImageCache:(id)arg1;
+ (id)sharedImageCache;
- (void)cancelImageRequestOperation;
- (void)setImageWithURLRequest:(id)arg1 placeholderImage:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)setImageWithURL:(id)arg1;
@property(retain, nonatomic) id <AFURLResponseSerialization> imageResponseSerializer; // @dynamic imageResponseSerializer;
@end

