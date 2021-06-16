//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ABNewPersonViewControllerDelegate-Protocol.h"
#import "ABPeoplePickerNavigationControllerDelegate-Protocol.h"
#import "WWKInteractiveLabelDelegate-Protocol.h"

@class NSMutableArray, NSString, UIImage, UIImageView, UILabel, UINavigationController, WWFavoritesItem, WWFavoritesItemChatView, WWFavoritesItemLabel;

@interface WWFavoritesitemBaseContentView : UIView <WWKInteractiveLabelDelegate, ABPeoplePickerNavigationControllerDelegate, ABNewPersonViewControllerDelegate>
{
    _Bool _showMask;
    _Bool _showBorder;
    WWFavoritesItem *_favItem;
    UIImageView *_thumbView;
    UIImage *_thumbImage;
    UIImageView *_thumbMaskView;
    NSString *_titleText;
    NSString *_detailText;
    NSString *_introText;
    NSMutableArray *_chatList;
    UIView *_containerView;
    UILabel *_titleLabel;
    WWFavoritesItemLabel *_detailLable;
    UILabel *_introLabel;
    WWFavoritesItemChatView *_chatView;
    NSString *_phoneToAddAddressBook;
    UINavigationController *_weakNav;
    struct CGSize _imageSize;
}

@property(nonatomic) __weak UINavigationController *weakNav; // @synthesize weakNav=_weakNav;
@property(retain, nonatomic) NSString *phoneToAddAddressBook; // @synthesize phoneToAddAddressBook=_phoneToAddAddressBook;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) _Bool showBorder; // @synthesize showBorder=_showBorder;
@property(nonatomic) _Bool showMask; // @synthesize showMask=_showMask;
@property(retain, nonatomic) WWFavoritesItemChatView *chatView; // @synthesize chatView=_chatView;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) WWFavoritesItemLabel *detailLable; // @synthesize detailLable=_detailLable;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSMutableArray *chatList; // @synthesize chatList=_chatList;
@property(retain, nonatomic) NSString *introText; // @synthesize introText=_introText;
@property(retain, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UIImageView *thumbMaskView; // @synthesize thumbMaskView=_thumbMaskView;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) UIImageView *thumbView; // @synthesize thumbView=_thumbView;
@property(retain, nonatomic) WWFavoritesItem *favItem; // @synthesize favItem=_favItem;
- (void).cxx_destruct;
- (void)_handleAddContactWithPersonID:(int)arg1;
- (void)_createNewPersonWithPhoneStr:(id)arg1;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void *)arg2;
- (void)_addToExsitWithPhoneStr:(id)arg1;
- (void)_handleTelClick:(id)arg1;
- (void)didClickMailAddress:(id)arg1;
- (void)interactiveLabel:(id)arg1 didTouchContext:(id)arg2 boundingRects:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)renderContent;
- (void)settitleText:(id)arg1 detailText:(id)arg2 introText:(id)arg3 thumb:(id)arg4;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)initUI;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

