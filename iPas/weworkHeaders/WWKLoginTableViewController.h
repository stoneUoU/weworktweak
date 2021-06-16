//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "UITextFieldDelegate-Protocol.h"
#import "WWKLoginTableViewForgetCellDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UITextField;

@interface WWKLoginTableViewController : UITableViewController <UITextFieldDelegate, WWKLoginTableViewForgetCellDelegate>
{
    NSMutableArray *_dataSource;
    UITextField *activeField_;
    struct Profile *current_profile_;
    NSString *current_domain;
    NSString *current_account;
    UIButton *loginButton_;
}

- (void).cxx_destruct;
- (void)showAlertViewWithString:(id)arg1;
- (void)loginButtonClicked:(id)arg1;
- (_Bool)p_isReachability;
- (_Bool)p_isLoginButtonValidate;
- (void)loginTableViewForgetCellDidPressForgetButton:(id)arg1;
- (void)tableViewTap;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)p_onTextFieldDidChange;
- (void)textFieldDidBeginEditing:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initDataSource;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
