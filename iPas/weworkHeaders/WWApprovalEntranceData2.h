//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WWApprovalEntranceData2 : NSObject
{
    struct CommAppList _appInfo;
    _Bool _useLocalIcon;
    _Bool _useIndicator;
}

+ (id)approvalEntranceData:(struct CommAppList *)arg1;
@property(nonatomic) _Bool useIndicator; // @synthesize useIndicator=_useIndicator;
@property(nonatomic) _Bool useLocalIcon; // @synthesize useLocalIcon=_useLocalIcon;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *myApplyListLink;
@property(readonly, nonatomic) long long eventType;
@property(readonly, nonatomic) NSString *goLink;
@property(readonly, nonatomic) NSString *imagePath;
@property(readonly, nonatomic) NSString *title;
- (id)initWithAppInfo:(struct CommAppList *)arg1;

@end

