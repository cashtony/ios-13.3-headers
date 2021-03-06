/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPXPhotoKitAddToAlbumActionPerformer : PXPhotoKitAssetActionPerformer {
    PUAlbumPickerViewController * _albumPickerViewController;
}

@property (nonatomic, retain) PUAlbumPickerViewController *albumPickerViewController;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2;

- (void).cxx_destruct;
- (void)_handlePickedAlbum:(struct NSObject { Class x1; }*)arg1 assets:(id)arg2;
- (void)_handleUserInteractionTaskResult:(bool)arg1 error:(id)arg2;
- (id)albumPickerViewController;
- (void)performUserInteractionTask;
- (void)setAlbumPickerViewController:(id)arg1;

@end
