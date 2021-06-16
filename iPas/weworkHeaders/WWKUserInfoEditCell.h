//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKSimpleTableViewCell.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIImageView, UILabel, UITextField;

@interface WWKUserInfoEditCell : WWKSimpleTableViewCell <UITextFieldDelegate>
{
    _Bool _showIcon;
    _Bool _showTipsLabel;
    UILabel *_titleLabel;
    UITextField *_contentField;
    id _infoPair;
    UILabel *_tipsLabel;
    UIImageView *_iconView;
}

@property(nonatomic) _Bool showTipsLabel; // @synthesize showTipsLabel=_showTipsLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) id infoPair; // @synthesize infoPair=_infoPair;
@property(nonatomic) _Bool showIcon; // @synthesize showIcon=_showIcon;
@property(retain, nonatomic) UITextField *contentField; // @synthesize contentField=_contentField;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)changeTextField:(id)arg1 selectionPosition:(long long)arg2 withOffset:(long long)arg3;
- (struct _NSRange)selectedRangeInTextView:(id)arg1;
- (id)replaceString:(id)arg1 inRange:(struct _NSRange)arg2 withString:(id)arg3;
- (long long)getIndexWithPosition:(long long)arg1 inString:(id)arg2;
- (long long)getStringLength:(id)arg1;
- (void)processInputTextOutOfRange:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)onTextViewEditting:(id)arg1;
- (id)getContent;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)layoutContentWithWidth:(double)arg1;
- (void)layoutSubviews;
- (void)showTipsLabel:(_Bool)arg1;
- (void)setCellTitle:(id)arg1 content:(id)arg2;
- (void)iconClicked:(id)arg1;
- (void)initSubView;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
