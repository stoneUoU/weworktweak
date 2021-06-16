//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKCommonSearchController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WWKRecentSearchCellDelegate-Protocol.h"
#import "WWKSearchBarDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView, UIView;

@interface WWKGlobalSearchController : WWKCommonSearchController <UITableViewDelegate, UITableViewDataSource, WWKSearchBarDelegate, WWKRecentSearchCellDelegate>
{
    vector_15ecb735 recent_search_item_list_;
    struct vector<SearchResultWithHighlightedUser, std::__1::allocator<SearchResultWithHighlightedUser>> global_search_user_list_;
    struct vector<std::__1::pair<scoped_refptr<model::Conversation>, std::__1::pair<std::__1::vector<std::__1::pair<int, int>, std::__1::allocator<std::__1::pair<int, int>>>, std::__1::vector<SearchResultWithHighlightedUser, std::__1::allocator<SearchResultWithHighlightedUser>>>>, std::__1::allocator<std::__1::pair<scoped_refptr<model::Conversation>, std::__1::pair<std::__1::vector<std::__1::pair<int, int>, std::__1::allocator<std::__1::pair<int, int>>>, std::__1::vector<SearchResultWithHighlightedUser, std::__1::allocator<SearchResultWithHighlightedUser>>>>>> global_search_conversation_info_vector_;
    NSMutableArray *global_search_app_items_;
    vector_4f63976e global_search_conversation_messages_vector_;
    struct vector<mail::model::pb::NewMailTips, std::__1::allocator<mail::model::pb::NewMailTips>> global_search_mails_vector_;
    NSMutableArray *global_search_favorite_items_;
    unsigned long long _searchMoreType;
    NSString *_recordMainSearchText;
    UIView *_animatedMaskView;
    UITableView *_moreTableView;
    UITableView *_recentTableView;
}

@property(retain, nonatomic) UITableView *recentTableView; // @synthesize recentTableView=_recentTableView;
@property(retain, nonatomic) UITableView *moreTableView; // @synthesize moreTableView=_moreTableView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (pair_bdcedc58)pairInSearchConversationInfoVectorAtIndex:(long long)arg1 searchType:(unsigned long long)arg2;
- (unsigned long long)sectionTypeWithSection:(long long)arg1;
- (long long)dataSourceIndexWithCellIndexPath:(id)arg1;
- (id)contentsTableView;
- (id)titleWithSectionType:(unsigned long long)arg1;
- (long long)dataSourceSizeWithType:(unsigned long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1 inTableView:(id)arg2;
- (_Bool)isTheLastRowInSection:(id)arg1;
- (_Bool)isTheSecondLastRowInsection:(id)arg1;
- (long long)moreCellIndexWithType:(unsigned long long)arg1;
- (_Bool)showNetWorkSearchCell;
- (_Bool)isNetworkSearchIndexPath:(id)arg1;
- (_Bool)isMoreIndexPath:(id)arg1;
- (void)pushToPersonalChatWithUser:(scoped_refptr_e1f85e48)arg1;
- (void)pushToNextControllerWithSectionType:(unsigned long long)arg1 AtIndexPath:(id)arg2;
- (void)popmoreTableViewAnimated:(_Bool)arg1;
- (void)pushmoreTableViewAnimated:(_Bool)arg1;
- (void)handleLeftEdgeGesture:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)pushConversationView:(scoped_refptr_fd92d7bf)arg1;
- (void)recentSearchCell:(id)arg1 didClickCellWithItem:(struct RecentSearchItem)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)contentsTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)moreTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)recentTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)contentsTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)moreTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)recentTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)searchBarDidClickBackButton:(id)arg1;
- (void)reloadData;
- (void)needRefreshData;
- (void)clearData;
- (void)searchDisplayControllerWillEndSearch;
- (void)searchBar:(id)arg1 searchTextDidChange:(id)arg2;
- (void)searchDisplayControllerWillBeginSearch;
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
