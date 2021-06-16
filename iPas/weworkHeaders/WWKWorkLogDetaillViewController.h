//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UINavigationControllerDelegate-Protocol.h"
#import "WWKCreatWorkLogBottomViewDelegate-Protocol.h"
#import "WWKForwardingControllerDelegate-Protocol.h"
#import "WWKInteractiveLabelDelegate-Protocol.h"
#import "WWKMultiImageBrowseViewControllerDelegate-Protocol.h"
#import "WWKWorkLogViewControllerDelegate-Protocol.h"

@class NSMutableArray, NSString, UIView, WWFavoriteEmptyView, WWKCreatWorkLogBottomView, WWKForumPostGalleryView, WWKInteractiveLabel, WWKWorkLogDetailTopView, WWKWorkLogScrollView;

@interface WWKWorkLogDetaillViewController : UIViewController <UINavigationControllerDelegate, WWKMultiImageBrowseViewControllerDelegate, WWKForwardingControllerDelegate, WWKWorkLogViewControllerDelegate, WWKInteractiveLabelDelegate, WWKCreatWorkLogBottomViewDelegate>
{
    NSMutableArray *_images;
    int _journalType;
    vector_7dcb3552 _reportUserList;
    vector_89e6321f _reportUserInfos;
    struct JournalEntry _logInfo;
    vector_7dcb3552 _defaultReportUserList;
    _Bool _hasAppeared;
    UIView *_contentView;
    WWKWorkLogScrollView *_scrollView;
    WWKWorkLogDetailTopView *_detailTopView;
    WWKInteractiveLabel *_contentLabel;
    WWKForumPostGalleryView *_galleryView;
    WWKCreatWorkLogBottomView *_bottomView;
    WWFavoriteEmptyView *_deleteView;
    double _galleryMarginBottom;
    double _contentTextViewPrevHeight;
    struct UIEdgeInsets _contentViewInset;
}

@property(nonatomic) struct UIEdgeInsets contentViewInset; // @synthesize contentViewInset=_contentViewInset;
@property(nonatomic) double contentTextViewPrevHeight; // @synthesize contentTextViewPrevHeight=_contentTextViewPrevHeight;
@property(nonatomic) double galleryMarginBottom; // @synthesize galleryMarginBottom=_galleryMarginBottom;
@property(retain, nonatomic) WWFavoriteEmptyView *deleteView; // @synthesize deleteView=_deleteView;
@property(retain, nonatomic) WWKCreatWorkLogBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) WWKForumPostGalleryView *galleryView; // @synthesize galleryView=_galleryView;
@property(retain, nonatomic) WWKInteractiveLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) WWKWorkLogDetailTopView *detailTopView; // @synthesize detailTopView=_detailTopView;
@property(retain, nonatomic) WWKWorkLogScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateUI;
- (void)p_paraeWorkLogInfo:(struct JournalEntry *)arg1;
- (void)p_updateLogInfo:(struct JournalEntry *)arg1;
- (void)p_updateWorkLogRecord;
- (void)p_updateReportInfos:(const scoped_refptr_8a36260b *)arg1;
- (void)p_updateBottomView:(_Bool)arg1;
- (void)p_updateContentText;
- (void)p_updateTopView;
- (_Bool)needShowBottomBar;
- (void)updateNavigationBar;
- (void)showLogDeleted:(_Bool)arg1;
- (void)p_doAfterLogStatusBack:(_Bool)arg1;
- (void)p_checkLogDeleted:(struct JournalEntry)arg1;
- (void)WorkLogViewController:(id)arg1 didPublishPost:(const struct JournalEntry *)arg2;
- (void)copyDidClick:(id)arg1;
- (id)interactiveLabel:(id)arg1 willShowMenuControllerWithContext:(id)arg2;
- (void)didWWKCreatWorkLogBottomViewExpandBottom:(_Bool)arg1;
- (void)respondQueryRect:(id)arg1;
- (void)tapUserHead:(id)arg1;
- (void)showHudWithText:(id)arg1 mode:(long long)arg2 needAutoHide:(_Bool)arg3;
- (void)forwardingMessage:(scoped_refptr_c1fa851d)arg1 ToConversation:(scoped_refptr_fd92d7bf)arg2 isSuccess:(_Bool)arg3;
- (void)doForwardWorkLog;
- (void)p_doDeleteWorklog;
- (void)onMoreBtnClick:(id)arg1;
- (void)onForwardWorkLog:(id)arg1;
- (void)onBottomViewActionButtonClicked:(id)arg1;
- (void)onPvMergeWillOpen:(id)arg1;
- (struct _NSRange)p_findDeleteRangeWithText:(id)arg1 selectedPostion:(unsigned long long)arg2;
- (void)imageDidTap:(id)arg1;
- (void)addImages:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithLogEntites:(struct JournalEntry *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
