//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKMessageMedia.h"

@class NSString;

@interface WWKMessageRTXNotify : WWKMessageMedia
{
    unsigned int _status;
    long long _type;
    NSString *_content;
    NSString *_title;
    unsigned long long _vid;
    NSString *_linkTitle;
    NSString *_name;
    NSString *_headUrl;
}

+ (_Bool)supportsMergeForwarding;
+ (_Bool)supportsForwarding;
@property(copy, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *linkTitle; // @synthesize linkTitle=_linkTitle;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) unsigned long long vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)htmlRepresentation;

@end

