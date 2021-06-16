//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface WXCAccountShowInfo : NSObject <NSCoding, NSCopying>
{
    int _wxSex;
    NSString *_userName;
    NSString *_headUrl;
    NSString *_coverUrl;
    NSString *_wxOpenid;
    NSString *_wxNickName;
    NSString *_wxProvince;
    NSString *_wxCity;
    NSString *_wxPicture;
}

@property(copy, nonatomic) NSString *wxPicture; // @synthesize wxPicture=_wxPicture;
@property(copy, nonatomic) NSString *wxCity; // @synthesize wxCity=_wxCity;
@property(copy, nonatomic) NSString *wxProvince; // @synthesize wxProvince=_wxProvince;
@property(nonatomic) int wxSex; // @synthesize wxSex=_wxSex;
@property(copy, nonatomic) NSString *wxNickName; // @synthesize wxNickName=_wxNickName;
@property(copy, nonatomic) NSString *wxOpenid; // @synthesize wxOpenid=_wxOpenid;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

