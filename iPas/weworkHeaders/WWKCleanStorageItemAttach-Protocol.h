//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage, WWKCleanStorageContext;

@protocol WWKCleanStorageItemAttach <NSObject>
@property(readonly, nonatomic) struct Key cleanItemConversationKey;
@property(readonly, nonatomic) unsigned long long cleanItemSize;
@property(readonly, nonatomic) UIImage *cleanItemIcon;
@property(readonly, nonatomic) NSString *cleanItemName;
- (_Bool)removeWithContext:(WWKCleanStorageContext *)arg1;
@end

