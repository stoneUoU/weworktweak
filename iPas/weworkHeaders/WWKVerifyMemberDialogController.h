//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UITextFieldDelegate-Protocol.h"
#import "WWKCountryPickerControllerDelegate-Protocol.h"

@class NSString, UIImageView, UILabel, UITextField, WWKAlertController;
@protocol WWKVerifyMemberDialogDelegate;

@interface WWKVerifyMemberDialogController : NSObject <UITextFieldDelegate, WWKCountryPickerControllerDelegate>
{
    WWKAlertController *_alertController;
    id <WWKVerifyMemberDialogDelegate> _delegate;
    UILabel *_messageLabel;
    UILabel *_countryCodeLabel;
    UIImageView *_iconView;
    unsigned long long _type;
    NSString *_code;
    UITextField *_textField;
}

@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *countryCodeLabel; // @synthesize countryCodeLabel=_countryCodeLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(nonatomic) __weak id <WWKVerifyMemberDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onDidSelectInterCodeItem:(id)arg1;
- (void)onEditingChange:(id)arg1;
- (void)selectCode:(id)arg1;
- (void)addTapGestureToView:(id)arg1 withSelector:(SEL)arg2;
- (void)showWithType:(unsigned long long)arg1 andAreaCode:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

