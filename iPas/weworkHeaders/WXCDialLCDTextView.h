//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont;

@interface WXCDialLCDTextView : UIView
{
    struct CGGradient *_backGradient;
    NSString *_dialNumStr;
    NSString *_dialDetailStr;
    UIFont *_titleFont;
    UIFont *_detailFont;
    UIColor *_titleColor;
    UIColor *_detailColor;
    double _minTitleFontSize;
    double _minDetailFontSize;
}

@property(nonatomic) double minDetailFontSize; // @synthesize minDetailFontSize=_minDetailFontSize;
@property(nonatomic) double minTitleFontSize; // @synthesize minTitleFontSize=_minTitleFontSize;
@property(retain, nonatomic) UIColor *detailColor; // @synthesize detailColor=_detailColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *detailFont; // @synthesize detailFont=_detailFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSString *dialDetailStr; // @synthesize dialDetailStr=_dialDetailStr;
@property(retain, nonatomic) NSString *dialNumStr; // @synthesize dialNumStr=_dialNumStr;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

