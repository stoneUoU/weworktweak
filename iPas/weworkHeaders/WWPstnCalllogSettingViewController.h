//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKCommonTableViewController.h"

@class UIViewController;

@interface WWPstnCalllogSettingViewController : WWKCommonTableViewController
{
    scoped_refptr_fd92d7bf _conversation;
    UIViewController *_weakParentCtrlr;
}

@property(nonatomic) __weak UIViewController *weakParentCtrlr; // @synthesize weakParentCtrlr=_weakParentCtrlr;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)p_enterApplication;
- (_Bool)isNoDisturbCell:(id)arg1;
- (_Bool)isStickySwitchCell:(id)arg1;
- (void)onDidPushApplicationBriefController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setConversation:(scoped_refptr_fd92d7bf)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

