//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel, UIView, WWCMROCRVCardInfo;

@interface WWKCardWallItemView : UIButton
{
    _Bool _isShowLogo;
    WWCMROCRVCardInfo *_cardInfo;
    UILabel *_nameLabel;
    UIImageView *_topIcon;
    UILabel *_jobLabel;
    UILabel *_authorLabel;
    UIImageView *_cardImage;
    UIView *_shortSeparator;
}

@property(retain, nonatomic) UIView *shortSeparator; // @synthesize shortSeparator=_shortSeparator;
@property(retain, nonatomic) UIImageView *cardImage; // @synthesize cardImage=_cardImage;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) UILabel *jobLabel; // @synthesize jobLabel=_jobLabel;
@property(retain, nonatomic) UIImageView *topIcon; // @synthesize topIcon=_topIcon;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) WWCMROCRVCardInfo *cardInfo; // @synthesize cardInfo=_cardInfo;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)layoutSubViewsWithWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
