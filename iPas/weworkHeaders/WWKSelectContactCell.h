//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKSelectButtonTableViewCell.h"

#import "UserProxyObserverDelegate-Protocol.h"

@class NSString, UIImageView, WWKAvatarImageView;

@interface WWKSelectContactCell : WWKSelectButtonTableViewCell <UserProxyObserverDelegate>
{
    scoped_refptr_e1f85e48 user_;
    scoped_refptr_85c18dd7 department_;
    struct scoped_ptr<UserSmartProxyObserver, base::DefaultDeleter<UserSmartProxyObserver>> _userProxyObserver;
    _Bool _forceNotShowCorpName;
    _Bool _canSelect;
    _Bool _notTotalSelected;
    _Bool _contactEnabled;
    _Bool _largePadding;
    WWKAvatarImageView *_head;
    UIImageView *_deleteImageView;
}

@property(retain, nonatomic) UIImageView *deleteImageView; // @synthesize deleteImageView=_deleteImageView;
@property(retain, nonatomic) WWKAvatarImageView *head; // @synthesize head=_head;
@property(nonatomic) _Bool largePadding; // @synthesize largePadding=_largePadding;
@property(nonatomic, getter=isContactEnabled) _Bool contactEnabled; // @synthesize contactEnabled=_contactEnabled;
@property(nonatomic) _Bool notTotalSelected; // @synthesize notTotalSelected=_notTotalSelected;
@property(nonatomic) _Bool canSelect; // @synthesize canSelect=_canSelect;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)forceNotShowCorpName:(_Bool)arg1;
- (void)showCompleteNameWithEnglishName:(_Bool)arg1;
- (scoped_refptr_85c18dd7)getDepartment;
- (void)setDepartment:(scoped_refptr_85c18dd7)arg1;
- (void)setFullPathWithUser:(scoped_refptr_e1f85e48)arg1;
- (void)setUser:(scoped_refptr_e1f85e48)arg1;
- (void)setUser:(const scoped_refptr_e1f85e48 *)arg1 underDepartmentID:(unsigned long long)arg2;
@property(nonatomic, getter=isContactSelected) _Bool contactSelected;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

