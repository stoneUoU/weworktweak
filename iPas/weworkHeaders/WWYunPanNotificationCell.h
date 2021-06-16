//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel, UIView, WWKCloudDiskAssistMessage;
@protocol WWYunPanNotificationCellDelegate;

@interface WWYunPanNotificationCell : UITableViewCell
{
    _Bool _isShowTime;
    WWKCloudDiskAssistMessage *_message;
    id <WWYunPanNotificationCellDelegate> _delegate;
    UIButton *_timeButton;
    UIButton *_mContainerView;
    UILabel *_mTitleLabel;
    UIView *_mBorderView;
    UILabel *_mDetailLabel;
}

@property(retain, nonatomic) UILabel *mDetailLabel; // @synthesize mDetailLabel=_mDetailLabel;
@property(retain, nonatomic) UIView *mBorderView; // @synthesize mBorderView=_mBorderView;
@property(retain, nonatomic) UILabel *mTitleLabel; // @synthesize mTitleLabel=_mTitleLabel;
@property(retain, nonatomic) UIButton *mContainerView; // @synthesize mContainerView=_mContainerView;
@property(retain, nonatomic) UIButton *timeButton; // @synthesize timeButton=_timeButton;
@property(retain, nonatomic) id <WWYunPanNotificationCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WWKCloudDiskAssistMessage *message; // @synthesize message=_message;
@property(nonatomic) _Bool isShowTime; // @synthesize isShowTime=_isShowTime;
- (void).cxx_destruct;
- (void)onDidTap;
- (double)layoutAndResize;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

