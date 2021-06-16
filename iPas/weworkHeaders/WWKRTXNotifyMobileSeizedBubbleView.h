//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKConversationMessageBubbleView.h"

#import "WWKInteractiveLabelDelegate-Protocol.h"
#import "WWKUpdateMobileControllerDelegate-Protocol.h"

@class NSString, UIButton, WWKInteractiveLabel, WWKMessageRTXNotify;

@interface WWKRTXNotifyMobileSeizedBubbleView : WWKConversationMessageBubbleView <WWKInteractiveLabelDelegate, WWKUpdateMobileControllerDelegate>
{
    WWKInteractiveLabel *_contentLabel;
    UIButton *_changeMobile;
}

@property(retain, nonatomic) UIButton *changeMobile; // @synthesize changeMobile=_changeMobile;
@property(retain, nonatomic) WWKInteractiveLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (void)verifyMobileSuccessful:(struct PhoneItem)arg1;
- (void)interactiveLabel:(id)arg1 didTouchContext:(id)arg2 boundingRects:(id)arg3;
- (void)viewDidTap:(id)arg1;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)updateData;
- (_Bool)shouldAutoHighlights;
- (Class)messageItemClass;
- (void)initSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) WWKMessageRTXNotify *messageItem; // @dynamic messageItem;
@property(readonly) Class superclass;

@end

