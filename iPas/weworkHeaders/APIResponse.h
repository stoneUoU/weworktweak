//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface APIResponse : NSObject <NSCoding>
{
    int _detailRetCode;
    int _retCode;
    int _seq;
    NSString *_errorMsg;
    NSDictionary *_jsonResponse;
    NSString *_message;
    id _userData;
    int _xo;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(nonatomic) int detailRetCode; // @dynamic detailRetCode;
@property(retain, nonatomic) NSString *errorMsg; // @dynamic errorMsg;
@property(retain, nonatomic) NSDictionary *jsonResponse; // @dynamic jsonResponse;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(nonatomic) int retCode; // @dynamic retCode;
@property(nonatomic) int seq; // @dynamic seq;
@property(retain, nonatomic) id userData; // @dynamic userData;

@end
