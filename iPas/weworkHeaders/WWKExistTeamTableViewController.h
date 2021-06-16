//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKMyTeamTableViewController.h"

#import "WWKApplyingTableViewControllerDelegate-Protocol.h"
#import "WWKUpdateVirtualCorpInfoDelegate-Protocol.h"
#import "WWKUploadWorkCardControllerDelegate-Protocol.h"

@class NSString, UILabel, UIView;

@interface WWKExistTeamTableViewController : WWKMyTeamTableViewController <WWKApplyingTableViewControllerDelegate, WWKUpdateVirtualCorpInfoDelegate, WWKUploadWorkCardControllerDelegate>
{
    UILabel *_applyTeamLabel;
    UIView *_circleView;
    UILabel *_unreadLabel;
    _Bool _isConnect8000RTXOn;
}

- (void).cxx_destruct;
- (void)onUploadWorkCardSuccess;
- (void)onUpdateVirtualCorpInfoSuccess;
- (void)onUpdateData;
- (void)enterCorp:(struct CorpBriefInfo *)arg1;
- (void)onEnterButtonClicked:(struct CorpBriefInfo *)arg1;
- (void)handleOperateCorpWithVid:(unsigned long long)arg1 dismiss:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)p_action_editing:(id)arg1 corpid:(unsigned long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)handleEnterApplyTeam:(id)arg1;
- (void)initDataSource;
- (void)p_rightItemClick:(id)arg1;
- (void)initSubViews;
- (void)onMoreBtnClick:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)initNavigationItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
