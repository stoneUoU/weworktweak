//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface WWCardWallStackedEmptyView : UIView
{
    UILabel *_emptyLabel;
    UILabel *_hintLabel;
    UIButton *_scanButton;
}

@property(retain, nonatomic) UIButton *scanButton; // @synthesize scanButton=_scanButton;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)onclick:(id)arg1;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

