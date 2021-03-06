/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineQuarantinedRecords : CPLEngineStorage <CPLAbstractObject> {
    unsigned long long  _newRejectedCount;
    CPLRejectedRecords * _newRejectedRecords;
    NSMutableArray * _quarantineMessages;
    unsigned long long  _rejectedCount;
    CPLRejectedRecords * _rejectedRecords;
    bool  _rejectedRecordsHasChanges;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_sendQuarantineFeedbackWithRecordClass:(Class)arg1 reason:(id)arg2;
- (bool)addQuarantinedRecordsWithScopedIdentifier:(id)arg1 reason:(id)arg2 error:(id*)arg3;
- (bool)bumpRejectedRecords:(id)arg1 error:(id*)arg2;
- (unsigned long long)countOfQuarantinedRecords;
- (unsigned long long)countOfQuarantinedRecordsInScopeWithIdentifier:(id)arg1;
- (bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
- (bool)isRecordWithScopedIdentifierQuarantined:(id)arg1;
- (bool)removeQuarantinedRecordsWithScopedIdentifier:(id)arg1 notify:(bool)arg2 error:(id*)arg3;
- (bool)resetRejectedRecordsWithError:(id*)arg1;
- (unsigned long long)scopeType;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
