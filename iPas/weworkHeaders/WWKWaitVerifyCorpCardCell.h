//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, WWKCorpWaitVerifyItem;

@interface WWKWaitVerifyCorpCardCell : UITableViewCell
{
    WWKCorpWaitVerifyItem *_item;
    UILabel *_titleLabel;
    UIImageView *_faceCardView;
}

@property(retain, nonatomic) UIImageView *faceCardView; // @synthesize faceCardView=_faceCardView;
- (void).cxx_destruct;
- (id)waterMarkImage:(id)arg1 withText:(id)arg2;
- (void)layoutSubviews;
- (void)setItem:(id)arg1;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

