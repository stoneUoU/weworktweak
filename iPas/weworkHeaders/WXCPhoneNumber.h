//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface WXCPhoneNumber : NSObject <NSCopying>
{
    NSString *_orignalPhone;
    NSString *_areaCode;
    NSString *_realPhoneNumber;
    NSString *_countryCode;
}

+ (id)phoneNumWithInfo:(id)arg1 areaCode:(id)arg2 realPhone:(id)arg3 countryCode:(id)arg4;
+ (id)phoneNumWithInfo:(id)arg1 countryCode:(id)arg2;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *realPhoneNumber; // @synthesize realPhoneNumber=_realPhoneNumber;
@property(copy, nonatomic) NSString *areaCode; // @synthesize areaCode=_areaCode;
@property(copy, nonatomic) NSString *orignalPhone; // @synthesize orignalPhone=_orignalPhone;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;

@end
