//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKMessageMedia.h"

@class NSString;

@interface WWKMessagePstnCard : WWKMessageMedia
{
    unsigned int _localJumpType;
    NSString *_title;
    NSString *_detail;
    NSString *_urlStr;
}

+ (_Bool)supportsMergeForwarding;
+ (_Bool)supportsForwarding;
@property(nonatomic) unsigned int localJumpType; // @synthesize localJumpType=_localJumpType;
@property(copy, nonatomic) NSString *urlStr; // @synthesize urlStr=_urlStr;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)htmlRepresentation;

@end

