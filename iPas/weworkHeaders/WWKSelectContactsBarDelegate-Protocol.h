//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WWKSelectContactsBar;

@protocol WWKSelectContactsBarDelegate <NSObject>

@optional
- (void)selectContactsBar:(WWKSelectContactsBar *)arg1 didChangeSearchKeywords:(NSString *)arg2;
- (void)selectContactsBar:(WWKSelectContactsBar *)arg1 didRemoveUser:(struct UserOrDepartment)arg2;
@end
