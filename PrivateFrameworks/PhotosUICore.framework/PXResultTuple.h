/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXResultTuple : NSObject {
    PHFetchResult * _curatedFetchResult;
    PHFetchResult * _fetchResult;
    bool  _fetchedWithReverseSortOrder;
    PHFetchResult * _keyAssetsFetchResult;
}

@property (nonatomic, readonly) PHFetchResult *curatedFetchResult;
@property (nonatomic, readonly) PHFetchResult *fetchResult;
@property (nonatomic, readonly) bool fetchedWithReverseSortOrder;
@property (nonatomic, readonly) PHFetchResult *keyAssetsFetchResult;

- (void).cxx_destruct;
- (id)curatedFetchResult;
- (id)description;
- (id)fetchResult;
- (bool)fetchedWithReverseSortOrder;
- (id)initWithFetchResult:(id)arg1 fetchedWithReverseSortOrder:(bool)arg2 curatedFetchResult:(id)arg3 keyAssetsFetchResult:(id)arg4;
- (id)keyAssetsFetchResult;
- (id)resultTupleUpdatedWithChange:(id)arg1;

@end
