//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKCommonTableViewController.h"

#import "ContactServiceObserverDelegate-Protocol.h"
#import "DepartmentSyncStateProxyObserverDelegate-Protocol.h"
#import "NotificationProxyObserverDelegate-Protocol.h"
#import "SmartDepartmentProxyObserverDelegate-Protocol.h"
#import "WWKDepartmentAddUserControllerDelegate-Protocol.h"
#import "WWKMainPagePopMenuViewDelegate-Protocol.h"
#import "WWKOrganizationCellDelegate-Protocol.h"
#import "WWKSelectContactsViewControllerDelegate-Protocol.h"
#import "WWKSelectDepartmentsViewControllerDelegate-Protocol.h"
#import "WWKUserInfoTableViewControllerDelegate-Protocol.h"

@class MBProgressHUD, NSArray, NSString, UISearchDisplayController, UIView, WWKDepartmentAddUserController, WWKDepartmentNoUsersTipView, WWKMainPagePopMenuView, WWKOrganizationDataSource, WWKOrganizationSearchController, WWKSearchBar, WWKWebBrowserTitleView;

@interface WWKOrganizationController : WWKCommonTableViewController <DepartmentSyncStateProxyObserverDelegate, SmartDepartmentProxyObserverDelegate, NotificationProxyObserverDelegate, WWKDepartmentAddUserControllerDelegate, WWKUserInfoTableViewControllerDelegate, WWKSelectDepartmentsViewControllerDelegate, WWKOrganizationCellDelegate, WWKSelectContactsViewControllerDelegate, ContactServiceObserverDelegate, WWKMainPagePopMenuViewDelegate>
{
    _Bool _showCancelNavigationItem;
    struct scoped_ptr<DepartmentSyncStateProxyObserver, base::DefaultDeleter<DepartmentSyncStateProxyObserver>> _syncProxyObserver;
    struct scoped_ptr<SmartDepartmentProxyObserver, base::DefaultDeleter<SmartDepartmentProxyObserver>> _departmentProxyObserver;
    struct scoped_ptr<NotificationProxyObserver, base::DefaultDeleter<NotificationProxyObserver>> _push_notification_observer;
    struct scoped_ptr<ContactServiceProxyObserver, base::DefaultDeleter<ContactServiceProxyObserver>> _contactProxyObserver;
    _Bool cellDeleteNeedAnimating;
    MBProgressHUD *_hud;
    _Bool _operationFinished;
    WWKDepartmentAddUserController *_addUsercontroller;
    _Bool _needHideDeleteUserHud;
    _Bool _needHideDeleteDeptHud;
    _Bool _inEditingSelectUserMode;
    vector_89e6321f _selectedUserList;
    _Bool _needShowSelectUsersImmediately;
    WWKOrganizationSearchController *_searchController;
    WWKSearchBar *_searchBar;
    UISearchDisplayController *_searchDisplayController;
    WWKWebBrowserTitleView *_titleView;
    WWKDepartmentNoUsersTipView *_noUsersTipView;
    NSArray *_sectionIndexs;
    UIView *_bottomView;
    UIView *_headerCoverView;
    WWKOrganizationDataSource *_dataSource;
    WWKMainPagePopMenuView *_popMenuView;
}

@property(retain, nonatomic) WWKMainPagePopMenuView *popMenuView; // @synthesize popMenuView=_popMenuView;
@property(retain, nonatomic) WWKOrganizationDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIView *headerCoverView; // @synthesize headerCoverView=_headerCoverView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) NSArray *sectionIndexs; // @synthesize sectionIndexs=_sectionIndexs;
@property(retain, nonatomic) WWKDepartmentNoUsersTipView *noUsersTipView; // @synthesize noUsersTipView=_noUsersTipView;
@property(retain, nonatomic) WWKWebBrowserTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UISearchDisplayController *searchDisplayController; // @synthesize searchDisplayController=_searchDisplayController;
@property(retain, nonatomic) WWKSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) WWKOrganizationSearchController *searchController; // @synthesize searchController=_searchController;
@property(nonatomic) _Bool needShowSelectUsersImmediately; // @synthesize needShowSelectUsersImmediately=_needShowSelectUsersImmediately;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)wwkMainPagePopMenuViewControllerDidRemoveFromSuperView;
- (void)wwkMainPagePopMenuViewControllerDidSelected:(long long)arg1;
- (void)onCellPropertyChanged;
- (void)selectDepartmentsViewController:(id)arg1 didConfirmToSelectDepartments:(const vector_a024b487 *)arg2;
- (void)onDeleteUserCompleted;
- (void)addUserComplete:(id)arg1;
- (_Bool)canSelectAllUsersInSelectContactsViewController:(id)arg1;
- (_Bool)canSelectDepartmentInSelectContactsViewController:(id)arg1;
- (void)selectContactsViewController:(id)arg1 didConfirmToSelectContacts:(vector_89e6321f)arg2;
- (void)didClickCancelButtonInSelectContactsViewController:(id)arg1;
- (void)onContactListUnradCountChanged:(const int *)arg1 oldCount:(int)arg2 newCount:(int)arg3;
- (void)OnApplyUnreadCountChanged:(int)arg1;
- (void)onSyncContactFinish:(const int *)arg1 changed:(_Bool)arg2;
- (void)onSyncContactStart:(const int *)arg1;
- (void)onTextViewEditting:(id)arg1;
- (void)hideHud:(_Bool)arg1 withText:(id)arg2 mode:(long long)arg3 afterDelay:(double)arg4;
- (void)showHudWithText:(id)arg1 mode:(long long)arg2;
- (void)didChangedExternalContactDisplayMode;
- (void)fontSizeChange;
- (void)uploadContacts;
- (_Bool)hasClickArchTab;
- (_Bool)isUploadContactValid;
- (void)didClickArchTab;
- (void)p_setupFooterRefresh;
- (void)p_addContactWaterMark;
- (_Bool)needStarContactCell;
- (id)sectionIndexTitlesForContentTableView;
- (void)reportFinishGettingRootDepartment;
- (void)p_showAddDepartmentDialogWithErrorString:(id)arg1 defaultString:(id)arg2;
- (void)p_showModifyDepartmentDialogWithErrorString:(id)arg1 defaultString:(id)arg2;
- (void)enterEditingModeToSelectUser;
- (void)cancelEditMode;
- (void)modifyOrganization;
- (void)superAdminRightItemClick;
- (void)didClickAddStarContacts;
- (const vector_a024b487 *)getChildDepartments;
- (void)addExternalFriends;
- (void)showInviteSheet;
- (_Bool)needGroupSectionIndex;
- (_Bool)showEditingStyleDelete:(const struct ArchObject *)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)sectionWithTitleIndex:(long long)arg1;
- (long long)titleIndexWithSection:(long long)arg1;
- (id)wwk_tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)needShowSeparator:(id)arg1 archObect:(const struct ArchObject *)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)cancelNavigationItemPressed:(id)arg1;
- (void)needReloadView;
@property(readonly, nonatomic) _Bool isStarContactDepartment;
- (void)resetParentControllersChain;
- (void)onNotification:(int)arg1 source:(const struct NotificationSource *)arg2 details:(const struct NotificationDetails *)arg3;
- (void)OnDepartmentMembersChanged:(vector_89e6321f)arg1;
- (void)OnDepartmentChildsChanged:(vector_7dcb3552)arg1;
- (void)OnDepartmentPropertyChanged:(scoped_refptr_85c18dd7)arg1;
- (void)OnSyncStateChanged:(const struct SyncState *)arg1;
- (void)reloadViews;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)updateNavigationBarItems;
- (void)initDataSource;
- (void)selectedUsersMove;
- (void)showBottomView:(_Bool)arg1;
- (void)setUpBottonView;
- (void)viewDidLoad;
- (id)initWithDepartment:(scoped_refptr_85c18dd7)arg1 showCancelItem:(_Bool)arg2;
- (id)initWithDepartment:(scoped_refptr_85c18dd7)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

