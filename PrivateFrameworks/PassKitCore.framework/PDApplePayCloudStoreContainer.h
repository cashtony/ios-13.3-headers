/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDApplePayCloudStoreContainer : PDCloudStoreContainer <PDAccountManagerObserver> {
    PDAccountManager * _accountManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _fetchLock;
    NSMutableSet * _fetchingTransactionsForUniqueIDs;
    PDPaymentWebServiceCoordinator * _paymentWebServiceCoordinator;
    PKPeerPaymentAccount * _peerPaymentAccount;
    bool  _proactiveFetchInProgress;
    PKPaymentTransactionProcessor * _transactionProcessor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accountEventRecordsFromArray:(id)arg1;
- (bool)_canFormTransactionFromCloudStoreRecord:(id)arg1;
- (id)_cloudStoreSpecificKeysForItem:(id)arg1 paymentPass:(id)arg2;
- (void)_fetchAndParseAccountEventRecordsForRecords:(id)arg1 request:(id)arg2 updateReasons:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)_fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 groupName:(id)arg2 groupNameSuffix:(id)arg3 returnRecords:(bool)arg4 completion:(id /* block */)arg5;
- (void)_fetchMissingTransactionRecordsFromModifiedRecords:(id)arg1 request:(id)arg2 completion:(id /* block */)arg3;
- (void)_fetchTransactionsFailedForPassUniqueIdentifier:(id)arg1;
- (void)_handlePeerPaymentAccountChanged:(id)arg1;
- (id)_insertOrUpdatePaymentTransaction:(id)arg1 withOriginDeviceID:(id)arg2 forPassUniqueIdentifier:(id)arg3 paymentApplication:(id)arg4 withInsertionMode:(unsigned long long)arg5 performTruncation:(bool)arg6;
- (bool)_isAccountEventAssociatedObjectFromRecordType:(id)arg1;
- (bool)_isAccountEventFromRecordType:(id)arg1;
- (bool)_isTransactionItemFromRecordType:(id)arg1;
- (id)_originDeviceID;
- (id)_originDeviceIDForCloudStoreRecord:(id)arg1;
- (void)_parseAccountEventsFromRecords:(id)arg1 shouldUpdateLocalDatabase:(bool)arg2 updateReasons:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)_parseTransactionRecords:(id)arg1 counterpartRecords:(id)arg2 request:(id)arg3 updateReasons:(unsigned long long)arg4;
- (id)_passUniqueIdentifierForCloudStoreRecord:(id)arg1;
- (id)_paymentApplicationForPassUniqueIdentifier:(id)arg1;
- (id)_recordTypeForAssociatedRecordForAccountEvent:(id)arg1;
- (id)_recordTypesForAccountEvents;
- (id)_recordsFromAccountEvent:(id)arg1;
- (void)_resetFetchTransactionsForPassUniqueIdentifier:(id)arg1;
- (void)_saveTransactionFetchRetries:(id)arg1;
- (id)_serviceIdentfierToRecordDictionaryFromArray:(id)arg1;
- (id)_serviceIdentifierForRecord:(id)arg1;
- (id)_serviceIdentifierForRecordType:(id)arg1 recordID:(id)arg2;
- (bool)_shouldFetchTransactionsForPassUniqueIdentifier:(id)arg1;
- (id)_strippedRecordName:(id)arg1;
- (id)_transactionFetchRetries;
- (void)accountManager:(id)arg1 didAddAccount:(id)arg2;
- (void)accountManager:(id)arg1 didRemoveAccount:(id)arg2;
- (id)allRecordNamesAssociatedWithRecordName:(id)arg1 inZone:(id)arg2;
- (bool)canCoalesceRequest:(id)arg1 withNewRequest:(id)arg2;
- (bool)canInitializeContainer;
- (void)canOverrideChangeTokenForRequest:(id)arg1 completion:(id /* block */)arg2;
- (bool)canSyncTransactionFromCloudKitForPassUniqueIdentifier:(id)arg1;
- (bool)canSyncTransactionToCloudKit:(id)arg1 passUniqueIdentifier:(id)arg2;
- (void)cloudStoreAccountChanged:(id)arg1;
- (id)cloudStoreSpecificKeysForItem:(id)arg1;
- (void)coalesceRequest:(id)arg1 withNewRequest:(id)arg2;
- (void)deleteLocalDataFromDeletedRecords:(id)arg1;
- (void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)generateRandomTransactionForPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithDataSource:(id)arg1 transactionProcessor:(id)arg2 paymentWebServiceCoordinator:(id)arg3 accountManager:(id)arg4;
- (void)invalidateCloudStoreIfPossibleWithOperationGroupNameSuffix:(id)arg1 clearCache:(bool)arg2;
- (void)invalidateServerChangeTokens;
- (void)passDidDisappear:(id)arg1;
- (void)populateEvents:(id)arg1 forAccountIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)processFetchedCloudStoreDataWithModifiedRecords:(id)arg1 deletedRecords:(id)arg2 request:(id)arg3 completion:(id /* block */)arg4;
- (void)processResultWithError:(id)arg1 nextExpectedState:(unsigned long long)arg2 operationGroupNameSuffix:(id)arg3 retryCount:(unsigned long long)arg4 shouldRetry:(bool)arg5 completion:(id /* block */)arg6;
- (void)readCachedContainerValues;
- (id)recordTypeForRecordID:(id)arg1;
- (void)requestUpdatesForPassUniqueIdentifier:(id)arg1;
- (void)saveCachedContainerValues;
- (void)setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (bool)shouldContinueWithRequest:(id)arg1;
- (void)shouldFetchAndStoreCloudDataAtStartupWithCompletion:(id /* block */)arg1;
- (void)syncOriginatingTransactionsToCloudStore;
- (void)uploadTransaction:(id)arg1 forPassWithUniqueIdentifier:(id)arg2 completion:(id /* block */)arg3;

@end