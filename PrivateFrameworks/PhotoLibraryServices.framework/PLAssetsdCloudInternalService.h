/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetsdCloudInternalService : PLAbstractLibraryServicesManagerService <PLAssetsdCloudInternalServiceProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)acceptMomentShareWithUUID:(id)arg1 reply:(id /* block */)arg2;
- (void)cloudSharingSpaceManagementRequestWithType:(unsigned long long)arg1 optionalBytesToPurge:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)createPhotostreamAlbumWithStreamID:(id)arg1;
- (void)emailAddressForKey:(long long)arg1 reply:(id /* block */)arg2;
- (void)enablePhotostreamsWithStreamID:(id)arg1;
- (void)fetchMomentShareWithURL:(id)arg1 reply:(id /* block */)arg2;
- (void)forceSyncMomentShareWithUUID:(id)arg1 reply:(id /* block */)arg2;
- (void)getCurrentTransferProgress:(id /* block */)arg1;
- (void)getResetSyncStatusWithReply:(id /* block */)arg1;
- (void)getSystemBudgetsWithReply:(id /* block */)arg1;
- (void)isReadyForCloudPhotoLibraryWithReply:(id /* block */)arg1;
- (void)keyForEmailAddress:(id)arg1 reply:(id /* block */)arg2;
- (void)overrideSystemBudgetsForSyncSession:(bool)arg1 systemBudgets:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)personInfoDictionaryForPersonID:(id)arg1 reply:(id /* block */)arg2;
- (void)publishMomentShareWithUUID:(id)arg1 reply:(id /* block */)arg2;
- (void)queryUserIdentitiesWithEmails:(id)arg1 phoneNumbers:(id)arg2 reply:(id /* block */)arg3;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)setCloudPhotoLibraryEnabledState:(bool)arg1;
- (void)setCloudPhotoLibraryPauseState:(bool)arg1 reason:(short)arg2;
- (void)setPersonInfoDictionary:(id)arg1 forPersonID:(id)arg2;
- (void)shouldAutoEnableiCPLOnOSXWithReply:(id /* block */)arg1;
- (void)syncCloudPhotoLibrary;
- (void)updateSharedAlbumsCachedServerConfigurationLimits;

@end