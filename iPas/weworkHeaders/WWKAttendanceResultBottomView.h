//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface WWKAttendanceResultBottomView : UIView
{
    scoped_refptr_e21d2ae3 _attendance;
    UIView *_shortSepratorLine;
    UILabel *_timeTitleLabel;
    UILabel *_timeLabel;
    UILabel *_locationTitleLabel;
    UILabel *_locationLabel;
    UILabel *_imageTitleLabel;
    UIImageView *_imageView;
    UIView *_bottomSeperatorLine;
    UIButton *_reportReasonButton;
    UIButton *_viewReasonButton;
    UILabel *_shareLabel;
    UILabel *_finishLabel;
}

@property(retain, nonatomic) UILabel *finishLabel; // @synthesize finishLabel=_finishLabel;
@property(retain, nonatomic) UILabel *shareLabel; // @synthesize shareLabel=_shareLabel;
@property(retain, nonatomic) UIButton *viewReasonButton; // @synthesize viewReasonButton=_viewReasonButton;
@property(retain, nonatomic) UIButton *reportReasonButton; // @synthesize reportReasonButton=_reportReasonButton;
@property(retain, nonatomic) UIView *bottomSeperatorLine; // @synthesize bottomSeperatorLine=_bottomSeperatorLine;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *imageTitleLabel; // @synthesize imageTitleLabel=_imageTitleLabel;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UILabel *locationTitleLabel; // @synthesize locationTitleLabel=_locationTitleLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *timeTitleLabel; // @synthesize timeTitleLabel=_timeTitleLabel;
@property(retain, nonatomic) UIView *shortSepratorLine; // @synthesize shortSepratorLine=_shortSepratorLine;
@property(nonatomic) scoped_refptr_e21d2ae3 attendance; // @synthesize attendance=_attendance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)handleSuccessReportReason:(scoped_refptr_e21d2ae3)arg1;
- (void)p_handleNoExceptionBinary:(scoped_refptr_e21d2ae3)arg1;
- (void)p_handleTimeException:(scoped_refptr_e21d2ae3)arg1;
- (void)p_handleLocationException:(scoped_refptr_e21d2ae3)arg1;
- (void)p_handleImageView:(scoped_refptr_e21d2ae3)arg1;
- (void)p_handleWifiExcetion:(scoped_refptr_e21d2ae3)arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

