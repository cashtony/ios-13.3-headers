/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBAppSwitcherPageShadowView : SBFView <PTSettingsKeyObserver> {
    struct CGSize { 
        double width; 
        double height; 
    }  _diffuseShadowOffset;
    double  _diffuseShadowOpacity;
    double  _diffuseShadowRadius;
    SBFView * _diffuseShadowView;
    bool  _highlighted;
    struct CGSize { 
        double width; 
        double height; 
    }  _highlightedDiffuseShadowOffset;
    double  _highlightedDiffuseShadowOpacity;
    double  _highlightedDiffuseShadowRadius;
    SBMedusaSettings * _medusaSettings;
    double  _rimShadowOpacity;
    double  _rimShadowRadius;
    SBFView * _rimShadowView;
    double  _shadowOffset;
    long long  _style;
    double  _switcherCardScale;
    SBAppSwitcherSettings * _switcherSettings;
}

@property (nonatomic, readonly) UIView *_diffuseShadowView;
@property (nonatomic, readonly) UIView *_rimShadowView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) double shadowOffset;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic) double switcherCardScale;

- (void).cxx_destruct;
- (void)_applyPrototypeSettingsToConstants;
- (id)_diffuseShadowView;
- (id)_rimShadowView;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_updateShadowParameters;
- (void)_updateShadowViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (bool)isHighlighted;
- (void)setHighlighted:(bool)arg1;
- (void)setShadowOffset:(double)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSwitcherCardScale:(double)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (double)shadowOffset;
- (long long)style;
- (double)switcherCardScale;
- (void)traitCollectionDidChange:(id)arg1;

@end
