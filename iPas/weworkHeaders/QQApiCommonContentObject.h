//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQApiObject.h"

@class NSArray, NSData;

@interface QQApiCommonContentObject : QQApiObject
{
    unsigned int _layoutType;
    NSData *_previewImageData;
    NSArray *_textArray;
    NSArray *_pictureDataArray;
    int _xo;
}

+ (id)objectWithDictionary:(id)arg1;
+ (id)objectWithLayoutType:(int)arg1 textArray:(id)arg2 pictureArray:(id)arg3 previewImageData:(id)arg4;
- (id)toDictionary;
- (void)dealloc;

// Remaining properties
@property(nonatomic) unsigned int layoutType; // @dynamic layoutType;
@property(retain, nonatomic) NSArray *pictureDataArray; // @dynamic pictureDataArray;
@property(nonatomic) NSData *previewImageData; // @dynamic previewImageData;
@property(retain, nonatomic) NSArray *textArray; // @dynamic textArray;

@end

