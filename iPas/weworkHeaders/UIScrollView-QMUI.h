//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@interface UIScrollView (QMUI)
+ (void)load;
- (void)qmui_stopDeceleratingIfNeeded;
- (void)qmui_scrollToBottom;
- (void)qmui_scrollToBottomAnimated:(_Bool)arg1;
- (void)qmui_scrollToTop;
- (void)qmui_scrollToTopAnimated:(_Bool)arg1;
- (void)qmui_scrollToTopForce:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)qmui_canScroll;
@property(readonly, nonatomic) _Bool qmui_alreadyAtBottom;
@property(readonly, nonatomic) _Bool qmui_alreadyAtTop;
- (id)qmui_description;
@end

