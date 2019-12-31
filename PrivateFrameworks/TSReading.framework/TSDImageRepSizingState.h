/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDImageRepSizingState : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  mDesiredSize;
    bool  mIncludesAdjustments;
    struct CGPath { } * mMaskPath;
    TSDImageProvider * mProvider;
    struct CGImage { } * mSizedImage;
    long long  mSizedImageOrientation;
    int  mStatus;
    bool  mWideGamutCanvas;
}

@property (nonatomic) struct CGSize { double x1; double x2; } desiredSize;
@property (nonatomic, readonly) struct CGPath { }*maskPath;
@property (nonatomic, retain) TSDImageProvider *provider;
@property (nonatomic) struct CGImage { }*sizedImage;
@property (nonatomic, readonly) bool sizedImageHasMask;
@property (nonatomic) bool sizedImageIncludesAdjustments;
@property (nonatomic) long long sizedImageOrientation;
@property (nonatomic) int status;
@property (nonatomic, readonly) bool wideGamut;

- (void)dealloc;
- (struct CGSize { double x1; double x2; })desiredSize;
- (void)generateSizedImage;
- (id)initWithDesiredSize:(struct CGSize { double x1; double x2; })arg1 provider:(id)arg2 maskPath:(struct CGPath { }*)arg3 wideGamutCanvas:(bool)arg4;
- (struct CGPath { }*)maskPath;
- (id)provider;
- (void)setDesiredSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setProvider:(id)arg1;
- (void)setSizedImage:(struct CGImage { }*)arg1;
- (void)setSizedImageIncludesAdjustments:(bool)arg1;
- (void)setSizedImageOrientation:(long long)arg1;
- (void)setStatus:(int)arg1;
- (struct CGImage { }*)sizedImage;
- (bool)sizedImageHasMask;
- (bool)sizedImageIncludesAdjustments;
- (long long)sizedImageOrientation;
- (int)status;
- (bool)wideGamut;

@end