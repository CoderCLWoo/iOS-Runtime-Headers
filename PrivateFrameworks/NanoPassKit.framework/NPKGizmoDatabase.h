/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@class NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface NPKGizmoDatabase : NSObject {
    struct sqlite3 { } *_database;
    NSObject<OS_dispatch_queue> *_dbQueue;
    struct sqlite3_stmt { } *_deleteStatement;
    int _externallyChangedBroadcasts;
    struct sqlite3_stmt { } *_insertDiffStatement;
    struct sqlite3_stmt { } *_insertStatement;
    BOOL _isInTransaction;
    NSData *_libraryHash;
    NSMutableDictionary *_manifest;
    BOOL _needsMoreLocalNotifyDatabaseChanged;
    BOOL _observingFirstUnlockNotification;
    BOOL _passDBIsAvailable;
    NSMutableArray *_passDescriptions;
    struct sqlite3_stmt { } *_selectPassDataStatement;
    struct sqlite3_stmt { } *_selectPassDiffStatement;
    BOOL _sendingLocalNotifyDatabaseChanged;
    struct sqlite3_stmt { } *_updateDeletePendingStatment;
}

@property(readonly) struct sqlite3 { }* database;
@property(readonly) struct sqlite3_stmt { }* deleteStatement;
@property(readonly) struct sqlite3_stmt { }* insertDiffStatement;
@property(readonly) struct sqlite3_stmt { }* insertStatement;
@property(readonly) NSData * libraryHash;
@property(readonly) NSDictionary * manifestHashes;
@property BOOL passDBIsAvailable;
@property(readonly) NSArray * passDescriptions;
@property(readonly) struct sqlite3_stmt { }* selectPassDataStatement;
@property(readonly) struct sqlite3_stmt { }* selectPassDiffStatement;
@property(readonly) struct sqlite3_stmt { }* updateDeletePendingStatement;

+ (int)maxDatabaseVersion;
+ (id)sharedDatabase;

- (void).cxx_destruct;
- (int)_databaseVersionExists:(BOOL*)arg1 valid:(BOOL*)arg2;
- (id)_diffForUniqueIDLocked:(id)arg1;
- (BOOL)_executeSQL:(id)arg1;
- (void)_executeSQLQuery:(id)arg1 processResultsBlock:(id)arg2;
- (void)_handleDatabaseChangedExternally;
- (void)_handleFirstUnlock;
- (void)_insertDatabaseVersionRow:(int)arg1;
- (id)_libraryHashLocked;
- (void)_loadInitialManifestLocked;
- (void)_migrateDatabase:(id)arg1;
- (void)_notifyDatabaseChangedExternally;
- (void)_notifyDatabaseChangedWithNoop:(BOOL)arg1 firstUnlock:(BOOL)arg2;
- (void)_notifyDatabaseChangedWithNoop:(BOOL)arg1;
- (void)_notifyForFirstUnlock;
- (BOOL)_passDBIsAvailableLocked;
- (id)_passForUniqueIDLocked:(id)arg1;
- (void)_performTransactionWithBlock:(id)arg1;
- (BOOL)_removePassWithUniqueIDLocked:(id)arg1;
- (void)_saveDiffLocked:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)_savePassLocked:(id)arg1;
- (void)_updateDatabaseVersionRow:(int)arg1;
- (struct sqlite3 { }*)database;
- (void)dealloc;
- (struct sqlite3_stmt { }*)deleteStatement;
- (id)diffForUniqueID:(id)arg1;
- (void)enumerateAllPassesWithBlock:(id)arg1;
- (id)hashForUniqueID:(id)arg1;
- (id)init;
- (struct sqlite3_stmt { }*)insertDiffStatement;
- (struct sqlite3_stmt { }*)insertStatement;
- (id)libraryHash;
- (id)manifestHashes;
- (id)nukeAndRebuildDatabaseWithPasses:(id)arg1;
- (BOOL)passDBIsAvailable;
- (id)passDescriptions;
- (id)passForUniqueID:(id)arg1;
- (id)removePassWithUniqueID:(id)arg1;
- (void)saveDiff:(id)arg1 forPassWithUniqueID:(id)arg2;
- (id)savePass:(id)arg1;
- (struct sqlite3_stmt { }*)selectPassDataStatement;
- (struct sqlite3_stmt { }*)selectPassDiffStatement;
- (void)setDeletePending:(BOOL)arg1 forUniqueID:(id)arg2;
- (void)setPassDBIsAvailable:(BOOL)arg1;
- (struct sqlite3_stmt { }*)updateDeletePendingStatement;

@end