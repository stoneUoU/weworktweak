//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor, UIImage, UIImageView, WeDrawConfig;
@protocol WeDrawDotDelegate;

@interface WeDrawDot : UIView
{
    CAShapeLayer *_selectRing;
    _Bool _isInSelecingAnimation;
    _Bool _responseConfig;
    _Bool _highLight;
    _Bool _select;
    id <WeDrawDotDelegate> _delegate;
    WeDrawConfig *_config;
    long long _size;
    long long _shape;
    long long _pen;
    double _dotSize;
    UIImageView *_iconView;
    UIImage *_iconImage;
}

@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) double dotSize; // @synthesize dotSize=_dotSize;
@property(nonatomic) long long pen; // @synthesize pen=_pen;
@property(nonatomic) long long shape; // @synthesize shape=_shape;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) _Bool select; // @synthesize select=_select;
@property(nonatomic) _Bool highLight; // @synthesize highLight=_highLight;
@property(nonatomic) _Bool responseConfig; // @synthesize responseConfig=_responseConfig;
@property(retain, nonatomic) WeDrawConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <WeDrawDotDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)outSelectingAnimation;
- (void)inSelectingAnimation;
- (void)prepareAnimation;
- (void)drawRect:(struct CGRect)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)initIcon;
- (void)initIconWithType:(long long)arg1;
@property(retain, nonatomic) UIColor *color;
- (id)initWithPen:(long long)arg1;
- (id)initWithShape:(long long)arg1;
- (id)initWithSize:(long long)arg1;
- (id)initWithColor:(id)arg1 showBorder:(_Bool)arg2;
- (id)initWithConfig:(id)arg1;
- (id)init;

@end

