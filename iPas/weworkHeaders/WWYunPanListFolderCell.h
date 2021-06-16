//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSIndexPath, NSString, UIButton, UILabel, WWYunPanListFolderCellConfig;
@protocol WWYunPanListFolderCellDelegate;

@interface WWYunPanListFolderCell : UITableViewCell
{
    _Bool _canSelect;
    _Bool _isSelected;
    _Bool _isSearchMode;
    id <WWYunPanListFolderCellDelegate> _delegate;
    WWYunPanListFolderCellConfig *_config;
    NSIndexPath *_indexpath;
    NSString *_folderName;
    UIButton *_selectButton;
    UILabel *_folderLabel;
}

@property(retain, nonatomic) UILabel *folderLabel; // @synthesize folderLabel=_folderLabel;
@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(nonatomic) _Bool isSearchMode; // @synthesize isSearchMode=_isSearchMode;
@property(retain, nonatomic) NSString *folderName; // @synthesize folderName=_folderName;
@property(retain, nonatomic) NSIndexPath *indexpath; // @synthesize indexpath=_indexpath;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool canSelect; // @synthesize canSelect=_canSelect;
@property(retain, nonatomic) WWYunPanListFolderCellConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <WWYunPanListFolderCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectButtonDidClick:(id)arg1;
- (void)layoutSubviews;
- (void)setConfig:(id)arg1 withIsTop:(_Bool)arg2;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
