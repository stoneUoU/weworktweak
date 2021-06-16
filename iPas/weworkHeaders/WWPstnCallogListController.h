//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WXCEmptyCalllogTableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView, WWKCommonEmptyView;

@interface WWPstnCallogListController : UIViewController <WXCEmptyCalllogTableViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_mCallListData;
    WWKCommonEmptyView *_mEmptyView;
    _Bool _isFromPresent;
    UITableView *_mPstnCallogListTableView;
}

+ (_Bool)jumpToPstnCallLogListFrom:(id)arg1 isPresent:(_Bool)arg2;
@property(retain, nonatomic) UITableView *mPstnCallogListTableView; // @synthesize mPstnCallogListTableView=_mPstnCallogListTableView;
@property(nonatomic) _Bool isFromPresent; // @synthesize isFromPresent=_isFromPresent;
- (void).cxx_destruct;
- (void)onSysCallFinish:(id)arg1;
- (void)onDetailBtnClicked;
- (id)indexPathForRowAtView:(id)arg1;
- (void)clickAccessoryView:(id)arg1;
- (void)updateUI;
- (void)initUI;
- (void)updateData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onSinglePstnClick;
- (void)onMultiPstnClick;
- (void)onDialDirectly;
- (void)onRightBarClik:(id)arg1;
- (void)onContactInfoChanged:(id)arg1;
- (void)calllogDataChanged:(id)arg1;
- (void)onExit;
- (void)_initPresentNaviItem;
- (void)p_updateInset;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
