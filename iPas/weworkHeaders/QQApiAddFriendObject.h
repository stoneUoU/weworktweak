//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQApiObject.h"

@class NSString;

@interface QQApiAddFriendObject : QQApiObject
{
    NSString *_openID;
    NSString *_subID;
    NSString *_remark;
    int _xo;
}

+ (id)objecWithOpenID:(id)arg1;
- (void)dealloc;
- (id)initWithOpenID:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *openID; // @dynamic openID;
@property(retain, nonatomic) NSString *remark; // @dynamic remark;
@property(retain, nonatomic) NSString *subID; // @dynamic subID;

@end

