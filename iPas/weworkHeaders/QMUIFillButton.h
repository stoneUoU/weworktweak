//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMUIButton.h"

@class UIColor;

@interface QMUIFillButton : QMUIButton
{
    _Bool _adjustsImageWithTitleTextColor;
    UIColor *_fillColor;
    UIColor *_titleTextColor;
    double _cornerRadius;
}

+ (void)setDefaultAppearance;
+ (void)initialize;
@property(nonatomic) _Bool adjustsImageWithTitleTextColor; // @synthesize adjustsImageWithTitleTextColor=_adjustsImageWithTitleTextColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void).cxx_destruct;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)updateImageColor;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFillColor:(id)arg1 titleTextColor:(id)arg2 frame:(struct CGRect)arg3;
- (id)initWithFillColor:(id)arg1 titleTextColor:(id)arg2;
- (id)initWithFillType:(int)arg1 frame:(struct CGRect)arg2;
- (id)initWithFillType:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

