//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UILabel, UITextField, WWKCorpEditItem;
@protocol WWKModifyCorpNameEditCellDelegate;

@interface WWKModifyCorpNameEditCell : UITableViewCell <UITextFieldDelegate>
{
    UITextField *_textField;
    UILabel *_titleLabel;
    id <WWKModifyCorpNameEditCellDelegate> _delegate;
    WWKCorpEditItem *_item;
}

@property(retain, nonatomic) WWKCorpEditItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <WWKModifyCorpNameEditCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)onEditingBegin:(id)arg1;
- (void)onEditingChange:(id)arg1;
- (void)layoutSubviews;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
