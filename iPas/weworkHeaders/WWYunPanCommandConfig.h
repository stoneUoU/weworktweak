//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, WEWCloudCommentInfo;

@interface WWYunPanCommandConfig : NSObject
{
    NSString *_fromUser;
    NSString *_toUser;
    NSString *_command;
    NSString *_time;
    WEWCloudCommentInfo *_commentInfo;
}

+ (id)initConfigWithFromUser:(id)arg1 ToUser:(id)arg2 Time:(id)arg3 Command:(id)arg4;
@property(retain, nonatomic) WEWCloudCommentInfo *commentInfo; // @synthesize commentInfo=_commentInfo;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *command; // @synthesize command=_command;
@property(retain, nonatomic) NSString *toUser; // @synthesize toUser=_toUser;
@property(retain, nonatomic) NSString *fromUser; // @synthesize fromUser=_fromUser;
- (void).cxx_destruct;

@end
