/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMomentShareStatus : PXObservable <PXMutableMomentShareStatus, PXPhotoLibraryUIChangeObserver> {
    <PXDisplayAssetFetchResult> * _allAssetsFetchResult;
    <PXDisplayAssetFetchResult> * _copiedAssetsFetchResult;
    <PXDisplayAssetFetchResult> * _downloadingAssetsFetchResult;
    <PXDisplayMomentShare> * _momentShare;
    <PXSectionedFetchResult> * _participantsFetchResult;
}

@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *allAssetsFetchResult;
@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *copiedAssetsFetchResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *downloadingAssetsFetchResult;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXDisplayMomentShare> *momentShare;
@property (nonatomic, readonly) <PXSectionedFetchResult> *participantsFetchResult;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (id)allAssetsFetchResult;
- (id)copiedAssetsFetchResult;
- (id)description;
- (id)downloadingAssetsFetchResult;
- (id)init;
- (id)initWithMomentShare:(id)arg1;
- (id)momentShare;
- (id)owner;
- (id)participantsFetchResult;
- (void)performChanges:(id /* block */)arg1;
- (void)setAllAssetsFetchResult:(id)arg1;
- (void)setCopiedAssetsFetchResult:(id)arg1;
- (void)setDownloadingAssetsFetchResult:(id)arg1;
- (void)setMomentShare:(id)arg1;
- (void)setParticipantsFetchResult:(id)arg1;

@end
