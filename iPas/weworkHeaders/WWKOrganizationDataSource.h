//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WWKOrganizationDataSource : NSObject
{
    vector_a024b487 _department_list;
    vector_89e6321f _user_list;
    scoped_refptr_85c18dd7 _selectedDept;
    _Bool _isTony;
    CDUnknownBlockType _filter;
    _Bool _isRootDepartment;
    _Bool _haveHeaderCell;
    vector_46470f89 pinyin_user_vector_vector_;
    vector_46470f89 valid_user_vector_vector_;
    vector_d8e93b2d _dataObjects;
    scoped_refptr_85c18dd7 _rootDepartment;
    _Bool _needUserCountCell;
    _Bool _needExtraHeaderCell;
}

+ (void)virtualCorpRootDepartment:(CDUnknownBlockType)arg1;
+ (void)virtualWorkMateDepartment:(CDUnknownBlockType)arg1;
+ (void)externalUserDepartment:(CDUnknownBlockType)arg1;
+ (void)starContactsDepartment:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool needExtraHeaderCell; // @synthesize needExtraHeaderCell=_needExtraHeaderCell;
@property(nonatomic) _Bool needUserCountCell; // @synthesize needUserCountCell=_needUserCountCell;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)starContactsDepartment:(CDUnknownBlockType)arg1;
- (long long)externalUserCount;
- (_Bool)needExtraUserList;
- (_Bool)isVirtualWorkMateDepartment;
- (_Bool)isVirtualCorpRootDepartment;
- (_Bool)isExternalContactDepartment;
- (_Bool)isStarContactDepartment;
- (void)reloadVirtualWorkMateDepartment:(CDUnknownBlockType)arg1;
- (void)reloadVirtualDepartment:(CDUnknownBlockType)arg1;
- (void)reloadExternalDepartment:(CDUnknownBlockType)arg1;
- (void)reloadContactsDepartment:(CDUnknownBlockType)arg1;
- (id)userListGroupSectionIndexTitles;
- (vector_46470f89)userListGroupForSectionIndex;
- (_Bool)needShowGroupSection;
- (unsigned long long)getDepartmentUserCount;
- (void)refreshChildDepartments:(vector_7dcb3552)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshChildUsers:(vector_89e6321f)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)safeGetDepartmentRemoteID;
- (id)safeGetDepartmentName;
- (const vector_89e6321f *)getChildUsers;
- (const vector_a024b487 *)getChildDepartments;
- (void)fetchOnlineStatusWithUserList:(const vector_89e6321f *)arg1;
- (scoped_refptr_85c18dd7)getCurrentDisplayDepartment;
- (scoped_refptr_e1f85e48)getUserWithIndex:(long long)arg1;
- (scoped_refptr_85c18dd7)getRootDepartment;
- (scoped_refptr_85c18dd7)getDepartmentWithIndex:(long long)arg1;
- (int)getItemTpye:(long long)arg1;
- (long long)totalDepartmentsAndUsersCount;
- (_Bool)haveHeaderCell;
- (vector_d8e93b2d *)groupDataObjects;
- (void)initGroupSectionDataSource;
- (void)configureGroupUserList;
- (void)configEditMode;
- (void)reloadGroupData;
- (void)sortUserList:(CDUnknownBlockType)arg1;
- (void)loadUsersLimit:(int)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)loadUsersLimit:(int)arg1 fromHeadId:(long long)arg2 Completion:(CDUnknownBlockType)arg3;
- (void)loadChildDepartmentsAndSubSectionUsersLimit:(int)arg1 WithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)loadChildDepartmentsAndUsersWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)loadDepartmentAndSubSectionUsersLimit:(int)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)loadDepartmentAndUsersCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isRootDepartment;
- (id)initWithDepartment:(scoped_refptr_85c18dd7)arg1 filter:(CDUnknownBlockType)arg2;
- (id)initWithDepartment:(scoped_refptr_85c18dd7)arg1;

@end

