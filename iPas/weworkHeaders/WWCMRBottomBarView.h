//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WWCMROCRImgIconViewDelegate-Protocol.h"

@class NSString, WWCMRButton, WWCMROCRImgIconView;
@protocol WWCMRBottomBarViewDelegate;

@interface WWCMRBottomBarView : UIView <WWCMROCRImgIconViewDelegate>
{
    _Bool _isInRecording;
    int _ocrPreviewCount;
    unsigned long long _mode;
    id <WWCMRBottomBarViewDelegate> _bottomBarDelegate;
    WWCMRButton *_captureBtn;
    WWCMRButton *_cancelBtn;
    WWCMRButton *_ocrPreviewBtn;
    WWCMROCRImgIconView *_ocrImgPreviewView;
}

@property(nonatomic) int ocrPreviewCount; // @synthesize ocrPreviewCount=_ocrPreviewCount;
@property(retain, nonatomic) WWCMROCRImgIconView *ocrImgPreviewView; // @synthesize ocrImgPreviewView=_ocrImgPreviewView;
@property(retain, nonatomic) WWCMRButton *ocrPreviewBtn; // @synthesize ocrPreviewBtn=_ocrPreviewBtn;
@property(retain, nonatomic) WWCMRButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) WWCMRButton *captureBtn; // @synthesize captureBtn=_captureBtn;
@property(nonatomic) _Bool isInRecording; // @synthesize isInRecording=_isInRecording;
@property(nonatomic) __weak id <WWCMRBottomBarViewDelegate> bottomBarDelegate; // @synthesize bottomBarDelegate=_bottomBarDelegate;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)p_onCapture:(id)arg1;
- (void)p_onCancel:(id)arg1;
- (void)p_onOCRPreview:(id)arg1;
- (void)imgIconDidTap;
- (void)layoutSubviews;
- (void)p_updateUIMode;
- (void)p_updateOCRPreviewBtnHiddenState;
- (void)updateOCRPreviewImgCount:(int)arg1;
- (void)updateOCRPreivewImg:(id)arg1;
- (struct CGRect)ocrPreviewRect;
- (void)p_doInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

