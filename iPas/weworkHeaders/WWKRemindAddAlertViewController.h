//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class WWKRemindAddAlertNoteCellView, WWKRemindAddAlertTimeSelectionCellView;

@interface WWKRemindAddAlertViewController : UITableViewController
{
    WWKRemindAddAlertNoteCellView *_noteCell;
    WWKRemindAddAlertTimeSelectionCellView *_timeCell;
}

@property(retain, nonatomic) WWKRemindAddAlertTimeSelectionCellView *timeCell; // @synthesize timeCell=_timeCell;
@property(retain, nonatomic) WWKRemindAddAlertNoteCellView *noteCell; // @synthesize noteCell=_noteCell;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)init;

@end

