//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIButton, UIColor, UILabel, UITextField, UIView, UIViewController, WWKAlertController;
@protocol WWKVerifyMobileDialogControllerDelegate;

@interface WWKVerifyMobileDialogController : NSObject
{
    long long _countDownSeconds;
    WWKAlertController *alert;
    NSString *_mobile;
    NSString *_message;
    UIColor *_messageColor;
    UIViewController *_contentViewController;
    id <WWKVerifyMobileDialogControllerDelegate> _delegate;
    UIView *_verifyView;
    UITextField *_verifyTextField;
    UIButton *_sendButton;
    UIButton *_cancelButton;
    UIButton *_sureButton;
    UILabel *_messageLabel;
    UIView *_actionView;
}

@property(retain, nonatomic) UIView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIButton *sureButton; // @synthesize sureButton=_sureButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UITextField *verifyTextField; // @synthesize verifyTextField=_verifyTextField;
@property(retain, nonatomic) UIView *verifyView; // @synthesize verifyView=_verifyView;
@property(nonatomic) __weak id <WWKVerifyMobileDialogControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubViewWithWidth:(double)arg1;
- (void)buildSubviews;
- (void)scheduleVerifyCountDownTimer;
- (void)onClickSendButton:(id)arg1;
- (void)presentAlertWithText:(id)arg1 messageColor:(id)arg2;
- (void)presentInContainController:(id)arg1 mobile:(id)arg2;

@end

