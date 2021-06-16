//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "QMUITextViewDelegate-Protocol.h"

@class NSMutableArray, NSString, QMUITextView, UIView;

@interface WWCardWallSelectTagViewController : UIViewController <QMUITextViewDelegate>
{
    NSMutableArray *_topInputTagViewArr;
    NSMutableArray *_bottomTagViewArr;
    UIView *_topInputTagView;
    UIView *_bottomTagView;
    QMUITextView *_textView;
    UIView *_separatorView;
}

@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) QMUITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *bottomTagView; // @synthesize bottomTagView=_bottomTagView;
@property(retain, nonatomic) UIView *topInputTagView; // @synthesize topInputTagView=_topInputTagView;
- (void).cxx_destruct;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textViewShouldReturn:(id)arg1;
- (void)textView:(id)arg1 newHeightAfterTextChanged:(double)arg2;
- (void)doneDidClick:(id)arg1;
- (void)bottomTagViewDidClick:(id)arg1;
- (void)topTagViewDidClick:(id)arg1;
- (void)p_addOneTag:(id)arg1;
- (_Bool)p_canSendText;
- (void)p_removeBottomTagViewAllSubViews;
- (void)p_removeTopInputTagViewAllSubViews;
- (void)p_updateNavigationItem;
- (void)p_resetBottomTagViewOriginY;
- (void)p_buildBottomView;
- (void)p_buildTopView;
- (void)p_setTopTagViewArrDefaultValue;
- (void)p_setBottomTagViewArrDefaultValue;
- (void)p_initArray;
- (void)p_initUI;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

