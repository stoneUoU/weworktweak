//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "QMUITextFieldDelegate-Protocol.h"
#import "QMUITextViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "WWKAssetGroupsControllerDelegate-Protocol.h"
#import "WWKEmotionPanelDelegate-Protocol.h"
#import "WWKMultiImageBrowseViewControllerDelegate-Protocol.h"
#import "WWKPickerViewControllerDelegate-Protocol.h"
#import "WWKSelectContactsViewControllerDelegate-Protocol.h"

@class CALayer, NSMutableArray, NSString, QMUIButton, QMUITextView, UIButton, UIView, WWKForumPostGalleryView, WWKMoreStyleButton, WWKWorklogExperienceBannerView;
@protocol WWKWorkLogViewControllerDelegate;

@interface WWKWorkLogViewController : UIViewController <QMUITextFieldDelegate, QMUITextViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, WWKAssetGroupsControllerDelegate, WWKMultiImageBrowseViewControllerDelegate, WWKEmotionPanelDelegate, WWKSelectContactsViewControllerDelegate, WWKPickerViewControllerDelegate>
{
    NSMutableArray *_images;
    NSMutableArray *_editOrgImages;
    unsigned long long _type;
    int _journalType;
    vector_7dcb3552 _reportUserList;
    struct JournalEntry _logInfo;
    _Bool _hasAppeared;
    _Bool _viewWillPop;
    _Bool _isShowingKeyboard;
    _Bool _isDraftLoading;
    _Bool _shouldNotShowKeyboard;
    id <WWKWorkLogViewControllerDelegate> _delegate;
    UIView *_contentView;
    QMUITextView *_contentTextView;
    UIView *_inputAccessoryView;
    WWKForumPostGalleryView *_galleryView;
    UIView *_toolbar;
    QMUIButton *_worklogTypeButton;
    WWKMoreStyleButton *_reportersButton;
    UIButton *_publishButton;
    WWKWorklogExperienceBannerView *_guideBannerView;
    CALayer *_toolbarDividerLayer;
    CALayer *_toolbarReporterDividerLayer;
    double _keyboardHeight;
    double _galleryMarginBottom;
    double _contentTextViewPrevHeight;
    struct UIEdgeInsets _contentViewInset;
}

@property(nonatomic) struct UIEdgeInsets contentViewInset; // @synthesize contentViewInset=_contentViewInset;
@property(nonatomic) double contentTextViewPrevHeight; // @synthesize contentTextViewPrevHeight=_contentTextViewPrevHeight;
@property(nonatomic) _Bool shouldNotShowKeyboard; // @synthesize shouldNotShowKeyboard=_shouldNotShowKeyboard;
@property(nonatomic) _Bool isDraftLoading; // @synthesize isDraftLoading=_isDraftLoading;
@property(nonatomic) double galleryMarginBottom; // @synthesize galleryMarginBottom=_galleryMarginBottom;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) _Bool isShowingKeyboard; // @synthesize isShowingKeyboard=_isShowingKeyboard;
@property(retain, nonatomic) CALayer *toolbarReporterDividerLayer; // @synthesize toolbarReporterDividerLayer=_toolbarReporterDividerLayer;
@property(retain, nonatomic) CALayer *toolbarDividerLayer; // @synthesize toolbarDividerLayer=_toolbarDividerLayer;
@property(retain, nonatomic) WWKWorklogExperienceBannerView *guideBannerView; // @synthesize guideBannerView=_guideBannerView;
@property(retain, nonatomic) UIButton *publishButton; // @synthesize publishButton=_publishButton;
@property(retain, nonatomic) WWKMoreStyleButton *reportersButton; // @synthesize reportersButton=_reportersButton;
@property(retain, nonatomic) QMUIButton *worklogTypeButton; // @synthesize worklogTypeButton=_worklogTypeButton;
@property(retain, nonatomic) UIView *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) WWKForumPostGalleryView *galleryView; // @synthesize galleryView=_galleryView;
@property(retain, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(retain, nonatomic) QMUITextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <WWKWorkLogViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)shouldHoldBackButtonEvent;
- (void)loadLastWorkLogType;
- (void)saveLastWorkLogType;
- (void)doAfterLoadDraft:(int)arg1 withJournalEntry:(const struct JournalEntry *)arg2;
- (id)getDraftPicSaveRootPath:(_Bool)arg1;
- (void)deleteDraftImage:(id)arg1;
- (void)copyDraftImageWithPhotos:(id)arg1;
- (id)getRelativeDraftImageDir;
- (id)getDaftImageDir;
- (void)loadDraft;
- (void)updateDraft;
- (_Bool)shouldSaveDraft;
- (void)checkUpdateDraftWhileExit;
- (void)removeDraft;
- (void)asyncLoadLocalImage:(struct JournalEntry)arg1;
- (void)p_paraeWorkLogInfo:(struct JournalEntry *)arg1 needLayout:(_Bool)arg2;
- (void)setHasDraft:(_Bool)arg1;
- (_Bool)hasDraft;
- (struct JournalEntry)gengeWorkLogUseCurrentInfo;
- (void)p_updateDefualtReporters:(int)arg1 withReporterList:(const vector_d87a6415 *)arg2;
- (void)p_getDefualtReportersVid;
- (void)p_updateReporterInfos:(int)arg1 buttonTitle:(id)arg2 showActionButton:(_Bool)arg3 withInfo:(const scoped_refptr_8a36260b *)arg4;
- (void)p_updateBottomView;
- (void)p_updateContentPlaceHolder;
- (void)p_updateContentText;
- (void)p_updateTopView;
- (void)p_layoutToolbar;
- (void)p_layoutGalleryView;
- (void)p_updateUI;
- (id)p_getVaildImages;
- (void)p_onGuideBtn;
- (_Bool)p_onBackBtn;
- (void)p_updateBannerGuide;
- (void)p_showNoNetworkForTiyan;
- (void)p_removeKeyboardNotification;
- (void)p_registKeyboardNotification;
- (_Bool)textViewShouldReturn:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textView:(id)arg1 newHeightAfterTextChanged:(double)arg2;
- (void)textView:(id)arg1 didPreventTextChangeInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)onBottomViewActionButtonClicked:(id)arg1;
- (void)onTopViewLogHistoryButtonClicked:(id)arg1;
- (void)onTopViewLogTypeButtonClicked:(id)arg1;
- (void)didClickCancelButtonInSelectContactsViewController:(id)arg1;
- (void)selectContactsViewController:(id)arg1 didConfirmToSelectContacts:(vector_89e6321f)arg2;
- (id)titleForNumberExceedMax:(id)arg1;
- (long long)numberOfMaxSelectedContacts:(id)arg1;
- (void)didPickerViewSelectedItemAtIndex:(long long)arg1;
- (void)didWillPickerViewCancel;
- (void)swipToHideKeyboard;
- (void)onPvMergeWillOpen:(id)arg1;
- (void)photoItemDidDelete:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingImage:(id)arg2 editingInfo:(id)arg3;
- (void)_chooseImageViaCamera;
- (void)didCancel;
- (void)sendImg:(id)arg1;
- (void)didFinishPickPhotos:(id)arg1 isSendOriginalSize:(_Bool)arg2;
- (void)_chooseImageViaAlbum;
- (void)windowDidBecomeKeyWindow:(id)arg1;
- (void)imageDidTap:(id)arg1;
- (void)handlePublishButtonEvent:(id)arg1;
- (void)handleImageButtonEvent:(id)arg1;
- (void)publishProcdureOnline:(id)arg1;
- (void)showNetworkUnavailableAlert;
- (void)addImages:(id)arg1;
- (void)showKeyboardIfNeeded;
- (double)keyboardOrPanelHeight;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)layoutViewsForKeyboardEvent;
- (void)layoutTextViews;
- (void)viewDidLayoutSubviews;
- (_Bool)canPopViewController;
- (void)viewDidLoad;
- (void)p_initLogic;
- (void)dealloc;
- (id)initWithLogEntites:(struct JournalEntry *)arg1 withType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
