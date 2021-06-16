//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKAttendanceCheckCommonViewController.h"

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "WWKAssetGroupsControllerDelegate-Protocol.h"
#import "WWKMultiImageBrowseViewControllerDelegate-Protocol.h"
#import "WWKSelectContactsViewControllerDelegate-Protocol.h"

@class AttendanceIntroTipButton, NSString;

@interface WWKAttendanceRamdonCheckViewController : WWKAttendanceCheckCommonViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, WWKAssetGroupsControllerDelegate, WWKMultiImageBrowseViewControllerDelegate, WWKSelectContactsViewControllerDelegate>
{
    struct scoped_ptr<ww_attendance::CacheLocationInfo, base::DefaultDeleter<ww_attendance::CacheLocationInfo>> location_info;
    AttendanceIntroTipButton *_introTipButton;
}

@property(retain, nonatomic) AttendanceIntroTipButton *introTipButton; // @synthesize introTipButton=_introTipButton;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cm_handleLocationResult:(unsigned long long)arg1 locations:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)cm_handleLocationResult:(_Bool)arg1 dataResult:(_Bool)arg2;
- (void)cm_handleClickCheckinButton;
- (void)cm_handleUpdateLocationFailed;
- (void)p_handleMakeCheckIn:(int)arg1 attendance:(scoped_refptr_e21d2ae3)arg2;
- (void)selectContactsViewController:(id)arg1 didConfirmToSelectContacts:(vector_89e6321f)arg2;
- (void)p_makeCheck;
- (void)p_updateUI;
- (void)p_didClickReloadLocation:(id)arg1;
- (unsigned long long)p_todayRandomCount:(const list_1084d68b *)arg1;
- (void)p_handleAdditionImageAndTextWithPhotoArray:(id)arg1 andTextnote:(id)arg2;
- (void)p_didClickAddAddition;
- (void)p_didClickAddAutoNotify;
- (void)p_didClickShowAddition;
- (void)p_showAdditionAnimation;
- (void)p_introTipDidClicked:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

