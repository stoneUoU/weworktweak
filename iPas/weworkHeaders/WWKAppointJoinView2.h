//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WWKInteractiveLabelDelegate-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface WWKAppointJoinView2 : UIView <WWKInteractiveLabelDelegate>
{
    UILabel *_joinLabel;
    UIImageView *_iconView;
}

@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *joinLabel; // @synthesize joinLabel=_joinLabel;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)layoutContentWithWidth:(double)arg1;
- (void)layoutSubviews;
- (void)setJoinUsers:(vector_7dcb3552)arg1;
- (void)p_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

