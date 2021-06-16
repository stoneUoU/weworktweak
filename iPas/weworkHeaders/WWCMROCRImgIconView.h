//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, WWKBadgeView;
@protocol WWCMROCRImgIconViewDelegate;

@interface WWCMROCRImgIconView : UIView
{
    id <WWCMROCRImgIconViewDelegate> _iconDelegate;
    UIImageView *_imgView;
    WWKBadgeView *_badgeView;
}

@property(retain, nonatomic) WWKBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(nonatomic) __weak id <WWCMROCRImgIconViewDelegate> iconDelegate; // @synthesize iconDelegate=_iconDelegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateNum:(int)arg1;
- (void)updateImg:(id)arg1;
- (void)ges_onTap;
- (void)p_init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

