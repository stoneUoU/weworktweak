//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface WWPvShareData : NSObject
{
    _Bool _mSelfShare;
    int _mDocShareCurrentPage;
    NSDictionary *_mExtraInfo;
    NSString *_mShareTopic;
    NSString *_mShareOwnerName;
    id _mShareDelegate;
    struct CGSize _mShareScreenSize;
}

@property(nonatomic) struct CGSize mShareScreenSize; // @synthesize mShareScreenSize=_mShareScreenSize;
@property(nonatomic) __weak id mShareDelegate; // @synthesize mShareDelegate=_mShareDelegate;
@property(nonatomic) _Bool mSelfShare; // @synthesize mSelfShare=_mSelfShare;
@property(copy, nonatomic) NSString *mShareOwnerName; // @synthesize mShareOwnerName=_mShareOwnerName;
@property(copy, nonatomic) NSString *mShareTopic; // @synthesize mShareTopic=_mShareTopic;
@property(nonatomic) int mDocShareCurrentPage; // @synthesize mDocShareCurrentPage=_mDocShareCurrentPage;
@property(retain, nonatomic) NSDictionary *mExtraInfo; // @synthesize mExtraInfo=_mExtraInfo;
- (void).cxx_destruct;
- (id)init;

@end

