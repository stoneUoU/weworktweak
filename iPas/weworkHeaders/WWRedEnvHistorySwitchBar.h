//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UILabel;
@protocol WWRedEnvHistorySwitchBarDelegate;

@interface WWRedEnvHistorySwitchBar : UIView
{
    unsigned long long _numberOfSegments;
    id <WWRedEnvHistorySwitchBarDelegate> _delegate;
    NSMutableArray *_mBtnList;
    UIView *_mBtnContainer;
    UIView *_mBottomLine;
    UIView *_mSelectLine;
    unsigned long long _mSelectIndex;
    UIView *_mHistoryTotalRecView;
    UILabel *_mHistoryTotalRecFirstLabel;
    UILabel *_mHistoryTotalRecSecondLabel;
    UIView *_mHistoryTotalSendView;
    UILabel *_mHistoryTotalSendFirstLabel;
    UILabel *_mHistoryTotalSendSecondLabel;
}

@property(retain, nonatomic) UILabel *mHistoryTotalSendSecondLabel; // @synthesize mHistoryTotalSendSecondLabel=_mHistoryTotalSendSecondLabel;
@property(retain, nonatomic) UILabel *mHistoryTotalSendFirstLabel; // @synthesize mHistoryTotalSendFirstLabel=_mHistoryTotalSendFirstLabel;
@property(retain, nonatomic) UIView *mHistoryTotalSendView; // @synthesize mHistoryTotalSendView=_mHistoryTotalSendView;
@property(retain, nonatomic) UILabel *mHistoryTotalRecSecondLabel; // @synthesize mHistoryTotalRecSecondLabel=_mHistoryTotalRecSecondLabel;
@property(retain, nonatomic) UILabel *mHistoryTotalRecFirstLabel; // @synthesize mHistoryTotalRecFirstLabel=_mHistoryTotalRecFirstLabel;
@property(retain, nonatomic) UIView *mHistoryTotalRecView; // @synthesize mHistoryTotalRecView=_mHistoryTotalRecView;
@property(nonatomic) unsigned long long mSelectIndex; // @synthesize mSelectIndex=_mSelectIndex;
@property(retain, nonatomic) UIView *mSelectLine; // @synthesize mSelectLine=_mSelectLine;
@property(retain, nonatomic) UIView *mBottomLine; // @synthesize mBottomLine=_mBottomLine;
@property(retain, nonatomic) UIView *mBtnContainer; // @synthesize mBtnContainer=_mBtnContainer;
@property(retain, nonatomic) NSMutableArray *mBtnList; // @synthesize mBtnList=_mBtnList;
@property(nonatomic) __weak id <WWRedEnvHistorySwitchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long numberOfSegments; // @synthesize numberOfSegments=_numberOfSegments;
- (void).cxx_destruct;
- (void)onClickTitle:(id)arg1;
- (void)layoutSelectLine:(unsigned long long)arg1;
- (void)layoutBtns;
- (void)layoutSubviews;
- (void)enableBtnActions:(_Bool)arg1;
- (void)uiSelectIndex:(unsigned long long)arg1;
- (unsigned long long)getCurrSelectIndex;
- (void)setSelectIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)updateBtnTitlesWithDataItem:(id)arg1 btn:(id)arg2;
- (void)updateDataItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setDataItems:(id)arg1;
- (void)setHiddenSendRecvView:(_Bool)arg1;
- (void)initUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

