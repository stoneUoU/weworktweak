//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, WWKCorpWaitVerifyItem;

@interface WWKWaitVerifyCorpApplyingCell : UITableViewCell
{
    WWKCorpWaitVerifyItem *_item;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_mailLabel;
    _Bool _subTitleHidden;
}

@property(nonatomic) _Bool subTitleHidden; // @synthesize subTitleHidden=_subTitleHidden;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)layoutSubviewWithWidth:(double)arg1;
- (void)layoutSubviews;
- (void)setItem:(id)arg1;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

