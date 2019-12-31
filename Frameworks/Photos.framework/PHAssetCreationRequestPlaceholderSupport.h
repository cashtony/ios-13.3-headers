/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetCreationRequestPlaceholderSupport : PHAssetCreationRequest {
    NSXPCConnection * _clientConnection;
    long long  _placeholderCreationMode;
    PLClientServerTransaction * _serverTransaction;
}

@property (nonatomic, readonly) NSXPCConnection *clientConnection;

+ (bool)_shouldBakeInAdjustmentsAndFlattenLivePhoto:(bool*)arg1 forSourceAsset:(id)arg2 adjustmentBakeInOptions:(id)arg3;
+ (bool)_shouldCopySpatialOverCaptureResourcesMetadataCopyOptions:(id)arg1;
+ (bool)_shouldCopyTitleDescriptionAndKeywordsForMetadataCopyOptions:(id)arg1;

- (void).cxx_destruct;
- (id)_createPlaceholderManagedAssetFromSourceManagedAsset:(id)arg1 inPhotoLibrary:(id)arg2 error:(id*)arg3;
- (id)_fetchOptionsForDuplicateAssetPhotoLibraryType:(id)arg1;
- (void)_setDestinationAssetAvailabilityHandler:(id /* block */)arg1;
- (void)_updateManagedAssetAfterResourceDownload:(id)arg1;
- (void)changeFailedOnClientWithLibrary:(id)arg1 error:(id)arg2;
- (void)changeFailedOnDaemonWithLibrary:(id)arg1 error:(id)arg2;
- (id)clientConnection;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (id)initForNewObjectWithUUID:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;

@end