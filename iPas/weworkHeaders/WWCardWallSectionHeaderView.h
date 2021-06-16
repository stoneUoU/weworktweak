//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSString, UILabel, UIView, UIVisualEffectView, WWKCornerButton;

@interface WWCardWallSectionHeaderView : UITableViewHeaderFooterView
{
    WWKCornerButton *_container;
    UIVisualEffectView *_effectView;
    UILabel *_headerTitle;
    UIView *_sepertor;
    _Bool _isFloating;
    NSString *_title;
}

@property(nonatomic) _Bool isFloating; // @synthesize isFloating=_isFloating;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)layoutSubViewsWithWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)initSubViews;
- (id)initWithReuseIdentifier:(id)arg1;

@end
