//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface WWKWebBannerView : UIView
{
    UIImageView *_noticeImage;
    UILabel *_tipsLabel;
    UIButton *_closeButton;
    CDUnknownBlockType _closeAction;
}

@property(copy, nonatomic) CDUnknownBlockType closeAction; // @synthesize closeAction=_closeAction;
- (void).cxx_destruct;
- (void)close;
- (void)layoutSubviews;
- (void)initSubViews;
- (void)setTips:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

