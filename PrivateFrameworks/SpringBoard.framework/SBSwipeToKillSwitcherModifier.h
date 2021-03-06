/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBSwipeToKillSwitcherModifier : SBSwitcherModifier {
    SBAppLayout * _appLayout;
    bool  _hasPrepared;
    unsigned long long  _interpolationDirection;
    SBSwitcherModifier<SBFluidSwitcherScrollProviding> * _multitaskingModifier;
    double  _progress;
    bool  _simulatingPostRemovalState;
}

- (void).cxx_destruct;
- (void)_calculateInterpolationDirection;
- (unsigned long long)_interpolatingAdjacentIndexForIndex:(unsigned long long)arg1;
- (void)_performBlockWhileSimulatingPostRemovalAppLayoutState:(id /* block */)arg1;
- (id)appLayouts;
- (id)appLayoutsForInsertionOrRemoval;
- (bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleSwipeToKillEvent:(id)arg1;
- (id)initWithAppLayout:(id)arg1 multitaskingModifier:(id)arg2;
- (bool)isIndexVisible:(unsigned long long)arg1;
- (long long)layoutUpdateMode;
- (double)lighteningAlphaForIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (id)topMostAppLayouts;
- (double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1;

@end
