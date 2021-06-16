//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMUICommonViewController.h"

#import "QMUISearchControllerDelegate-Protocol.h"
#import "QMUITableViewDataSource-Protocol.h"
#import "QMUITableViewDelegate-Protocol.h"

@class NSString, QMUISearchController, QMUITableView, UISearchBar;

@interface QMUICommonTableViewController : QMUICommonViewController <QMUISearchControllerDelegate, QMUITableViewDelegate, QMUITableViewDataSource>
{
    _Bool _shouldShowSearchBar;
    QMUISearchController *_searchController;
    UISearchBar *_searchBar;
    _Bool _hasSetInitialContentInset;
    _Bool _hasHideTableHeaderViewInitial;
    long long _style;
    QMUITableView *_tableView;
    struct UIEdgeInsets _tableViewInitialContentInset;
    struct UIEdgeInsets _tableViewInitialScrollIndicatorInsets;
}

@property(nonatomic) _Bool hasHideTableHeaderViewInitial; // @synthesize hasHideTableHeaderViewInitial=_hasHideTableHeaderViewInitial;
@property(nonatomic) _Bool hasSetInitialContentInset; // @synthesize hasSetInitialContentInset=_hasSetInitialContentInset;
@property(retain, nonatomic) QMUITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) struct UIEdgeInsets tableViewInitialScrollIndicatorInsets; // @synthesize tableViewInitialScrollIndicatorInsets=_tableViewInitialScrollIndicatorInsets;
@property(nonatomic) struct UIEdgeInsets tableViewInitialContentInset; // @synthesize tableViewInitialContentInset=_tableViewInitialContentInset;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 realTitleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 realTitleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableHeaderFooterLabelInTableView:(id)arg1 identifier:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldShowSearchBarInTableView:(id)arg1;
- (_Bool)layoutEmptyView;
- (void)hideEmptyView;
- (void)showEmptyView;
- (_Bool)shouldAdjustTableViewScrollIndicatorInsetsInitially;
- (_Bool)shouldAdjustTableViewContentInsetsInitially;
- (void)contentSizeCategoryDidChanged:(id)arg1;
- (void)hideTableHeaderViewInitialIfCanWithAnimated:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (void)didInitializedWithStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)initWithStyle:(long long)arg1;
- (_Bool)shouldHideTableHeaderViewInitial;
- (void)initTableView;
- (void)searchController:(id)arg1 updateResultsForSearchString:(id)arg2;
- (_Bool)shouldHideSearchBarWhenEmptyViewShowing;
- (void)initSearchController;
@property(readonly, nonatomic) UISearchBar *searchBar;
@property(readonly, nonatomic) QMUISearchController *searchController;
@property(nonatomic) _Bool shouldShowSearchBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

