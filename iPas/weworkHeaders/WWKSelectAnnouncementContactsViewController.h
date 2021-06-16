//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WWKSelectAnnouncementContactsBottomBarDelegate-Protocol.h"
#import "WWKSelectButtonTableViewCellDelegate-Protocol.h"
#import "WWKSelectContactsBarDelegate-Protocol.h"

@class NSString, UITableView, UITapGestureRecognizer, WWKOrganizationDataSource, WWKSearchBar;
@protocol WWKSelectAnnouncementContactsViewControllerDelegate;

@interface WWKSelectAnnouncementContactsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, WWKSelectAnnouncementContactsBottomBarDelegate, WWKSelectContactsBarDelegate, WWKSelectButtonTableViewCellDelegate, UISearchBarDelegate>
{
    vector_89e6321f users_unable_selected;
    vector_89e6321f user_search_list;
    double _currentKeyboardHeight;
    UITapGestureRecognizer *_tapToDismissSearchViewGesture;
    _Bool _isSelectDepartmentMode;
    vector_46470f89 recent_user_vector_;
    vector_46470f89 valid_recent_user_vector_;
    id <WWKSelectAnnouncementContactsViewControllerDelegate> _delegate;
    UITableView *_departmentTableView;
    UITableView *_searchTableView;
    UITableView *_recentUsersTableView;
    WWKOrganizationDataSource *_organizationDatasource;
    WWKSearchBar *_searchBar;
}

@property(retain, nonatomic) WWKSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) WWKOrganizationDataSource *organizationDatasource; // @synthesize organizationDatasource=_organizationDatasource;
@property(retain, nonatomic) UITableView *recentUsersTableView; // @synthesize recentUsersTableView=_recentUsersTableView;
@property(retain, nonatomic) UITableView *searchTableView; // @synthesize searchTableView=_searchTableView;
@property(retain, nonatomic) UITableView *departmentTableView; // @synthesize departmentTableView=_departmentTableView;
@property(nonatomic) __weak id <WWKSelectAnnouncementContactsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)deSelectAll;
- (void)selectAll;
- (void)removeSearchTableViewWhenSearchKeyIsEmpty;
- (void)clearSearchTableView;
- (_Bool)isUserEnableToSelect:(scoped_refptr_e1f85e48)arg1;
- (_Bool)isDepartmentHasSelected:(scoped_refptr_85c18dd7)arg1;
- (_Bool)isUserHasSelected:(scoped_refptr_e1f85e48)arg1;
- (id)bottomBar;
- (void)pushToNextNavigationWithDepartment:(scoped_refptr_85c18dd7)arg1;
- (id)sectionIndexTitlesForRecentContactsTableView;
- (void)checkBottomButtonIfShouldAppear;
- (void)tapOnSearchTableView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)selectAnnouncementContactsBottomBar:(id)arg1 didRemoveContact:(const struct UserOrDepartment *)arg2;
- (void)selectAnnouncementContactsBottomBar:(id)arg1 didConfirmSelectContacts:(const vector_fcf831c7 *)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)searchTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)departmentTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)recentUsersTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)selectButtonTableViewCell:(id)arg1 selected:(_Bool)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)searchTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onClickaccessoryButton:(id)arg1;
- (id)departmentTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)recentUsersTableview:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)p_cancelItemPressed:(id)arg1;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)buildRecentUsersTableViewIfNeed;
- (void)buildDepartmentTableViewIfNeed;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithUserList:(vector_89e6321f)arg1 department:(scoped_refptr_85c18dd7)arg2;
- (id)initWithMemberList:(vector_4ea3d2e4)arg1;
- (id)initWithUserList:(vector_89e6321f)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
