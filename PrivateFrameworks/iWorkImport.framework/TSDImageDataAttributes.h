/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDImageDataAttributes : TSPDataAttributes {
    bool  _hasImageIsSRGB;
    bool  _hasPixelSize;
    bool  _imageIsSRGB;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelSize;
    bool  _shouldBeInterpretedAsGenericIfUntagged;
}

@property (nonatomic, readonly) bool hasImageIsSRGB;
@property (nonatomic, readonly) bool hasPixelSize;
@property (nonatomic, readonly) bool imageIsSRGB;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic, readonly) bool shouldBeInterpretedAsGenericIfUntagged;

- (id)copyWithIsSRGB:(bool)arg1;
- (id)copyWithPixelSize:(struct CGSize { double x1; double x2; })arg1;
- (id)copyWithShouldBeInterpretedAsGenericIfUntagged:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasImageIsSRGB;
- (bool)hasPixelSize;
- (bool)imageIsSRGB;
- (id)init;
- (id)initWithIsSRGB:(bool)arg1;
- (id)initWithMessage:(const struct DataAttributes { int (**x1)(); struct ExtensionSet { struct Arena {} *x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; union AllocatedData { struct KeyValue {} *x_4_2_1; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > {} *x_4_2_2; } x_2_1_4; } x2; struct InternalMetadataWithArena { void *x_3_1_1; } x3; struct HasBits<1> { unsigned int x_4_1_1[1]; } x4; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_5_1_1; } x5; }*)arg1;
- (id)initWithPixelSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithShouldBeInterpretedAsGenericIfUntagged:(bool)arg1;
- (struct CGSize { double x1; double x2; })pixelSize;
- (void)saveToMessage:(struct DataAttributes { int (**x1)(); struct ExtensionSet { struct Arena {} *x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; union AllocatedData { struct KeyValue {} *x_4_2_1; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > {} *x_4_2_2; } x_2_1_4; } x2; struct InternalMetadataWithArena { void *x_3_1_1; } x3; struct HasBits<1> { unsigned int x_4_1_1[1]; } x4; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_5_1_1; } x5; }*)arg1;
- (bool)shouldBeInterpretedAsGenericIfUntagged;
- (struct CGSize { double x1; double x2; })size;

@end