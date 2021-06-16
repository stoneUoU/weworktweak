//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "WWKBlackListInfoControllerDelegate-Protocol.h"
#import "WWKBlackListSearchControllerDelegate-Protocol.h"

@class NSMutableArray, NSString, WWKBlackListSearchController, WWKSearchBar;

@interface WWKMailBlackListController : UITableViewController <WWKBlackListSearchControllerDelegate, WWKBlackListInfoControllerDelegate>
{
    WWKSearchBar *_searchBar;
    NSMutableArray *_emailAddressGroups;
    NSMutableArray *_sectionTitles;
    WWKBlackListSearchController *_searchController;
}

@property(retain, nonatomic) WWKBlackListSearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) NSMutableArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(retain, nonatomic) NSMutableArray *emailAddressGroups; // @synthesize emailAddressGroups=_emailAddressGroups;
@property(nonatomic) __weak WWKSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)didSelectEmailAddress:(id)arg1;
- (void)didRemoveEmailAddress:(id)arg1;
- (_Bool)p_isLastRowInSection:(id)arg1;
- (_Bool)p_isFirstRowInSection:(id)arg1;
- (void)p_updateTableBackGroundView;
- (void)p_removeItemWithIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

