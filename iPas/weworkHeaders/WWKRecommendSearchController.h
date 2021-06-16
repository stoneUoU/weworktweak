//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKCommonSearchController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString;

@interface WWKRecommendSearchController : WWKCommonSearchController <UITableViewDelegate, UITableViewDataSource>
{
    vector_89e6321f _user_list;
    unsigned long long _searchType;
}

@property(nonatomic) unsigned long long searchType; // @synthesize searchType=_searchType;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)contentsSearchDisplayController;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)needFetchAllContactsToMemory;
- (void)searchDisplayControllerWillBeginSearch;
- (void)needRefreshData;
- (void)clearData;
- (void)searchBar:(id)arg1 searchTextDidChange:(id)arg2;
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
