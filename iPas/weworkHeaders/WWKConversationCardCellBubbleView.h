//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKConversationMessageBubbleView.h"

@class NSMutableArray;

@interface WWKConversationCardCellBubbleView : WWKConversationMessageBubbleView
{
    NSMutableArray *_subViews;
    long long _cardType;
}

@property(nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSMutableArray *subViews; // @synthesize subViews=_subViews;
- (void).cxx_destruct;
- (void)p_more:(id)arg1;
- (void)p_favorite:(id)arg1;
- (void)p_forward:(id)arg1;
- (scoped_refptr_c1fa851d)p_createLinkMessageWithCardItem:(id)arg1;
- (id)p_getCardItemWithView:(id)arg1;
- (void)p_action:(id)arg1;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)updateBubble:(_Bool)arg1;
- (_Bool)needsArrow;
- (void)updateData;
- (void)initSubviews;

@end

