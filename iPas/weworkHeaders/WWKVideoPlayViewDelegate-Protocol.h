//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;

@protocol WWKVideoPlayViewDelegate <NSObject>
- (_Bool)canGoConversationByMessage;
- (void)goConversationByMessage:(scoped_refptr_c1fa851d)arg1;
- (_Bool)quitFavoritePreView;
- (_Bool)showFavoriteState;
- (_Bool)showFavorite;
- (void)favoritesVidioMessage:(scoped_refptr_c1fa851d)arg1 vidioView:(UIView *)arg2 isFavorite:(_Bool)arg3;
- (void)showProgressHUD:(NSString *)arg1 success:(_Bool)arg2 atView:(UIView *)arg3;
- (void)wwkVideoPlayViewDidClickForwardMessage:(scoped_refptr_c1fa851d)arg1;
@end

