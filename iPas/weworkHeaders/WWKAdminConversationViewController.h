//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSMutableArray;

@interface WWKAdminConversationViewController : UITableViewController
{
    NSMutableArray *_convAdminCellTypes;
    scoped_refptr_fd92d7bf _conversation;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)p_cellTypeWithIndexPath:(id)arg1;
- (id)p_mutableCopyWithCellTypes:(id)arg1;
- (id)p_cellTitleForCellType:(unsigned long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithConversation:(scoped_refptr_fd92d7bf)arg1;

@end

