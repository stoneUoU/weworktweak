//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKCommonTableViewController.h"

#import "WWKCommonPickerDelegate-Protocol.h"
#import "WWKSelectDepartmentsViewControllerDelegate-Protocol.h"
#import "WWKUpdateMobileControllerDelegate-Protocol.h"

@class MBProgressHUD, NSMutableArray, NSMutableDictionary, NSString;
@protocol WWKDepartmentAddUserControllerDelegate;

@interface WWKDepartmentAddUserController : WWKCommonTableViewController <WWKUpdateMobileControllerDelegate, WWKSelectDepartmentsViewControllerDelegate, WWKCommonPickerDelegate>
{
    NSMutableArray *dataSource;
    vector_a024b487 department_list_;
    NSMutableArray *deptPaths;
    scoped_refptr_e1f85e48 user_;
    _Bool editMode;
    _Bool _send_invite_msg;
    MBProgressHUD *_hud;
    NSMutableDictionary *_originalCustomInfoDict;
    _Bool RTX_SYNC;
    _Bool QYH_BIND;
    _Bool BIZMAIL_BIND;
    id <WWKDepartmentAddUserControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WWKDepartmentAddUserControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)editCellIconClicked:(id)arg1;
- (void)deleteDeptCell:(id)arg1;
- (void)mobileCellDataChange:(id)arg1 countryCode:(id)arg2 mobile:(id)arg3;
- (void)editCell:(id)arg1 editTextChanged:(id)arg2;
- (void)controller:(id)arg1 didItemSelected:(id)arg2 index:(long long)arg3;
- (void)verifyMobileSuccessful:(struct PhoneItem)arg1;
- (void)selectDepartmentsViewController:(id)arg1 didConfirmToSelectDepartments:(const vector_a024b487 *)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initUserData;
- (void)save;
- (_Bool)hasEdit;
- (const char *)safeUTF8String:(id)arg1;
- (void)dissmiss;
- (void)hideHud:(_Bool)arg1 withText:(id)arg2 mode:(long long)arg3 afterDelay:(double)arg4;
- (void)showHudWithText:(id)arg1 mode:(long long)arg2;
- (void)showAlertWithText:(id)arg1;
- (void)initNavigationItems;
- (void)viewDidLoad;
- (id)initWithUser:(scoped_refptr_e1f85e48)arg1 andDepartments:(const vector_a024b487 *)arg2 andDeptPaths:(id)arg3;
- (id)initWithDepartment:(const scoped_refptr_85c18dd7 *)arg1 andDeptPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

