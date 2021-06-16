//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "WWKConversationMembersEditCellDelegate-Protocol.h"
#import "WWKSelectContactsViewControllerDelegate-Protocol.h"

@class MBProgressHUD, NSArray, NSString;

@interface WWKChatInfoController : UITableViewController <WWKConversationMembersEditCellDelegate, WWKSelectContactsViewControllerDelegate>
{
    scoped_refptr_fd92d7bf _conversation;
    NSArray *_cellTypes;
    MBProgressHUD *_progressHUD;
}

@property(retain, nonatomic) MBProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)hideProgressHUD:(_Bool)arg1;
- (void)showProgressHUDWithMessage:(id)arg1;
- (unsigned long long)cellTypeWithIndexPath:(id)arg1;
- (id)cellTitlesWithIndexPath:(id)arg1;
- (void)selectContactsViewController:(id)arg1 didConfirmToSelectContacts:(vector_89e6321f)arg2;
- (_Bool)removeItemShouldShowInMembersEditCell:(id)arg1;
- (void)addItemClickedInMembersEditCell:(id)arg1;
- (void)membersEditCell:(id)arg1 didClickAvatarWithMember:(scoped_refptr_b71b28ca)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)needShowMember:(_Bool)arg1;
- (void)setConversation:(scoped_refptr_fd92d7bf)arg1;
- (void)setConversation:(scoped_refptr_fd92d7bf)arg1 needShowMemeber:(_Bool)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
