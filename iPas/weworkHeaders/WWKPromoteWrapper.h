//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKDataWrapper.h"

@class NSString;

@interface WWKPromoteWrapper : WWKDataWrapper
{
    unsigned int _bitid;
    NSString *_promoteTips;
    NSString *_promoteUrl;
    NSString *_promoteIconUrl;
}

@property(nonatomic) unsigned int bitid; // @synthesize bitid=_bitid;
@property(copy, nonatomic) NSString *promoteIconUrl; // @synthesize promoteIconUrl=_promoteIconUrl;
@property(copy, nonatomic) NSString *promoteUrl; // @synthesize promoteUrl=_promoteUrl;
@property(copy, nonatomic) NSString *promoteTips; // @synthesize promoteTips=_promoteTips;
- (void).cxx_destruct;
- (long long)getDisplayOrder;
- (_Bool)isEnableAction;
- (id)init;

@end
