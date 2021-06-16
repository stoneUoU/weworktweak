//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "WWKVerificationViewControllerDelegate-Protocol.h"
#import "WWKVerifyCodeControllerDelegate-Protocol.h"
#import "WXApiManagerDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIScrollView, UIView, WWKUIPageControl;

@interface WWKWeChatLoginViewController : UIViewController <WXApiManagerDelegate, WWKVerificationViewControllerDelegate, WWKVerifyCodeControllerDelegate, UIScrollViewDelegate>
{
    NSString *_loginUserName;
    double _titleMinY;
    _Bool _hasLoadScrollView;
    double _compressRatio;
    _Bool _mobileLoginMailSearch;
    _Bool _needAnimation;
    _Bool _isSplashViewDispear;
    _Bool _restoreLoginButton;
    _Bool _mobileLoginEnable;
    UIButton *_loginButton;
    UIImageView *_logo;
    UIImageView *_beta;
    UILabel *_rtx;
    UIActivityIndicatorView *_indicatorView;
    UIImageView *_backgroundImageView;
    UIScrollView *_welcomeScrollView;
    WWKUIPageControl *_welcomePageControl;
    UIImageView *_logoWithWords;
    UIButton *_checkButton;
    UILabel *_tipsLabel;
    UIButton *_linkButton;
    UIButton *_mobileLoginButton;
    UIButton *_registerButton;
    UIView *_separator;
}

@property(nonatomic) _Bool mobileLoginEnable; // @synthesize mobileLoginEnable=_mobileLoginEnable;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UIButton *registerButton; // @synthesize registerButton=_registerButton;
@property(retain, nonatomic) UIButton *mobileLoginButton; // @synthesize mobileLoginButton=_mobileLoginButton;
@property(retain, nonatomic) UIButton *linkButton; // @synthesize linkButton=_linkButton;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIButton *checkButton; // @synthesize checkButton=_checkButton;
@property(retain, nonatomic) UIImageView *logoWithWords; // @synthesize logoWithWords=_logoWithWords;
@property(retain, nonatomic) WWKUIPageControl *welcomePageControl; // @synthesize welcomePageControl=_welcomePageControl;
@property(retain, nonatomic) UIScrollView *welcomeScrollView; // @synthesize welcomeScrollView=_welcomeScrollView;
@property(nonatomic) _Bool restoreLoginButton; // @synthesize restoreLoginButton=_restoreLoginButton;
@property(nonatomic) _Bool isSplashViewDispear; // @synthesize isSplashViewDispear=_isSplashViewDispear;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) _Bool needAnimation; // @synthesize needAnimation=_needAnimation;
@property(retain, nonatomic) UILabel *rtx; // @synthesize rtx=_rtx;
@property(retain, nonatomic) UIImageView *beta; // @synthesize beta=_beta;
@property(retain, nonatomic) UIImageView *logo; // @synthesize logo=_logo;
@property(nonatomic) __weak UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(nonatomic) _Bool mobileLoginMailSearch; // @synthesize mobileLoginMailSearch=_mobileLoginMailSearch;
- (void).cxx_destruct;
- (void)p_pageTurn:(id)arg1;
- (void)mailLog;
- (id)p_creatBackgroundView:(struct CGRect)arg1;
- (void)handleLongTap:(id)arg1;
- (void)performWithDelegate:(id)arg1;
- (_Bool)p_isReachability;
- (void)showAlertViewWithString:(id)arg1;
- (id)p_getNetworkErrorAlert;
- (void)recordSearchMailReal;
- (void)managerLoginRequestNoPermission;
- (void)managerLoginFinish:(vector_4c3fbd75)arg1;
- (void)managerLoginFinish:(vector_4c3fbd75)arg1 withMail:(id)arg2;
- (void)managerEndLoginRequest;
- (void)managerBeginLoginRequest;
- (void)managerLoginRequestComplementPhoneNumber;
- (void)managerLoginRequestNeedPhoneNumber;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)sendAuthToWechat;
- (void)registerClicked:(id)arg1;
- (void)mobileLoginClicked:(id)arg1;
- (void)linkButtonClicked:(id)arg1;
- (void)checkButtonClicked:(id)arg1;
- (void)loginButtonClicked:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)onDidSplashWindowAnimateCompleted;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)clearOldViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

