//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RegisterCmd.h"

@class NSString;

@interface RegisterCmd_0x1 : RegisterCmd
{
    NSString *phoneNo;
    NSString *osVer;
    NSString *appName;
    NSString *appVer;
    unsigned char cCountry;
    unsigned char cLang;
    unsigned char cSigType;
    unsigned int dwAppid;
    unsigned int dwClientIp;
    NSString *imei;
    NSString *iccid;
    unsigned int dwVerifyRst;
}

@property unsigned int dwVerifyRst; // @synthesize dwVerifyRst;
@property(copy) NSString *iccid; // @synthesize iccid;
@property(copy) NSString *imei; // @synthesize imei;
@property unsigned int dwClientIp; // @synthesize dwClientIp;
@property unsigned int dwAppid; // @synthesize dwAppid;
@property(copy) NSString *osVer; // @synthesize osVer;
@property(copy) NSString *phoneNo; // @synthesize phoneNo;
@property(copy) NSString *appName; // @synthesize appName;
@property(copy) NSString *appVer; // @synthesize appVer;
@property unsigned char cSigType; // @synthesize cSigType;
@property unsigned char cCountry; // @synthesize cCountry;
@property unsigned char cLang; // @synthesize cLang;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
- (int)encode:(id)arg1;
- (void)dealloc;
- (id)init;

@end

