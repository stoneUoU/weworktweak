//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WXCZipUtil : NSObject
{
}

+ (_Bool)ZipFileFromSrcPath:(id)arg1 toPath:(id)arg2;
+ (_Bool)UnZipFileFromSrcPath:(id)arg1 toPath:(id)arg2;
+ (void)decodeDataFrom:(id)arg1 To:(id)arg2;
+ (void)ZipSrcData:(id)arg1 dest:(id)arg2;
+ (void)UnZipSrcData:(id)arg1 dest:(id)arg2;
+ (void)UnZipSrcDataWithLen:(id)arg1 dest:(id)arg2 length:(long long)arg3;

@end

