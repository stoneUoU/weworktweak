//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TCAPIRequest.h"

@class NSString, UIImage;

@interface TCUploadPicDic : TCAPIRequest
{
    NSString *_paramPhotodesc;
    NSString *_paramTitle;
    NSString *_paramAlbumid;
    NSString *_paramMobile;
    NSString *_paramX;
    NSString *_paramY;
    UIImage *_paramPicture;
    NSString *_paramNeedfeed;
    NSString *_paramSuccessnum;
    NSString *_paramPicnum;
    int _xo;
}

+ (id)dictionary;
- (void).cxx_destruct;
@property(nonatomic) NSString *paramPicnum; // @dynamic paramPicnum;
@property(nonatomic) NSString *paramSuccessnum; // @dynamic paramSuccessnum;
@property(nonatomic) NSString *paramNeedfeed; // @dynamic paramNeedfeed;
@property(retain, nonatomic) UIImage *paramPicture; // @dynamic paramPicture;
@property(retain, nonatomic) NSString *paramY; // @dynamic paramY;
@property(retain, nonatomic) NSString *paramX; // @dynamic paramX;
@property(nonatomic) NSString *paramMobile; // @dynamic paramMobile;
@property(retain, nonatomic) NSString *paramAlbumid; // @dynamic paramAlbumid;
@property(retain, nonatomic) NSString *paramTitle; // @dynamic paramTitle;
@property(retain, nonatomic) NSString *paramPhotodesc; // @dynamic paramPhotodesc;

@end
