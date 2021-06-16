//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKCommonTableViewController.h"

#import "DepartmentSyncStateProxyObserverDelegate-Protocol.h"
#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "WWKDepartmentAddUserControllerDelegate-Protocol.h"
#import "WWKInteractiveLabelDelegate-Protocol.h"
#import "WWKMeInfoHeaderDelegate-Protocol.h"
#import "WWKProfileSettingDelegate-Protocol.h"

@class NSString, UIImageView, UIView, UIWebView, WWKDepartmentAddUserController, WWKInteractiveLabel, WWKUserInfoDataSource, WXCContactAbstract;
@protocol WWKUserInfoTableViewControllerDelegate;

@interface WWKUserInfoTableViewController : WWKCommonTableViewController <MFMessageComposeViewControllerDelegate, MFMailComposeViewControllerDelegate, WWKDepartmentAddUserControllerDelegate, DepartmentSyncStateProxyObserverDelegate, WWKMeInfoHeaderDelegate, WWKProfileSettingDelegate, WWKInteractiveLabelDelegate>
{
    _Bool isMe;
    _Bool _editCompleted;
    struct scoped_ptr<DepartmentSyncStateProxyObserver, base::DefaultDeleter<DepartmentSyncStateProxyObserver>> _syncProxyObserver;
    WWKDepartmentAddUserController *_addUserController;
    WWKUserInfoDataSource *_userInfoDataSource;
    _Bool _mIsLuckyMoney;
    id <WWKUserInfoTableViewControllerDelegate> _delegate;
    UIWebView *_phoneWebView;
    WXCContactAbstract *_contactAbstract;
    UIView *_waterMakeContainerView;
    UIImageView *_maskImageView;
    WWKInteractiveLabel *_inviteLabel;
}

@property(retain, nonatomic) WWKInteractiveLabel *inviteLabel; // @synthesize inviteLabel=_inviteLabel;
@property(retain, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) UIView *waterMakeContainerView; // @synthesize waterMakeContainerView=_waterMakeContainerView;
@property(nonatomic) _Bool mIsLuckyMoney; // @synthesize mIsLuckyMoney=_mIsLuckyMoney;
@property(retain, nonatomic) WXCContactAbstract *contactAbstract; // @synthesize contactAbstract=_contactAbstract;
@property(retain, nonatomic) UIWebView *phoneWebView; // @synthesize phoneWebView=_phoneWebView;
@property(nonatomic) __weak id <WWKUserInfoTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onCorpNameClick;
- (void)fontSizeDidChange;
- (void)interactiveLabel:(id)arg1 didTouchContext:(id)arg2 boundingRects:(id)arg3;
- (void)makeMobilePhoneCallWithPhoneNum:(id)arg1;
- (vector_7dcb3552)inviteSourceVids;
- (void)reloadData;
- (void)showMakePhoneAlertWithPhoneNum:(id)arg1;
- (id)internationalPhoneNum:(id)arg1;
- (void)showAlertViewWithString:(id)arg1;
- (void)p_deleteUser;
- (void)p_SendMessage;
- (void)p_onVideoClicked;
- (void)p_sendEmailToReceiver:(id)arg1;
- (void)p_sendSMSToReceiver:(id)arg1;
- (void)p_callPhoneNumber:(id)arg1 isMobile:(_Bool)arg2;
- (_Bool)isMe;
- (_Bool)p_isRTX;
- (void)deleteUserComplete;
- (void)editUserComplete:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)presentOrganizationWithDepartment:(scoped_refptr_85c18dd7)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)p_getNumberOfRowsInSection:(long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)rightNavigationItemPressed;
- (void)didClickModifyMemberCell:(const scoped_refptr_e1f85e48 *)arg1;
- (void)needReloadProfile:(const scoped_refptr_e1f85e48 *)arg1;
- (_Bool)shouldShowSettingType:(int)arg1 user:(const scoped_refptr_e1f85e48 *)arg2;
- (void)OnSyncStateChanged:(const struct SyncState *)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dismiss;
- (id)initWithContact:(const struct Contact *)arg1;
- (id)initWithUser:(scoped_refptr_e1f85e48)arg1;
- (id)initWithUser:(scoped_refptr_e1f85e48)arg1 andSuitableDepartmentID:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

