//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, WEWCloudObjectEntry;

@interface WWYunPanListCellConfig : NSObject
{
    long long _type;
    NSString *_title;
    WEWCloudObjectEntry *_objectEntry;
}

@property(retain, nonatomic) WEWCloudObjectEntry *objectEntry; // @synthesize objectEntry=_objectEntry;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

