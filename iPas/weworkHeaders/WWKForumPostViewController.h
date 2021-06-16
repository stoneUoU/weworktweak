//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ForumServiceProxyObserverDelegate-Protocol.h"
#import "QMUITableViewDataSource-Protocol.h"
#import "QMUITableViewDelegate-Protocol.h"
#import "WWKForumPostCommentCellDelegate-Protocol.h"
#import "WWKForumPostInputToolbarDelegate-Protocol.h"
#import "WWKForwardingControllerDelegate-Protocol.h"
#import "WWKInteractiveLabelDelegate-Protocol.h"
#import "WWKMultiImageBrowseViewControllerDelegate-Protocol.h"
#import "WWKScrollActionSheetDelegate-Protocol.h"

@class MBProgressHUD, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSString, QMUIButton, QMUITableView, UIButton, UIView, WWKForumPostInputToolbar, WWKForumPostPlaceholderView, WWKForumPostView, WWKInteractiveLabel, WWKScrollActionSheet;

@interface WWKForumPostViewController : UIViewController <QMUITableViewDelegate, QMUITableViewDataSource, WWKForumPostCommentCellDelegate, WWKForumPostInputToolbarDelegate, WWKInteractiveLabelDelegate, WWKMultiImageBrowseViewControllerDelegate, WWKScrollActionSheetDelegate, WWKForwardingControllerDelegate, ForumServiceProxyObserverDelegate>
{
    struct scoped_ptr<ForumServiceProxyObserver, base::DefaultDeleter<ForumServiceProxyObserver>> _observer;
    struct BBSPostId _postId;
    struct scoped_ptr<CRTX::PostCompleteInfo, base::DefaultDeleter<CRTX::PostCompleteInfo>> _post;
    NSMutableArray *_comments;
    NSMutableIndexSet *_existCommentRowIndexSet;
    NSMutableIndexSet *_notifyCommentIds;
    struct vector<unsigned long, std::__1::allocator<unsigned long>> _existCommentRows;
    struct scoped_ptr<CRTX::BBSUserInfo, base::DefaultDeleter<CRTX::BBSUserInfo>> _anonymousUserInfo;
    struct scoped_ptr<CRTX::BBSPostShareInfo, base::DefaultDeleter<CRTX::BBSPostShareInfo>> _shareInfo;
    CDUnknownBlockType _shareInfoHandler;
    MBProgressHUD *_shareInfoHUD;
    _Bool _reportedRead;
    _Bool _preventLoadComment;
    _Bool _scrolledToLastRead;
    unsigned long long _replyCommentId;
    int _draftCommentCount;
    _Bool _draftCommentLoaded;
    unsigned long long _lastClickedUserId;
    _Bool _didAppear;
    _Bool _didScrollToLastReadCell;
    QMUITableView *_tableView;
    WWKForumPostView *_postView;
    WWKForumPostPlaceholderView *_postPlaceholderView;
    QMUIButton *_postInviteButton;
    UIButton *_postShafaButton;
    WWKForumPostInputToolbar *_inputToolbar;
    WWKScrollActionSheet *_shareSheet;
    UIView *_deleteView;
    NSMutableDictionary *_draftComments;
    WWKInteractiveLabel *_readyToCopyLabel;
}

@property(nonatomic) _Bool didScrollToLastReadCell; // @synthesize didScrollToLastReadCell=_didScrollToLastReadCell;
@property(nonatomic) _Bool didAppear; // @synthesize didAppear=_didAppear;
@property(nonatomic) __weak WWKInteractiveLabel *readyToCopyLabel; // @synthesize readyToCopyLabel=_readyToCopyLabel;
@property(retain, nonatomic) NSMutableDictionary *draftComments; // @synthesize draftComments=_draftComments;
@property(retain, nonatomic) UIView *deleteView; // @synthesize deleteView=_deleteView;
@property(retain, nonatomic) WWKScrollActionSheet *shareSheet; // @synthesize shareSheet=_shareSheet;
@property(retain, nonatomic) WWKForumPostInputToolbar *inputToolbar; // @synthesize inputToolbar=_inputToolbar;
@property(retain, nonatomic) UIButton *postShafaButton; // @synthesize postShafaButton=_postShafaButton;
@property(retain, nonatomic) QMUIButton *postInviteButton; // @synthesize postInviteButton=_postInviteButton;
@property(retain, nonatomic) WWKForumPostPlaceholderView *postPlaceholderView; // @synthesize postPlaceholderView=_postPlaceholderView;
@property(retain, nonatomic) WWKForumPostView *postView; // @synthesize postView=_postView;
@property(retain, nonatomic) QMUITableView *tableView; // @synthesize tableView=_tableView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)handlePostShafaButtonEvent;
- (void)handleTapPostView;
- (void)onDeletePostInfo:(const vector_9c16e832 *)arg1;
- (void)onUpdatePostInfo:(const vector_9c16e832 *)arg1;
- (void)forwardingMessage:(scoped_refptr_c1fa851d)arg1 ToConversation:(scoped_refptr_fd92d7bf)arg2 isSuccess:(_Bool)arg3;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (_Bool)photoItemShouldBeDeleted:(id)arg1;
- (void)attachmentItemDidFinishDownload:(id)arg1;
- (void)photoItemDidDelete:(id)arg1;
- (void)multiImageBrowseViewControllerWillBack;
- (void)closeToolbarIfCan;
- (_Bool)isPostCreator:(unsigned long long)arg1;
- (void)requestReloadCellForForumPostComment:(unsigned long long)arg1;
- (id)interactiveLabel:(id)arg1 willShowMenuControllerWithContext:(id)arg2;
- (void)interactiveLabelDidTouch:(id)arg1;
- (void)interactiveLabel:(id)arg1 didTouchContext:(id)arg2 boundingRects:(id)arg3;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)qmui_tableView:(id)arg1 cellWithIdentifier:(id)arg2;
- (void)inputToolbarWillExitInputMode:(id)arg1;
- (void)inputToolbarWillEnterInputMode:(id)arg1;
- (void)originYDidChangeInInputToolbar:(id)arg1;
- (_Bool)shouldSendTextInInputToolbar:(id)arg1;
- (void)requestExitReplyUserModeInInputToolbar:(id)arg1;
- (void)requestToShowAnonymousNameInInputToolbar:(id)arg1;
- (void)requestToSendTextInInputToolbar:(id)arg1;
- (void)respondQueryRect:(id)arg1;
- (void)copyDidClick:(id)arg1;
- (void)handleCommentAvatarButtonEvent:(id)arg1;
- (void)userDidTap:(id)arg1;
- (void)imageDidTap:(id)arg1;
- (void)retryDidClick:(id)arg1;
- (void)deleteDidClick:(id)arg1;
- (void)followDidClick:(id)arg1;
- (void)shareTimelineDidClick:(id)arg1;
- (void)shareWechatDidClick:(id)arg1;
- (void)shareWxworkDidClick:(id)arg1;
- (void)shareDidClick:(id)arg1;
- (void)requestShareInfo:(CDUnknownBlockType)arg1;
- (void)replyComment:(id)arg1;
- (void)openTelLink:(id)arg1;
- (void)openMailLink:(id)arg1;
- (void)openLink:(id)arg1;
- (void)deleteCommentWithComment:(const struct PostCommentInfo *)arg1;
- (void)showUserProfile:(unsigned long long)arg1;
- (void)publishCommentOffline:(id)arg1;
- (void)publishCommentOnline:(id)arg1;
- (_Bool)scrollToLastRead;
- (void)markCurrentReadPosition;
- (void)clearNoticeCellsWithAnimated:(_Bool)arg1;
- (void)scrollToRow:(long long)arg1 animated:(_Bool)arg2;
- (void)scrollToBottomAnimated:(_Bool)arg1;
- (_Bool)isScrollPositionAtBottom;
- (_Bool)isScrollPositionAtTop;
- (id)insertionIndexPathForCommentIndex:(int)arg1;
- (id)commentByIndexPath:(id)arg1;
- (id)indexPathForCommentIndex:(int)arg1 withCommentRowIndexSet:(id)arg2;
- (id)indexPathForCommentIndex:(int)arg1;
- (void)rebuildExistCommentIndex;
- (void)updateDeletedCommentsWithRowAnimation:(long long)arg1;
@property(readonly, nonatomic) int allCommentCount;
- (void)updateBriefData;
- (void)updateData;
- (void)initPostData;
- (void)reportRead;
- (void)loadCommentNotifies;
- (void)loadVisibleComments;
- (void)loadRemoteComments:(int)arg1;
- (void)updateTableHeaderFooterViewWhenEmpty;
- (void)loadLocalComments:(const struct PostCommentInfo *)arg1 withRowInsertionAnimation:(long long)arg2 rowReloadingAnimation:(long long)arg3;
- (void)loadLocalComments;
- (void)loadDraftCommentsWithRowInsertionAnimation:(long long)arg1;
- (void)loadDraftComments;
- (_Bool)canReplyThisPost;
- (void)handleInputToolbarTouchEvent:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)indexPathForLastVisibleRow;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initComments;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPostId:(const struct BBSPostId *)arg1;
- (id)initWithPost:(const struct PostCompleteInfo *)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initForDebug;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

