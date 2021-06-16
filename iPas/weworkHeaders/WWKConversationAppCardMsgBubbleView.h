//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKConversationMessageBubbleView.h"

@class UIImageView, UILabel, WWKMessageAppCard;

@interface WWKConversationAppCardMsgBubbleView : WWKConversationMessageBubbleView
{
    UILabel *_titleLabel;
    UILabel *_subjectLabel;
    UIImageView *_cardIconImageView;
}

@property(retain, nonatomic) UIImageView *cardIconImageView; // @synthesize cardIconImageView=_cardIconImageView;
@property(retain, nonatomic) UILabel *subjectLabel; // @synthesize subjectLabel=_subjectLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)viewDidTap:(id)arg1;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)updateBubble:(_Bool)arg1;
- (void)updateData;
- (_Bool)hasSendingState;
- (Class)messageItemClass;
- (void)initSubviews;

// Remaining properties
@property(readonly, nonatomic) WWKMessageAppCard *messageItem; // @dynamic messageItem;

@end

