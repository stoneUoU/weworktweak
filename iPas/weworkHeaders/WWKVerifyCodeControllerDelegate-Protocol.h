//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WWKVerifyCodeControllerDelegate <NSObject>

@optional
- (void)managerLoginRequestComplementPhoneNumber;
- (void)recordSearchMailReal;
- (void)managerLoginFinish:(vector_4c3fbd75)arg1 withMail:(NSString *)arg2;
- (void)managerLoginFinish:(vector_4c3fbd75)arg1;
- (void)smsLogin:(void (^)(_Bool))arg1;
- (void)managerLoginRequestNoPermission;
- (void)managerLoginRequestTokenError;
- (void)managerLoginRequestNeedToken:(NSString *)arg1;
- (void)managerLoginRequestWXAuthFailed;
- (void)managerLoginRequestNeedPhoneNumber;
- (void)managerEndLoginRequest;
- (void)managerBeginLoginRequest;
- (void)managerLoginRequestUnknowError:(int)arg1;
- (void)managerLoginRequestPassWordError;
- (void)managerLoginRequestNetWorkError;
- (void)managerDidFinishLoginRequest;
@end
