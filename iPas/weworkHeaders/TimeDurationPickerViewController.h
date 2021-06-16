//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSString, UIPickerView;
@protocol TimeDurationPickerViewControllerDelegate;

@interface TimeDurationPickerViewController : UITableViewController <UIPickerViewDataSource, UIPickerViewDelegate>
{
    unsigned long long _selectedHour;
    unsigned long long _selectedMinute;
    UIPickerView *_pickerView;
    _Bool _isSelectedFinished;
    id <TimeDurationPickerViewControllerDelegate> _delegate;
    unsigned long long _maxHours;
}

@property(nonatomic) unsigned long long maxHours; // @synthesize maxHours=_maxHours;
@property(nonatomic) __weak id <TimeDurationPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didDismissActionView;
- (void)willDismissActionView;
- (void)handleOkButtonClick:(id)arg1;
- (void)handleCancelButtonClick:(id)arg1;
- (void)selectHour:(unsigned long long)arg1 withMinute:(unsigned long long)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
