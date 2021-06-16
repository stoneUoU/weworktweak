//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "WXApiManagerDelegate-Protocol.h"

@class MBProgressHUD, NSMutableArray, NSString;
@protocol WWKApplyingTableViewControllerDelegate;

@interface WWKMyTeamTableViewController : UITableViewController <WXApiManagerDelegate>
{
    vector_4c3fbd75 _myCorp_vec;
    vector_4c3fbd75 _pendingCorp_vec;
    long long _teamPageType;
    _Bool _searchCorp;
    vector_4c3fbd75 _search_corp_vec;
    NSMutableArray *_dataSource;
    double _commonCellHeight;
    MBProgressHUD *_bindWxHud;
    id <WWKApplyingTableViewControllerDelegate> _delegate;
    id _context;
    long long _confirmCorpCount;
    NSString *_mail;
}

+ (id)myTeamTableViewWithType:(long long)arg1;
@property(retain, nonatomic) NSString *mail; // @synthesize mail=_mail;
@property(nonatomic) long long confirmCorpCount; // @synthesize confirmCorpCount=_confirmCorpCount;
@property(nonatomic) __weak id context; // @synthesize context=_context;
@property(nonatomic) __weak id <WWKApplyingTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)managerBindWxFinish;
- (void)managerEndLoginRequest;
- (void)managerBeginLoginRequest;
- (void)fontSizeChange;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)p_updateEnterCorpList;
- (void)p_rightButtonClick;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)applicationWillEnterForeground;
- (void)initNavigationItem;
- (void)initSubViews;
- (void)viewDidLoad;
- (void)setSearch_corp_vec:(vector_4c3fbd75)arg1;
- (void)setCorpList:(const vector_4c3fbd75 *)arg1;
- (void)loadSearchCorp;
- (void)loadCrops;
- (void)initDataSource;
- (void)forceRefreshCorplist;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

