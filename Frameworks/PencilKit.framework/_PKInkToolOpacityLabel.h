/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface _PKInkToolOpacityLabel : UIView {
    double  _inkOpacity;
    UILabel * _label;
    unsigned long long  _sizeState;
}

@property (nonatomic) double inkOpacity;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic) unsigned long long sizeState;

+ (id)_fontForSizeState:(unsigned long long)arg1;
+ (id)_formattedStringForInkOpacity:(double)arg1;
+ (double)_labelAlphaForInkOpacity:(double)arg1;
+ (double)_labelOffsetFromBottomEdgeForSizeState:(unsigned long long)arg1;
+ (double)_maxLabelHeightForSizeState:(unsigned long long)arg1;
+ (bool)_shouldHideLabel:(double)arg1;
+ (double)_toolOffsetForSizeState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForRotatedLabel;
- (id)_inkOpacityLabelString;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)inkOpacity;
- (id)label;
- (void)layoutSubviews;
- (void)setInkOpacity:(double)arg1;
- (void)setInkOpacity:(double)arg1 animated:(bool)arg2;
- (void)setLabel:(id)arg1;
- (void)setSizeState:(unsigned long long)arg1;
- (unsigned long long)sizeState;

@end