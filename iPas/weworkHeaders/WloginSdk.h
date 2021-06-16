//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class OpenSSLRSAWrapper, UserLoginProcess, UserLoginProcessManager;
@protocol OS_dispatch_queue;

@interface WloginSdk : NSObject
{
    UserLoginProcessManager *userLoginProcessManager;
    NSObject<OS_dispatch_queue> *wtlogin_queue;
    UserLoginProcess *tmpProcess;
    OpenSSLRSAWrapper *_rsawrapper;
}

@property(retain, nonatomic) OpenSSLRSAWrapper *rsawrapper; // @synthesize rsawrapper=_rsawrapper;
- (int)checkWebVerifyAndLogin:(id)arg1 andSig:(id)arg2;
- (int)checkWebVerifyAndLogin:(id)arg1 andSig:(id)arg2 byTag:(long long)arg3;
- (int)__checkWebVerifyAndLogin:(id)arg1 userAccount:(id)arg2 andSig:(id)arg3;
- (void)_insertUser2Pasteboard:(id)arg1;
- (_Bool)_isJailbreak;
- (int)deleteUserFromPasteboard:(id)arg1;
- (int)quickLoginActiveStart:(id)arg1 SelfAppid:(unsigned int)arg2 SelfSubAppid:(unsigned int)arg3 DstAppid:(unsigned int)arg4 DstSubAppid:(unsigned int)arg5 DstSourceApplication:(id)arg6 DstScheme:(id)arg7 andDelegate:(id)arg8 tag:(long long *)arg9;
- (int)quickLoginCancelled:(id)arg1 andDelegate:(id)arg2 tag:(long long *)arg3;
- (int)quickLoginActiveStart:(id)arg1 sourceApplication:(id)arg2 appid:(unsigned int)arg3 subAppid:(unsigned int)arg4 scheme:(id)arg5 andDelegate:(id)arg6 tag:(long long *)arg7;
- (int)quickLoginStart:(id)arg1 userAccount:(id)arg2 sourceApplication:(id)arg3 andDelegate:(id)arg4 tag:(long long *)arg5;
- (int)quickLoginResult:(id)arg1 outAction:(int *)arg2 outUin:(unsigned long long *)arg3;
- (id)URLDecodedString:(id)arg1;
- (_Bool)quickLogin:(unsigned int)arg1 subAppid:(unsigned int)arg2 scheme:(id)arg3;
- (_Bool)quickLogin:(unsigned int)arg1 subAppid:(unsigned int)arg2 scheme:(id)arg3 useApp:(int)arg4;
- (id)readUserListFromPasteboard;
- (_Bool)canQuickLogin:(id)arg1;
- (void)__SmsVerifyLoginFailed:(id)arg1 result:(int)arg2 withErrInfo:(id)arg3;
- (void)__quickloginFailed:(id)arg1 result:(int)arg2 withErrInfo:(id)arg3;
- (void)__loginFailed:(id)arg1 result:(int)arg2 withErrInfo:(id)arg3;
- (int)serverReplyErrorActionType;
- (unsigned char)serverReplyErrorCode;
- (_Bool)userPt4TokenArray:(id)arg1 forUser:(id)arg2 andDomainList:(id)arg3;
- (_Bool)userSKeySigArray:(id)arg1 forUser:(id)arg2 andDomainList:(id)arg3;
- (_Bool)userOpenSigArray:(id)arg1 forUser:(id)arg2 andAppidNum:(unsigned int)arg3 andAppidList:(unsigned int *)arg4;
- (_Bool)userSigArray:(id)arg1 forUser:(id)arg2 forAppid:(unsigned int)arg3 andSigBitmap:(unsigned int)arg4 andOtherAppidNum:(unsigned int)arg5 andOtherAppidList:(unsigned int *)arg6 andExpireTime:(int)arg7;
- (unsigned short)sigTypeToTlvT:(unsigned int)arg1;
- (id)sigTypeToName:(unsigned int)arg1;
- (void)clearRememberPwdSig:(id)arg1;
- (_Bool)hasRememberPwdSig:(id)arg1;
- (id)sdkServerInfo;
- (unsigned int)sdkClientTypeForApp;
- (unsigned int)sdkPubNoForApp;
- (unsigned int)sdkVerForApp;
- (unsigned int)serverTime;
- (id)sdkSigDictionary;
- (id)sdkNameDictionary;
- (void)caculateChallenge:(id)arg1;
- (void)protocolLoginError:(id)arg1 result:(int)arg2 withErrInfo:(id)arg3;
- (void)protocolInputSmsCodeBySmsVerifyLogin:(id)arg1;
- (void)protocolSmsCodeSuccessBySmsVerifyLogin:(id)arg1;
- (void)protocolInputSmsCode:(id)arg1 andMbPhone:(id)arg2;
- (void)protocolShowPicture:(id)arg1 picData:(id)arg2 wording:(id)arg3;
- (void)protocolLoginFailed:(id)arg1 result:(int)arg2 withErrInfo:(id)arg3;
- (void)protocolLoginSuccessSig:(id)arg1 sig:(id)arg2 andBaseInfo:(id)arg3 andPasswdSig:(id)arg4;
- (void)protocolNegotiateSecGUID:(id)arg1;
- (_Bool)negotiateSecGUID:(id)arg1;
- (id)getBasicUserInfo:(id)arg1;
- (_Bool)clearUserLoginData:(id)arg1;
- (_Bool)clearUserLoginData:(id)arg1 andAppid:(unsigned int)arg2;
- (int)__quickLoginStart:(id)arg1 userAccount:(id)arg2 byAppid:(unsigned int)arg3 bySubAppid:(unsigned int)arg4 forAppid:(unsigned int)arg5 forSubAppid:(unsigned int)arg6 andFrom:(unsigned int)arg7;
- (int)checkSmsVerifyLoginCode:(id)arg1 andSmsInputString:(id)arg2;
- (int)checkSmsVerifyLoginCode:(id)arg1 andSmsInputString:(id)arg2 byTag:(long long)arg3;
- (int)__checkSmsVerifyLoginCode:(id)arg1 userAccount:(id)arg2 andSmsInputString:(id)arg3;
- (int)refreshSmsVerifyLoginCode:(id)arg1;
- (int)refreshSmsVerifyLoginCode:(id)arg1 byTag:(long long)arg2;
- (int)__refreshSmsVerifyLoginCode:(id)arg1 userAccount:(id)arg2;
- (int)checkSmsVerifyLoginAccount:(id)arg1 andAppID:(unsigned int)arg2;
- (int)checkSmsVerifyLoginAccount:(id)arg1 andAppID:(unsigned int)arg2 tag:(long long *)arg3;
- (int)__checkSmsVerifyLoginAccount:(id)arg1 userPhone:(id)arg2 andAppID:(unsigned int)arg3;
- (int)checkSmsCodeAndLogin:(id)arg1 andSmsInputString:(id)arg2 andVerifyType:(unsigned char)arg3;
- (int)checkSmsCodeAndLogin:(id)arg1 andSmsInputString:(id)arg2 andVerifyType:(unsigned char)arg3 byTag:(long long)arg4;
- (int)__checkSmsCodeAndLogin:(id)arg1 userAccount:(id)arg2 andSmsInputString:(id)arg3 andVerifyType:(unsigned char)arg4;
- (int)refreshSmsCode:(id)arg1 andSmsAppId:(unsigned int)arg2 andMobileType:(unsigned char)arg3;
- (int)refreshSmsCode:(id)arg1 andSmsAppId:(unsigned int)arg2 andMobileType:(unsigned char)arg3 byTag:(long long)arg4;
- (int)__refreshSmsCode:(id)arg1 userAccount:(id)arg2 andSmsAppId:(unsigned int)arg3 andMobileType:(unsigned char)arg4;
- (int)checkPictureAndLogin:(id)arg1 andPicInputString:(id)arg2;
- (int)checkPictureAndLogin:(id)arg1 andPicInputString:(id)arg2 byTag:(long long)arg3;
- (int)__checkPictureAndLogin:(id)arg1 userAccount:(id)arg2 andPicInputString:(id)arg3;
- (int)refreshPictureData:(id)arg1;
- (int)refreshPictureData:(id)arg1 byTag:(long long)arg2;
- (int)__refreshPictureData:(id)arg1 userAccount:(id)arg2;
- (int)loginBySmsVerifyLogin:(id)arg1 andAppid:(unsigned int)arg2 andPasswd:(id)arg3 andSigBitmap:(unsigned int)arg4 andLoginFlag:(int)arg5 tag:(long long)arg6;
- (int)loginBySmsVerifyLogin:(id)arg1 andAppid:(unsigned int)arg2 andPasswd:(id)arg3 andSigBitmap:(unsigned int)arg4 andLoginFlag:(int)arg5;
- (int)loginBySmsVerifyLogin:(id)arg1 andAppid:(unsigned int)arg2 andPasswd:(id)arg3 andSigBitmap:(unsigned int)arg4 andOtherAppidNum:(unsigned int)arg5 andOtherAppidList:(unsigned int *)arg6 andLoginFlag:(int)arg7 tag:(long long)arg8;
- (int)loginBySmsVerifyLogin:(id)arg1 andAppid:(unsigned int)arg2 andPasswd:(id)arg3 andSigBitmap:(unsigned int)arg4 andOtherAppidNum:(unsigned int)arg5 andOtherAppidList:(unsigned int *)arg6 andLoginFlag:(int)arg7;
- (int)loginWithPasswd:(id)arg1 andAppid:(unsigned int)arg2 andPasswd:(id)arg3 andSigBitmap:(unsigned int)arg4 andLoginFlag:(int)arg5 tag:(long long *)arg6;
- (int)loginWithPasswd:(id)arg1 andAppid:(unsigned int)arg2 andPasswd:(id)arg3 andSigBitmap:(unsigned int)arg4 andLoginFlag:(int)arg5;
- (int)loginWithPasswd:(id)arg1 andAppid:(unsigned int)arg2 andPasswd:(id)arg3 andSigBitmap:(unsigned int)arg4 andOtherAppidNum:(unsigned int)arg5 andOtherAppidList:(unsigned int *)arg6 andLoginFlag:(int)arg7 tag:(long long *)arg8;
- (int)loginWithPasswd:(id)arg1 andAppid:(unsigned int)arg2 andPasswd:(id)arg3 andSigBitmap:(unsigned int)arg4 andOtherAppidNum:(unsigned int)arg5 andOtherAppidList:(unsigned int *)arg6 andLoginFlag:(int)arg7;
- (int)__loginWithPasswd:(id)arg1 userAccount:(id)arg2 andAppid:(unsigned int)arg3 andPasswd:(id)arg4 andSigBitmap:(unsigned int)arg5 andLoginFlag:(int)arg6 andFrom:(unsigned int)arg7;
- (int)loginByExchangeSig:(id)arg1 byD2:(id)arg2 forAccount:(id)arg3 andAppid:(unsigned int)arg4 andSigBitmap:(unsigned int)arg5 andOtherAppidNum:(unsigned int)arg6 andOtherAppidList:(unsigned int *)arg7 tag:(long long *)arg8;
- (int)loginByExchangeSig:(id)arg1 byD2:(id)arg2 forAccount:(id)arg3 andAppid:(unsigned int)arg4 andSigBitmap:(unsigned int)arg5 andOtherAppidNum:(unsigned int)arg6 andOtherAppidList:(unsigned int *)arg7;
- (int)__loginByExchangeSig:(id)arg1 tgt:(id)arg2 byD2:(id)arg3 forAccount:(id)arg4 andAppid:(unsigned int)arg5 andSigBitmap:(unsigned int)arg6 andFrom:(unsigned int)arg7;
- (id)userSigBuff:(id)arg1 andAppid:(unsigned int)arg2;
- (int)loginByExchangeSig:(id)arg1 forAccount:(id)arg2 andAppid:(unsigned int)arg3 andSigBitmap:(unsigned int)arg4 andOtherAppidNum:(unsigned int)arg5 andOtherAppidList:(unsigned int *)arg6 tag:(long long *)arg7;
- (int)loginByExchangeSig:(id)arg1 forAccount:(id)arg2 andAppid:(unsigned int)arg3 andSigBitmap:(unsigned int)arg4 andOtherAppidNum:(unsigned int)arg5 andOtherAppidList:(unsigned int *)arg6;
- (int)loginByExchangeSig:(id)arg1 byAppid:(unsigned int)arg2 forAppid:(unsigned int)arg3 andSigBitmap:(unsigned int)arg4 andOtherAppidNum:(unsigned int)arg5 andOtherAppidList:(unsigned int *)arg6 tag:(long long *)arg7;
- (int)loginByExchangeSig:(id)arg1 byAppid:(unsigned int)arg2 forAppid:(unsigned int)arg3 andSigBitmap:(unsigned int)arg4 andOtherAppidNum:(unsigned int)arg5 andOtherAppidList:(unsigned int *)arg6;
- (int)loginByExchangeSig:(id)arg1 byAppid:(unsigned int)arg2 forAppid:(unsigned int)arg3 andSigBitmap:(unsigned int)arg4 tag:(long long *)arg5;
- (int)loginByExchangeSig:(id)arg1 byAppid:(unsigned int)arg2 forAppid:(unsigned int)arg3 andSigBitmap:(unsigned int)arg4;
- (int)__loginByExchangeSig:(id)arg1 andUserAccount:(id)arg2 byAppid:(unsigned int)arg3 forAppid:(unsigned int)arg4 andSigBitmap:(unsigned int)arg5 andFrom:(unsigned int)arg6;
- (int)returnValue:(unsigned char)arg1 forProcess:(id)arg2;
- (id)initMemUserAppidSig;
- (_Bool)isNeedLoginWithPasswd:(id)arg1 andAppid:(unsigned int)arg2;
- (_Bool)isNameAccount:(id)arg1;
- (void)setWtloginTimeout:(unsigned short)arg1;
- (void)setRemortServer:(id)arg1 andPort:(unsigned short)arg2;
- (void)__setLocalDA1:(id)arg1 andUin:(unsigned int)arg2;
- (void)__setTGTQR:(id)arg1 andAppid:(unsigned int)arg2 andUserSig:(id)arg3;
- (void)__setSKeyDomain:(id)arg1;
- (_Bool)addDomain:(id)arg1 withFlag:(unsigned char)arg2;
- (void)__setLanguage:(id)arg1;
- (void)setLanguage:(int)arg1;
- (void)setFaceImgType:(unsigned short)arg1;
- (void)setClientPicInfo:(unsigned short)arg1 CapType:(unsigned char)arg2 PicRetType:(unsigned char)arg3;
- (void)setDelegate:(id)arg1;
- (void)setLoginSubAppid:(unsigned int)arg1;
- (void)restoreSubAppid;
- (void)backupSubAppid;
- (void)setDeviceIMEI:(id)arg1;
- (void)setLogLevel:(int)arg1;
- (void)clearKsid;
- (id)ksidString;
- (_Bool)resetLoginProcess:(long long)arg1;
- (_Bool)resetLoginProcess;
- (_Bool)__resetLoginProcess__:(id)arg1;
- (id)initWithBasicInfo:(id)arg1 andClientType:(unsigned int)arg2 andDelegate:(id)arg3;
- (void)setSdkDispatchQueue:(id)arg1;
- (void)dealloc;
- (id)customDataByTag:(long long)arg1;

@end

