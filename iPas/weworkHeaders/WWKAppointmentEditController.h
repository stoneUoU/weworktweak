//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "FOXEventDateTimePickerDelegate-Protocol.h"
#import "WWKCommonPickerDelegate-Protocol.h"
#import "WWKEnterpriseContactsViewControllerDelegate-Protocol.h"

@class NSArray, NSString, WWKImageTextFieldCell, WWKTextFieldCell;

@interface WWKAppointmentEditController : UITableViewController <FOXEventDateTimePickerDelegate, WWKEnterpriseContactsViewControllerDelegate, WWKCommonPickerDelegate>
{
    NSArray *_dataSource;
    scoped_ptr_05a9e9a2 _eatFoodDetail;
    WWKTextFieldCell *_eatNameCell;
    WWKImageTextFieldCell *_wantToEatCell;
}

@property(retain, nonatomic) WWKImageTextFieldCell *wantToEatCell; // @synthesize wantToEatCell=_wantToEatCell;
@property(retain, nonatomic) WWKTextFieldCell *eatNameCell; // @synthesize eatNameCell=_eatNameCell;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)controller:(id)arg1 didItemSelected:(id)arg2 index:(long long)arg3;
- (void)enterpriseContactsViewController:(id)arg1 didConfirmToSelectContacts:(vector_89e6321f)arg2 andDepartments:(vector_a024b487)arg3;
- (void)didDateSelected:(id)arg1 dateTime:(id)arg2;
- (void)updateFrameWithHeight:(float)arg1;
- (void)updateFrameWithNumOfCells:(long long)arg1 andCtrl:(id)arg2;
- (void)dateChange:(id)arg1;
- (void)p_showTimePicker;
- (void)p_checkRightItemEnable;
- (void)p_updateEatFoodName:(id)arg1;
- (void)p_updateEatFoodAddress:(id)arg1;
- (void)p_showToast:(id)arg1 mode:(long long)arg2;
- (double)p_getDefaultDateTime;
- (void)showTimeMenu;
- (void)onRightBtnClick:(id)arg1;
- (void)onDismissBtnClick:(id)arg1;
- (id)p_getIndexpathWithType:(unsigned long long)arg1;
- (id)p_cellDetailTitleWithIndexPath:(id)arg1;
- (id)p_cellTitleWithIndexPath:(id)arg1;
- (Class)p_cellClassWithIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithEatFoodDetail:(scoped_ptr_05a9e9a2)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
