//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, WWFavoriteEmptyView;

@interface WWErroInfoViewController : UIViewController
{
    unsigned long long _showButtonType;
    WWFavoriteEmptyView *_infoView;
    NSString *_infoStr;
}

+ (void)showError:(int)arg1 withMessage:(id)arg2 fromVC:(id)arg3;
@property(copy, nonatomic) NSString *infoStr; // @synthesize infoStr=_infoStr;
@property(retain, nonatomic) WWFavoriteEmptyView *infoView; // @synthesize infoView=_infoView;
@property(nonatomic) unsigned long long showButtonType; // @synthesize showButtonType=_showButtonType;
- (void).cxx_destruct;
- (void)logoutToWxClicked:(id)arg1;
- (void)bindWXClicked:(id)arg1;
- (void)changeCorpClicked:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)initUI;
- (void)viewDidLoad;
- (id)initShowButton:(unsigned long long)arg1 withInfo:(id)arg2;

@end

