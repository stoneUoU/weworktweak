//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WWKThirdAppFloatView, WWKThirdAppInputToolbarView;

@protocol WWKThirdAppInputToolbarViewDelegate <NSObject>
- (void)wwkThirdAppInputToolbarViewDidClickButton:(struct WSMenuInfo_Button)arg1 withFloatView:(WWKThirdAppFloatView *)arg2;
- (void)wwkThirdAppInputToolbarViewDidClickSubButton:(struct WSMenuInfo_Button)arg1;
- (void)wwkThirdAppInputToolbarViewDidPressSwitchAppNormal:(WWKThirdAppInputToolbarView *)arg1;
@end

