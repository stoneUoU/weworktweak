//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface WWCardWallHeaderSummaryView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_subTitleLabel2;
    UIView *_line;
    UIButton *_vidlistButton;
    UIImageView *_vidlistArrowView;
    UIButton *_addContactButton;
    UIView *_separatorView;
    UIButton *_starView;
    UIView *_verticalLineView;
}

@property(retain, nonatomic) UIView *verticalLineView; // @synthesize verticalLineView=_verticalLineView;
@property(retain, nonatomic) UIButton *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIButton *addContactButton; // @synthesize addContactButton=_addContactButton;
@property(retain, nonatomic) UIImageView *vidlistArrowView; // @synthesize vidlistArrowView=_vidlistArrowView;
@property(retain, nonatomic) UIButton *vidlistButton; // @synthesize vidlistButton=_vidlistButton;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *subTitleLabel2; // @synthesize subTitleLabel2=_subTitleLabel2;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

