//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIButton, UILabel, UIView;

@interface WWKWriteAnnouncementFooterView : UIControl
{
    UIView *_lineView;
    UIButton *_checkBox;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *checkBox; // @synthesize checkBox=_checkBox;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
- (void).cxx_destruct;
@property(nonatomic) _Bool secretive;
- (void)clickButton;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

