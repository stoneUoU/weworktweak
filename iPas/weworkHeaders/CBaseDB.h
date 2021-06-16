//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMDatabase.h"

@class NSMutableSet, NSRecursiveLock, NSString;

@interface CBaseDB : MMDatabase
{
    struct sqlite3 *m_dbHandle;
    NSString *m_nsDBPath;
    NSRecursiveLock *m_oLock;
    NSMutableSet *m_stringColType;
    NSMutableSet *m_uintColType;
    NSMutableSet *m_byteColType;
    NSMutableSet *m_uint64ColType;
}

+ (_Bool)RebuildDB:(id)arg1 SqlFile:(id)arg2;
+ (_Bool)RecoverDB:(id)arg1 SqlFile:(id)arg2;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock;
@property(retain, nonatomic) NSString *m_nsDBPath; // @synthesize m_nsDBPath;
- (void).cxx_destruct;
- (_Bool)GetMultiRowInMultiTable_For_ContactDB:(id)arg1 Con:(id)arg2 QryCol:(id)arg3 RetResult:(id)arg4 Limit:(unsigned int)arg5;
- (_Bool)GetMultiRowInMultiTableEx:(id)arg1 Con:(id)arg2 QryCol:(id)arg3 RetResult:(id)arg4 Limit:(unsigned int)arg5 specialTypeCol:(id)arg6;
- (_Bool)GetMultiRowInMultiTable:(id)arg1 Con:(id)arg2 QryCol:(id)arg3 RetResult:(id)arg4 Limit:(unsigned int)arg5;
- (void)DumpTableName:(basic_stringstream_255faf78 *)arg1 TableName:(id)arg2;
- (void)DumpColNameWithTableName:(basic_stringstream_255faf78 *)arg1 Col:(id)arg2;
- (void)ShowMasterTable;
- (void)DumpByteValue:(struct sqlite3_stmt *)arg1 ColValue:(id)arg2;
- (void)DumpColUpdateValue:(basic_stringstream_255faf78 *)arg1 ColValue:(id)arg2;
- (void)DumpColValue:(basic_stringstream_255faf78 *)arg1 ColValue:(id)arg2;
- (void)DumpColName:(basic_stringstream_255faf78 *)arg1 Col:(id)arg2;
- (void)RegisterColName:(id)arg1 ofType:(unsigned int)arg2;
- (unsigned int)TypeOfCol:(id)arg1;
- (_Bool)DropTable:(id)arg1;
- (unsigned int)GetMaxInTable:(id)arg1 Col:(id)arg2 Where:(id)arg3;
- (unsigned int)GetMaxInTable:(id)arg1 Col:(id)arg2;
- (unsigned int)GetCountInTable:(id)arg1 Con:(id)arg2;
- (unsigned int)GetCountDistinctInTable:(id)arg1 Con:(id)arg2 Col:(id)arg3;
- (_Bool)DelRowInTable:(id)arg1 Con:(id)arg2;
- (_Bool)GetMultiRowInTableNewEx:(id)arg1 GroupBy:(id)arg2 Con:(id)arg3 Order:(id)arg4 QryCol:(id)arg5 RetResult:(id)arg6 Limit:(unsigned int)arg7;
- (_Bool)GetMultiRowInTableNew:(id)arg1 Con:(id)arg2 QryCol:(id)arg3 RetResult:(id)arg4 Limit:(unsigned int)arg5;
- (_Bool)GetMultiRowInTableEx:(id)arg1 GroupBy:(id)arg2 Con:(id)arg3 Order:(id)arg4 QryCol:(id)arg5 RetArr:(id)arg6 Limit:(unsigned int)arg7 Distinct:(_Bool)arg8;
- (_Bool)GetMultiRowInTableEx:(id)arg1 GroupBy:(id)arg2 Con:(id)arg3 Order:(id)arg4 QryCol:(id)arg5 RetArr:(id)arg6 Limit:(unsigned int)arg7;
- (_Bool)GetMultiRowInTable:(id)arg1 Con:(id)arg2 QryCol:(id)arg3 RetArr:(id)arg4 Limit:(unsigned int)arg5;
- (_Bool)GetColValueInTable:(id)arg1 Con:(id)arg2 QryCol:(id)arg3 RetCol:(id)arg4 Limit:(unsigned int)arg5;
- (_Bool)InsertOrUpdateRowInTable:(id)arg1 ColValue:(id)arg2;
- (_Bool)SetColValueInTable:(id)arg1 Con:(id)arg2 ColValue:(id)arg3;
- (_Bool)InsertNewRowInTable:(id)arg1 ColValue:(id)arg2;
- (_Bool)RollBackTransation;
- (_Bool)CommitTransation;
- (_Bool)BeginTransation;
- (void)Close;
- (_Bool)Open:(id)arg1;
- (void)dealloc;
- (id)init;

@end

