/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBUISwitcherAnimationController : SBUIWorkspaceAnimationController <SBUIAnimationControllerObserver> {
    id /* block */  _animationBlock;
    bool  _interruptible;
    SBMainSwitcherViewController * _switcherViewController;
}

@property (getter=_isInterruptible, setter=_setInterruptible:, nonatomic) bool _interruptible;
@property (nonatomic, copy) id /* block */ animationBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) SBMainSwitcherViewController *switcherViewController;

- (void).cxx_destruct;
- (void)_addSignpostsForAnimationEnd;
- (void)_addSignpostsForAnimationStart;
- (void)_didComplete;
- (bool)_isInterruptible;
- (id)_layoutState;
- (id)_previousLayoutState;
- (void)_setInterruptible:(bool)arg1;
- (void)_startAnimation;
- (void)_updatePPTsForAnimationEnd;
- (void)_updatePPTsForAnimationStart;
- (id /* block */)animationBlock;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (id)animationSettings;
- (id)initWithWorkspaceTransitionRequest:(id)arg1 switcherViewController:(id)arg2 childAnimationControllers:(id)arg3 animationBlock:(id /* block */)arg4;
- (bool)isInterruptible;
- (bool)isReasonableMomentToInterrupt;
- (void)setAnimationBlock:(id /* block */)arg1;
- (void)setSwitcherViewController:(id)arg1;
- (bool)shouldResignActiveForAnimation;
- (id)switcherViewController;

@end
