//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UIViewController;
@protocol WWKChooseAtSearchControllerDelegate;

@interface WWKChooseAtSearchController : NSObject <UISearchBarDelegate, UISearchDisplayDelegate, UITableViewDelegate, UITableViewDataSource>
{
    vector_89e6321f _search_user_list;
    vector_89e6321f _userList;
    scoped_refptr_fd92d7bf _conversation;
    id <WWKChooseAtSearchControllerDelegate> _delegate;
    UIViewController *_contentsController;
}

@property(nonatomic) __weak UIViewController *contentsController; // @synthesize contentsController=_contentsController;
@property(nonatomic) __weak id <WWKChooseAtSearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (vector_89e6321f)p_searchUsers:(basic_string_a490aa4c)arg1;
- (id)contentsSearchDisplayController;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)isSearchControllerActive;
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2 conversation:(scoped_refptr_fd92d7bf *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

