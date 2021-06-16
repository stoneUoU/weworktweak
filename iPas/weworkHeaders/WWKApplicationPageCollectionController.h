//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AppointmentServiceProxyObserverDelegate-Protocol.h"
#import "NotificationProxyObserverDelegate-Protocol.h"
#import "SPTableViewCustomEditingViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "WWKApplicationOperationTableViewControllerDelegate-Protocol.h"
#import "WWKAppointmentListControllerDelegate-Protocol.h"

@class NSMutableArray, NSString, UICollectionView, UIView, WWKApplicationEmptyPageView;

@interface WWKApplicationPageCollectionController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, NotificationProxyObserverDelegate, AppointmentServiceProxyObserverDelegate, WWKAppointmentListControllerDelegate, SPTableViewCustomEditingViewDelegate, WWKApplicationOperationTableViewControllerDelegate>
{
    UICollectionView *_collectionView;
    WWKApplicationEmptyPageView *_emptyPageView;
    UIView *_topBackgroundView;
    NSMutableArray *_applist;
    struct scoped_ptr<NotificationProxyObserver, base::DefaultDeleter<NotificationProxyObserver>> push_notification_observer;
    struct scoped_ptr<AppointmentServiceProxyObserver, base::DefaultDeleter<AppointmentServiceProxyObserver>> _appointmentServiceProxyObserver;
    NSMutableArray *_folderAppIds;
    NSMutableArray *editAppList;
    _Bool _showFolderApp;
    _Bool _isEditing;
    CDUnknownBlockType _swipeActionCallBack;
}

+ (id)createAppItemWithDefaultApp:(const struct DefaultApplication *)arg1;
+ (void)pushToMailApp:(id)arg1 withDefaultApp:(const struct DefaultApplication *)arg2 hideBottomBar:(_Bool)arg3 backTo:(Class)arg4;
+ (void)push:(id)arg1 withDefaultApp:(const struct DefaultApplication *)arg2 hideBottomBar:(_Bool)arg3;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(copy, nonatomic) CDUnknownBlockType swipeActionCallBack; // @synthesize swipeActionCallBack=_swipeActionCallBack;
@property(nonatomic) _Bool showFolderApp; // @synthesize showFolderApp=_showFolderApp;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onApplicationItemDidRemoveInEditMode:(id)arg1;
- (void)applicationItemDidHidden:(id)arg1;
- (void)applicationItemDidUnhidden:(id)arg1;
- (void)onAppointMessageTipsClear;
- (void)OnNotifyUpdateAppointment:(const vector_0d9de00b *)arg1;
- (void)OnNotifyAppendAppointment:(const vector_0d9de00b *)arg1;
- (void)navigation:(id)arg1 pushToViewController:(id)arg2;
- (void)exposeRedPointReport;
- (void)checkParentCellRedPoint;
- (id)redPointKeysWithItem:(id)arg1;
- (void)p_onFinishNaviBarClicked:(id)arg1;
- (_Bool)p_openApiItemshouldShow:(struct WSCorpAppDetail)arg1;
- (id)p_createAppSectionItemWithType:(long long)arg1;
- (id)p_getAppSectionItemWithType:(long long)arg1;
- (id)p_createAppItemWithOpenApiApp:(const struct WSCorpAppDetail *)arg1;
- (id)p_createAppItemWithThirdApp:(const struct ThirdApplication *)arg1;
- (id)p_createAppItemWithDefaultApp:(const struct DefaultApplication *)arg1;
- (void)p_pushModifyMailController;
- (id)p_unhiddenApps;
- (id)p_hiddenApps;
- (_Bool)p_showRightSepForIndexPath:(id)arg1;
- (id)p_appleItemForIndexPath:(id)arg1;
- (unsigned long long)p_totalCountForApplists;
- (void)onNotification:(int)arg1 source:(const struct NotificationSource *)arg2 details:(const struct NotificationDetails *)arg3;
- (void)updateUI;
- (void)onDynamicFontSizeDidChange;
- (void)onDidPushForumController:(id)arg1;
- (void)onDidPushMoreAppController:(id)arg1;
- (void)onDidPushVirtualMoreAppController:(id)arg1;
- (void)onDidPushAppointAppController:(id)arg1;
- (void)onDidPushOpenApiApp:(id)arg1;
- (void)onDidPushApplicationBriefController:(id)arg1;
- (void)onDidPushThirdApp:(id)arg1;
- (void)onDidPushEnterpriseMailController:(id)arg1;
- (void)onDidPstnCallLogListController:(id)arg1;
- (void)onDidPushCloudDiskController:(id)arg1;
- (void)onDidPushAttendanceController:(id)arg1;
- (void)onDidPushAnnouncementListCtroller:(id)arg1;
- (void)onDidPushExpenseCtroller:(id)arg1;
- (void)onDidPushAskForLeaveCtroller:(id)arg1;
- (void)onDidPushWechatCustomServiceCtroller:(id)arg1;
- (void)onDidPushAppRemoveIcon:(id)arg1;
- (void)onDidPushAppMoreIcon:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)folderAppsIdSaveKey;
- (_Bool)isFolderApp:(unsigned long long)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)initNavigationItems;
- (void)initData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
