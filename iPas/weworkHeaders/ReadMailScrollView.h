//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@interface ReadMailScrollView : UIScrollView
{
    _Bool _lockSetContentOffset;
    _Bool _lockSetContentSize;
    _Bool _lockSetContentAnimateOffset;
    _Bool _lockSetContentOverBottomOffset;
}

+ (void)hackWebViewScrollView:(id)arg1;
@property(nonatomic) _Bool lockSetContentOverBottomOffset; // @synthesize lockSetContentOverBottomOffset=_lockSetContentOverBottomOffset;
@property(nonatomic) _Bool lockSetContentAnimateOffset; // @synthesize lockSetContentAnimateOffset=_lockSetContentAnimateOffset;
@property(nonatomic) _Bool lockSetContentSize; // @synthesize lockSetContentSize=_lockSetContentSize;
@property(nonatomic) _Bool lockSetContentOffset; // @synthesize lockSetContentOffset=_lockSetContentOffset;
- (void)setContentOffsetPinned:(struct CGPoint)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;

@end
