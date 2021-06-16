//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MailProxyObserverDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"
#import "WWContactPickerViewDelegate-Protocol.h"
#import "WWFavoritesListSelectDelegate-Protocol.h"
#import "WWKAssetGroupsControllerDelegate-Protocol.h"
#import "WWKMailEditorFooterDelegate-Protocol.h"
#import "WWKMultiImageBrowseViewControllerDelegate-Protocol.h"
#import "WWMailEditorDelegate-Protocol.h"
#import "WeDrawViewControllerDelegate-Protocol.h"

@class NSDictionary, NSString, NSTimerProxy, UIButton, UIImagePickerController, UIView, WWContactPickerView, WWKFloatingTipView, WWKMailAttachmentButton, WWKMailEditorFooter, WWMailEditor;

@interface WWKComposeMailViewController : UIViewController <WWKMailEditorFooterDelegate, WWKAssetGroupsControllerDelegate, WWContactPickerViewDelegate, WWMailEditorDelegate, MailProxyObserverDelegate, WWFavoritesListSelectDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIWebViewDelegate, WWKMultiImageBrowseViewControllerDelegate, WeDrawViewControllerDelegate>
{
    double _currentKeyboardHeight;
    scoped_refptr_b418b350 _mail;
    _Bool _isNewDraft;
    _Bool _contentModified;
    struct scoped_ptr<MailSmartProxyObserver, base::DefaultDeleter<MailSmartProxyObserver>> _observer;
    NSTimerProxy *_autosaveTimer;
    _Bool _isToMarkPhoto;
    _Bool _isHacked;
    UIImagePickerController *_imgPicker;
    UIView *_cameraPhotoPreviewTopBar;
    id _observingView;
    _Bool _insertAttachmentToWebviewDirectly;
    NSDictionary *_options;
    WWKMailEditorFooter *_footer;
    WWMailEditor *_editorView;
    WWContactPickerView *_contactPicker;
    WWKMailAttachmentButton *_attachmentButton;
    WWKFloatingTipView *_autosaveTipView;
    UIButton *_useThisPhotoBtn;
}

+ (id)stringByReplacingString:(id)arg1 withDictionary:(id)arg2;
+ (id)generateExpireTime:(id)arg1;
+ (id)bigAttachIconUrlWithAttachName:(id)arg1;
@property(nonatomic) __weak UIButton *useThisPhotoBtn; // @synthesize useThisPhotoBtn=_useThisPhotoBtn;
@property(retain, nonatomic) WWKFloatingTipView *autosaveTipView; // @synthesize autosaveTipView=_autosaveTipView;
@property(nonatomic) _Bool insertAttachmentToWebviewDirectly; // @synthesize insertAttachmentToWebviewDirectly=_insertAttachmentToWebviewDirectly;
@property(retain, nonatomic) WWKMailAttachmentButton *attachmentButton; // @synthesize attachmentButton=_attachmentButton;
@property(retain, nonatomic) WWContactPickerView *contactPicker; // @synthesize contactPicker=_contactPicker;
@property(retain, nonatomic) WWMailEditor *editorView; // @synthesize editorView=_editorView;
@property(retain, nonatomic) WWKMailEditorFooter *footer; // @synthesize footer=_footer;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onSelectFavoriteMsg:(const struct Message *)arg1;
- (void)attachmentItemDidFinishDownload:(id)arg1;
- (void)contactPickerView:(id)arg1 selectContact:(const scoped_refptr_5f42bb84 *)arg2;
- (void)mailEditor:(id)arg1 didChangeField:(id)arg2;
- (void)mailEditor:(id)arg1 selectSender:(const scoped_refptr_5f42bb84 *)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)saveImageToFileInBackground:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)sendImg:(id)arg1;
- (void)didFinishPickPhotos:(id)arg1 isSendOriginalSize:(_Bool)arg2;
- (id)newInlinePicName;
- (_Bool)mailEditorFooter:(id)arg1 canPerformAction:(unsigned long long)arg2 forItem:(id)arg3;
- (void)mailEditorFooter:(id)arg1 willInsertToEditorWithItem:(id)arg2;
- (void)mailEditorFooter:(id)arg1 didChangeToItems:(id)arg2;
- (void)mailEditorFooter:(id)arg1 willPreviewItem:(id)arg2;
- (void)mailEditorFooter:(id)arg1 willRenameItem:(id)arg2;
- (void)mailEditorFooter:(id)arg1 didDeleteItem:(id)arg2;
- (void)mailEditorFooter:(id)arg1 didClickBarItemAtIndex:(unsigned long long)arg2;
- (void)close;
- (void)didDrawViewController:(id)arg1 finishHandleImage:(id)arg2;
- (void)mailSendStateDidChange:(struct Mail *)arg1;
- (void)onPvMergeWillOpen:(id)arg1;
- (void)dynamicFontSizeDidChange:(id)arg1;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)startMarkPhoto:(id)arg1;
- (id)findUseThisPhotoButton:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)findPreviewBottomBar:(id)arg1;
- (void)p_clickMarkPhoto:(id)arg1;
- (void)initCameraPreviewTopBar;
- (_Bool)isAttachmentSupportMultiPreview:(id)arg1;
- (void)compressMailImageAttachments:(unsigned long long)arg1;
- (void)downloadFavAttachments:(CDUnknownBlockType)arg1;
- (void)showCompressImageAttachmentAlert:(CDUnknownBlockType)arg1;
- (basic_string_a490aa4c)buildQuoteStringForMail:(struct Mail *)arg1;
- (_Bool)attachmentExistInMail:(id)arg1 type:(int)arg2;
- (id)getAttachmentsFromDOM;
- (id)getAttachmentsFromJs;
- (void)sendMail;
- (void)autosaveDraftMail;
- (void)scheduleAutosaveDraftMail;
- (void)modifySenderNickWithCompletion:(CDUnknownBlockType)arg1;
- (void)fillMailInfo;
- (void)collectMailInfo:(_Bool)arg1;
- (void)fetchComposeData;
- (id)findAvailableAttachmentName:(id)arg1;
- (id)findAvailableAttachmentNameWithExtension:(id)arg1;
- (id)attachmentFilePathWithName:(id)arg1;
- (id)attachementFilePath:(id)arg1;
- (id)attachmentCacheDir;
- (void)positionEditorFooter;
- (void)positionAttachmentButton;
- (void)presentAssetGroupController;
- (void)setSendButtonEnabled:(_Bool)arg1;
- (void)checkCanPublishWithoutCollect;
- (void)checkCanPublish;
- (void)storeCurrentSelection;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)insertImageFromMenuItem:(id)arg1;
- (void)addMenuItems;
- (void)handlePasteFromJs:(id)arg1;
- (void)handleEventsFromJs:(id)arg1 withUrl:(id)arg2;
- (void)handleStartEditFromJS:(id)arg1;
- (void)handleGetOffsetFromJS:(id)arg1;
- (void)handleSetOffsetFromJS:(id)arg1;
- (void)handleDomChangedFromJs:(id)arg1;
- (void)handleDomContentLoadedFromJs:(id)arg1;
- (void)adjustEditorContentSizeToFit;
- (id)parametersFromURL:(id)arg1;
- (void)webViewDidContentFinishLoad:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)didClickAttachmentButton:(id)arg1;
- (void)sendDidClick:(id)arg1;
- (void)cancelDidClick:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)sharedInit;
- (id)replaceCid:(id)arg1 withMail:(const scoped_refptr_b418b350 *)arg2;
- (const struct MailAttachment *)findAttachment:(const scoped_refptr_b418b350 *)arg1 ByCid:(id)arg2;
- (id)initWithForwardMail:(scoped_refptr_b418b350)arg1 onlyKeepAvailableAttachments:(_Bool)arg2;
- (id)initWithForwardMail:(scoped_refptr_b418b350)arg1;
- (id)initWithReplyAllMail:(scoped_refptr_b418b350)arg1;
- (id)initWithReplyMail:(scoped_refptr_b418b350)arg1;
- (id)initWithDraftMail:(scoped_refptr_b418b350)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

