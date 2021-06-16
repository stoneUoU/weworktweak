//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIColor;

@protocol MDrawViewDelegate <NSObject>
- (void)didCanvasScaleAndPanEnd;
- (void)didCanvasScaleAndPanStart;
- (void)didDrawStarted;
- (void)textToolEditing:(_Bool)arg1;
- (void)currentSelectedToolsPropertyChanged:(unsigned long long)arg1 color:(UIColor *)arg2 lineWidth:(double)arg3;
- (void)seletedToolsStateChanged:(_Bool)arg1;
- (void)canUndoStateChanged:(_Bool)arg1 canRedo:(_Bool)arg2;
- (double)toolbarHeight;
- (_Bool)isToolbarPlaceBottom;
@end

