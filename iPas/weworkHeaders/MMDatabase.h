//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface MMDatabase : NSObject
{
    struct sqlite3 *db;
    NSString *databasePath;
    _Bool logsErrors;
    _Bool crashOnErrors;
    _Bool inUse;
    _Bool inTransaction;
    _Bool traceExecution;
    _Bool checkedOut;
    int busyRetryTimeout;
    _Bool shouldCacheStatements;
    NSMutableDictionary *cachedStatements;
    NSMutableSet *openResultSets;
}

+ (_Bool)isThreadSafe;
+ (id)sqliteLibVersion;
+ (id)databaseWithPath:(id)arg1;
@property _Bool traceExecution; // @synthesize traceExecution;
@property _Bool checkedOut; // @synthesize checkedOut;
@property int busyRetryTimeout; // @synthesize busyRetryTimeout;
@property _Bool crashOnErrors; // @synthesize crashOnErrors;
@property _Bool logsErrors; // @synthesize logsErrors;
@property(retain) NSMutableDictionary *cachedStatements; // @synthesize cachedStatements;
@property _Bool inTransaction; // @synthesize inTransaction;
- (void).cxx_destruct;
- (_Bool)tableExists:(id)arg1;
- (id)dateForQuery:(id)arg1;
- (id)dataForQuery:(id)arg1;
- (double)doubleForQuery:(id)arg1;
- (_Bool)boolForQuery:(id)arg1;
- (long long)longForQuery:(id)arg1;
- (int)intForQuery:(id)arg1;
- (id)stringForQuery:(id)arg1;
- (void)setShouldCacheStatements:(_Bool)arg1;
- (_Bool)shouldCacheStatements;
- (void)setInUse:(_Bool)arg1;
- (_Bool)inUse;
- (_Bool)beginTransaction;
- (_Bool)beginDeferredTransaction;
- (_Bool)commit;
- (_Bool)rollback;
- (_Bool)update:(id)arg1 error:(id *)arg2 bind:(id)arg3;
- (_Bool)executeUpdateWithFormat:(id)arg1;
- (_Bool)executeUpdate:(id)arg1 withArgumentsInArray:(id)arg2;
- (_Bool)executeUpdate:(id)arg1;
- (_Bool)executeUpdate:(id)arg1 error:(id *)arg2 withArgumentsInArray:(id)arg3 orVAList:(char *)arg4;
- (id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2;
- (id)executeQueryWithFormat:(id)arg1;
- (id)executeQuery:(id)arg1;
- (id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2 orVAList:(char *)arg3;
- (void)_extractSQL:(id)arg1 argumentsList:(char *)arg2 intoString:(id)arg3 arguments:(id)arg4;
- (void)bindObject:(id)arg1 toColumn:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3;
- (int)changes;
- (long long)lastInsertRowId;
- (int)lastErrorCode;
- (_Bool)hadError;
- (id)lastErrorMessage;
- (_Bool)databaseExists;
- (void)warnInUse;
- (_Bool)goodConnection;
- (_Bool)setKey:(id)arg1;
- (_Bool)rekey:(id)arg1;
- (void)setCachedStatement:(id)arg1 forQuery:(id)arg2;
- (id)cachedStatementForQuery:(id)arg1;
- (void)resultSetDidClose:(id)arg1;
- (void)closeOpenResultSets;
- (void)clearCachedStatements;
- (_Bool)close;
- (_Bool)openWithFlags:(int)arg1;
- (_Bool)open;
- (struct sqlite3 *)sqliteHandle;
- (id)databasePath;
- (void)dealloc;
- (void)attachToDB:(struct sqlite3 *)arg1 withPath:(id)arg2;
- (id)initWithPath:(id)arg1;

@end

