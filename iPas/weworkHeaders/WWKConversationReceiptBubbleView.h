//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKConversationTextBubbleView.h"

@class UILabel, UIView, WWKMessageText;

@interface WWKConversationReceiptBubbleView : WWKConversationTextBubbleView
{
    UIView *_topBorderView;
    UILabel *_receiptLabel;
    UIView *_separatorView;
}

@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UILabel *receiptLabel; // @synthesize receiptLabel=_receiptLabel;
@property(retain, nonatomic) UIView *topBorderView; // @synthesize topBorderView=_topBorderView;
- (void).cxx_destruct;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)layoutSubviews;
- (void)updateBubble:(_Bool)arg1;
- (void)initSubviews;

// Remaining properties
@property(readonly, nonatomic) WWKMessageText *messageItem;

@end

