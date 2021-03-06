/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICCloudContext : NSObject {
    NSMutableDictionary * _accountZoneIDsFetchingChanges;
    NSMutableDictionary * _accountZoneIDsNeedingFetchChanges;
    NSMutableDictionary * _accountZoneIDsNeedingToBeSaved;
    <ICCloudContextDelegate> * _cloudContextDelegate;
    NSDictionary * _containersByAccountID;
    NSObject<OS_dispatch_queue> * _containersCreationQueue;
    bool  _didAddObservers;
    bool  _didCheckForLongLivedOperations;
    bool  _disableAutomaticallyRetryNetworkFailures;
    bool  _disableRetryTimer;
    bool  _disabled;
    bool  _disabledInternal;
    unsigned long long  _discretionaryNetworkBehavior;
    bool  _enableLongLivedOperations;
    bool  _fetchOperationsPending;
    bool  _fetchingEnabled;
    bool  _needsToProcessAllObjects;
    bool  _needsToUpdateSubscriptions;
    NSMutableSet * _objectIDsToProcess;
    NSMutableSet * _objectIDsToRetry;
    NSOperationQueue * _operationQueue;
    NSObject<OS_dispatch_queue> * _processingQueue;
    ICSelectorDelayer * _processingSelectorDelayer;
    long long  _qualityOfService;
    NSMutableDictionary * _retryCountsByOperationType;
    NSTimer * _retryTimer;
    NSMutableSet * _subscribedSubscriptionIDs;
    bool  _syncDisabledByServer;
    ICSelectorDelayer * _syncSelectorDelayer;
}

@property (nonatomic) long long accountStatus;
@property (nonatomic, retain) NSMutableDictionary *accountZoneIDsFetchingChanges;
@property (nonatomic, retain) NSMutableDictionary *accountZoneIDsNeedingFetchChanges;
@property (nonatomic, retain) NSMutableDictionary *accountZoneIDsNeedingToBeSaved;
@property (nonatomic) <ICCloudContextDelegate> *cloudContextDelegate;
@property (nonatomic, readonly) NSDictionary *cloudObjectClassesByRecordType;
@property (nonatomic, retain) NSDictionary *containersByAccountID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *containersCreationQueue;
@property (nonatomic) bool didAddObservers;
@property (nonatomic) bool didCheckForLongLivedOperations;
@property (nonatomic) bool disableAutomaticallyRetryNetworkFailures;
@property (nonatomic) bool disableRetryTimer;
@property (getter=isDisabled) bool disabled;
@property (getter=isDisabledInternal) bool disabledInternal;
@property (nonatomic) unsigned long long discretionaryNetworkBehavior;
@property (nonatomic) bool enableLongLivedOperations;
@property (nonatomic, readonly) bool fetchOperationsPending;
@property (getter=isFetchingEnabled, nonatomic) bool fetchingEnabled;
@property (nonatomic) bool needsToProcessAllObjects;
@property bool needsToUpdateSubscriptions;
@property (nonatomic, retain) NSMutableSet *objectIDsToProcess;
@property (nonatomic, retain) NSMutableSet *objectIDsToRetry;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain) ICSelectorDelayer *processingSelectorDelayer;
@property (nonatomic) long long qualityOfService;
@property (nonatomic, retain) NSMutableDictionary *retryCountsByOperationType;
@property (retain) NSTimer *retryTimer;
@property (retain) NSMutableSet *subscribedSubscriptionIDs;
@property (nonatomic) bool syncDisabledByServer;
@property (retain) ICSelectorDelayer *syncSelectorDelayer;

+ (id)allZoneIDsInAccountZoneIDs:(id)arg1;
+ (void)batchRecordsToSave:(id)arg1 delete:(id)arg2 maxRecordCountPerBatch:(unsigned long long)arg3 maxRecordSizePerBatch:(unsigned long long)arg4 withBlock:(id /* block */)arg5;
+ (id)deduplicatedRecordsForCloudObjects:(id)arg1;
+ (void)deleteAllServerChangeTokens;
+ (id)errorCodesToIgnoreForBackoffTimer;
+ (id)errorForDisabledCloudSyncing;
+ (id)errorForWaitingForRetryTimer;
+ (id)errorFromErrors:(id)arg1;
+ (id)errorFromOperations:(id)arg1;
+ (id)errorsFromError:(id)arg1;
+ (bool)haveZoneIDsInAccountZoneIDs:(id)arg1;
+ (bool)isZoneConfigurations:(id)arg1 subsetOfZoneConfigurations:(id)arg2;
+ (id)metadataZoneID;
+ (id)newNotesContainer;
+ (id)newNotesContainerForAccountID:(id)arg1;
+ (id)notesZoneID;
+ (id)objectsByAccount:(id)arg1;
+ (id)objectsByDatabaseScope:(id)arg1;
+ (id)sharedContext;
+ (bool)shouldIgnoreErrorForBackoffTimer:(id)arg1;
+ (id)sortedRecords:(id)arg1;
+ (id)userRecordNameForContainer:(id)arg1;
+ (id)zoneIDsFromZoneInfos:(id)arg1;
+ (id)zoneInfosFromZoneIDs:(id)arg1;

- (void).cxx_destruct;
- (void)_addModifyRecordsOperationsWithCloudObjectsToSave:(id)arg1 delete:(id)arg2 accountID:(id)arg3 operationGroupName:(id)arg4 waitForDependencies:(bool)arg5 completionHandler:(id /* block */)arg6;
- (void)_processCloudObjects:(id)arg1 operationQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_syncWithReason:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)accountStatus;
- (id)accountZoneIDsFetchingChanges;
- (id)accountZoneIDsNeedingFetchChanges;
- (id)accountZoneIDsNeedingToBeSaved;
- (void)addCallbackBlocksToModifyRecordsOperation:(id)arg1 rootRecordIDsByShareID:(id)arg2;
- (void)addDependenciesForModifyRecordsOperation:(id)arg1;
- (void)addFetchOperationsForRecordIDs:(id)arg1 accountID:(id)arg2 qualityOfService:(long long)arg3 operationGroupName:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)addModifyRecordsOperationsWithCloudObjectsToSave:(id)arg1 delete:(id)arg2 accountID:(id)arg3 operationGroupName:(id)arg4 waitForDependencies:(bool)arg5 completionHandler:(id /* block */)arg6;
- (void)addOperationToProcessObjectsWithCompletionHandler:(id /* block */)arg1;
- (void)addOperationsToFetchRecordZoneChangesForAccountZoneIDs:(id)arg1 reason:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)addStateHandler;
- (id)allCloudObjectsInContext:(id)arg1;
- (id)allZoneIDs;
- (bool)canRetryImmediatelyAfterError:(id)arg1;
- (void)cancelEverythingWithCompletionHandler:(id /* block */)arg1;
- (void)checkForLongLivedOperations;
- (void)clearContainers;
- (void)clearPendingActivity;
- (void)clearRetryCountForOperationType:(id)arg1;
- (void)clearSubscribedSubscriptionIDs;
- (void)clearZoneFetchState;
- (id)cloudContextDelegate;
- (void)cloudKitAccountChanged:(id)arg1;
- (id)cloudObjectClassesByRecordType;
- (id)containerForAccountID:(id)arg1;
- (id)containersByAccountID;
- (id)containersCreationQueue;
- (void)contextDidSave:(id)arg1;
- (void)dealloc;
- (void)deleteRecordZonesWithZoneIDs:(id)arg1 accountID:(id)arg2 markZonesAsUserPurged:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)deleteServerChangeTokenForChangedZonesInDatabase:(id)arg1 accountID:(id)arg2;
- (void)deleteServerChangeTokenForRecordZoneID:(id)arg1 databaseScope:(long long)arg2 accountID:(id)arg3;
- (void)deleteSharesForObjects:(id)arg1 accountID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteSharesForObjects:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)didAddObservers;
- (bool)didCheckForLongLivedOperations;
- (void)didFetchShare:(id)arg1 accountID:(id)arg2 context:(id)arg3;
- (bool)disableAutomaticallyRetryNetworkFailures;
- (void)disableCloudSyncingIfCurrentVersionNotSuppported;
- (bool)disableRetryTimer;
- (unsigned long long)discretionaryNetworkBehavior;
- (bool)enableLongLivedOperations;
- (id)existingCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;
- (id)existingCloudObjectForRecordID:(id)arg1 recordType:(id)arg2 accountID:(id)arg3 context:(id)arg4;
- (id)existingCloudObjectForRecordID:(id)arg1 recordType:(id)arg2 accountID:(id)arg3 context:(id)arg4 excludingRecordTypes:(id)arg5;
- (id)existingCloudObjectForUserSpecificRecordID:(id)arg1 createPlaceholderIfNecessary:(bool)arg2 accountID:(id)arg3 context:(id)arg4;
- (void)fetchCloudObjects:(id)arg1 accountID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchDatabaseChangesForDatabases:(id)arg1 reason:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchDatabaseChangesOperation:(id)arg1 changeTokenUpdated:(id)arg2 accountID:(id)arg3;
- (void)fetchDatabaseChangesOperation:(id)arg1 finishedWithServerChangeToken:(id)arg2 accountID:(id)arg3 error:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)fetchDatabaseChangesOperation:(id)arg1 recordZoneWithIDChanged:(id)arg2 accountID:(id)arg3;
- (void)fetchDatabaseChangesOperation:(id)arg1 recordZoneWithIDWasDeleted:(id)arg2 accountID:(id)arg3;
- (void)fetchDatabaseChangesWithReason:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchOperation:(id)arg1 didCompleteWithRecordsByRecordID:(id)arg2 error:(id)arg3;
- (void)fetchOperation:(id)arg1 fetchedRecord:(id)arg2 recordID:(id)arg3 error:(id)arg4;
- (void)fetchOperation:(id)arg1 progressWithRecordID:(id)arg2 progress:(double)arg3;
- (bool)fetchOperationsPending;
- (void)fetchRecordIDs:(id)arg1 accountID:(id)arg2 operationGroupName:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchRecordZoneChangesForAccountZoneIDs:(id)arg1 reason:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchRecordZoneChangesForZoneIDs:(id)arg1 accountID:(id)arg2 reason:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchRecordZoneChangesOperation:(id)arg1 completedFetchForZoneID:(id)arg2 serverChangeToken:(id)arg3 error:(id)arg4;
- (void)fetchRecordZoneChangesOperation:(id)arg1 recordChanged:(id)arg2 context:(id)arg3;
- (void)fetchRecordZoneChangesOperation:(id)arg1 recordWasDeletedWithRecordID:(id)arg2 recordType:(id)arg3 context:(id)arg4;
- (void)fetchRecordZoneChangesOperation:(id)arg1 zoneID:(id)arg2 accountID:(id)arg3 changeTokenUpdated:(id)arg4;
- (void)fetchRecordZoneChangesOperationDidComplete:(id)arg1 error:(id)arg2;
- (void)fetchRecordZoneChangesWithReason:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchSubscriptionsForDatabase:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchUserRecordWithAccountID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchUserRecordWithContainer:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)finishOperationsForRecordID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fireSyncRequest;
- (void)handleDatabaseNotification:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleGenericPartialFailuresForError:(id)arg1 operation:(id)arg2;
- (void)handleNotification:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)hasPendingOperations;
- (void)incrementOrClearRetryCountForOperationType:(id)arg1 error:(id)arg2;
- (void)incrementRetryCountForOperationType:(id)arg1;
- (id)init;
- (bool)isCloudKitAccountAvailable;
- (bool)isDisabled;
- (bool)isDisabledInternal;
- (bool)isFetchingAllRecordZones;
- (bool)isFetchingEnabled;
- (bool)isInForeground;
- (bool)isInternetReachable;
- (bool)isReadyToSync;
- (void)loadZoneFetchState;
- (void)modifyRecordsOperation:(id)arg1 didCompleteWithSavedRecords:(id)arg2 deletedRecordIDs:(id)arg3 rootRecordIDsByShareID:(id)arg4 error:(id)arg5;
- (void)modifyRecordsOperation:(id)arg1 perDeleteRecordIDCompletion:(id)arg2 rootRecordIDsByShareID:(id)arg3 error:(id)arg4;
- (void)modifyRecordsOperation:(id)arg1 perSaveRecordCompletion:(id)arg2 error:(id)arg3;
- (bool)needsToProcessAllObjects;
- (bool)needsToUpdateSubscriptions;
- (id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;
- (id)newOperationToFetchRecordZoneChangesWithZoneConfigurations:(id)arg1 database:(id)arg2;
- (id)newPlaceholderObjectForRecordID:(id)arg1 recordType:(id)arg2 accountID:(id)arg3 context:(id)arg4;
- (id)objectIDsToProcess;
- (id)objectIDsToRetry;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)operationQueue;
- (id)operationToFetchDatabaseChangesForDatabase:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)operationToFetchRecordIDs:(id)arg1 database:(id)arg2 qualityOfService:(long long)arg3;
- (id)operationToFetchRecordZoneChangesForZoneIDs:(id)arg1 database:(id)arg2;
- (id)operationToModifyRecordsToSave:(id)arg1 delete:(id)arg2 rootRecordIDsByShareID:(id)arg3 database:(id)arg4;
- (id)operationToSaveZonesForZoneIDs:(id)arg1 accountID:(id)arg2;
- (id)operationToSaveZonesIfNecessaryForAccountID:(id)arg1;
- (id)operationsToFetchRecordIDs:(id)arg1 database:(id)arg2 qualityOfService:(long long)arg3;
- (id)operationsToFetchRecordIDs:(id)arg1 qualityOfService:(long long)arg2 operationGroupName:(id)arg3 accountID:(id)arg4;
- (id)operationsToFetchRecordZoneChangesForZoneIDs:(id)arg1 accountID:(id)arg2;
- (id)operationsToModifyRecordsForCloudObjectsToSave:(id)arg1 delete:(id)arg2 deleteShares:(id)arg3 saveUserSpecificRecords:(id)arg4 operationGroupName:(id)arg5 addDependencies:(bool)arg6 accountID:(id)arg7;
- (id)operationsToModifyRecordsToSave:(id)arg1 delete:(id)arg2 rootRecordIDsByShareID:(id)arg3 database:(id)arg4;
- (bool)partialError:(id)arg1 containsErrorCode:(long long)arg2;
- (void)pauseCloudSyncWhileSynchronouslyPerformingBlock:(id /* block */)arg1;
- (void)printOperationQueue;
- (void)processAllCloudObjectsWithCompletionHandler:(id /* block */)arg1;
- (void)processObjectIDs:(id)arg1 operationQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)processPendingCloudObjects;
- (void)processPendingCloudObjectsWithCompletionHandler:(id /* block */)arg1;
- (id)processingQueue;
- (id)processingSelectorDelayer;
- (void)pushCloudObjects:(id)arg1 operationGroupName:(id)arg2 completionHandler:(id /* block */)arg3;
- (long long)qualityOfService;
- (void)reachabilityChanged:(id)arg1;
- (id)readinessLoggingDescription;
- (void)receivedZoneNotFound:(id)arg1 operation:(id)arg2;
- (void)recursiveCancelDependentOperations:(id)arg1;
- (id)retryCountsByOperationType;
- (void)retryOperationsIfNecessary;
- (id)retryTimer;
- (void)saveServerChangeToken:(id)arg1 forChangedZonesInDatabase:(id)arg2 accountID:(id)arg3;
- (void)saveServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2 databaseScope:(long long)arg3 accountID:(id)arg4;
- (void)saveSubscriptionsForDatabase:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveZoneFetchState;
- (id)serverChangeTokenForChangedZonesInDatabase:(id)arg1 accountID:(id)arg2;
- (id)serverChangeTokenForRecordZoneID:(id)arg1 databaseScope:(long long)arg2 accountID:(id)arg3;
- (void)setAccountStatus:(long long)arg1;
- (void)setAccountZoneIDsFetchingChanges:(id)arg1;
- (void)setAccountZoneIDsNeedingFetchChanges:(id)arg1;
- (void)setAccountZoneIDsNeedingToBeSaved:(id)arg1;
- (void)setCloudContextDelegate:(id)arg1;
- (void)setContainersByAccountID:(id)arg1;
- (void)setContainersCreationQueue:(id)arg1;
- (void)setDidAddObservers:(bool)arg1;
- (void)setDidCheckForLongLivedOperations:(bool)arg1;
- (void)setDisableAutomaticallyRetryNetworkFailures:(bool)arg1;
- (void)setDisableRetryTimer:(bool)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setDisabledInternal:(bool)arg1;
- (void)setDiscretionaryNetworkBehavior:(unsigned long long)arg1;
- (void)setEnableLongLivedOperations:(bool)arg1;
- (void)setFetchingEnabled:(bool)arg1;
- (void)setNeedsToProcessAllObjects:(bool)arg1;
- (void)setNeedsToUpdateSubscriptions:(bool)arg1;
- (void)setObjectIDsToProcess:(id)arg1;
- (void)setObjectIDsToRetry:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setProcessingQueue:(id)arg1;
- (void)setProcessingSelectorDelayer:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setRetryCountsByOperationType:(id)arg1;
- (void)setRetryTimer:(id)arg1;
- (void)setSubscribedSubscriptionIDs:(id)arg1;
- (void)setSyncDisabledByServer:(bool)arg1;
- (void)setSyncSelectorDelayer:(id)arg1;
- (void)startRetryTimerIfNecessaryWithError:(id)arg1;
- (id)subscribedSubscriptionIDs;
- (id)subscriptionForDatabase:(id)arg1;
- (bool)syncDisabledByServer;
- (void)syncIfNeeded;
- (id)syncSelectorDelayer;
- (void)syncWithReason:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)syncWithReason:(id)arg1 onlyIfReachable:(bool)arg2 completionHandler:(id /* block */)arg3;
- (double)timeIntervalToRetryAfterFromError:(id)arg1;
- (void)updateAccountStatusWithCompletionHandler:(id /* block */)arg1;
- (void)updateCloudContextState;
- (void)updateCloudContextStateOnlyIfReachable:(bool)arg1;
- (void)updateConfiguration;
- (void)updateSelectorDelayers;
- (void)updateSubscriptionsWithCompletionHandler:(id /* block */)arg1;
- (void)validateAccountZoneIDsNeedingFetchChanges;

@end
