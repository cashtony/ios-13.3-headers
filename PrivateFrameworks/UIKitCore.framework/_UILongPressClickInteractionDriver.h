/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UILongPressClickInteractionDriver : NSObject <UIGestureRecognizerDelegatePrivate, _UIClickInteractionDriving> {
    bool  _cancelsTouchesInView;
    double  _clickDownDuration;
    <_UIClickInteractionDriverDelegate> * _delegate;
    struct { 
        bool didUpdateHighlightProgress; 
        bool shouldDelayGesture; 
    }  _delegateImplements;
    double  _forceMultiplier;
    _UITouchDurationObservingGestureRecognizer * _gestureRecognizer;
    bool  _reachedClickDownThreshold;
    _UIStateMachine * _stateMachine;
    UIView * _view;
}

@property (nonatomic) double allowableMovement;
@property (nonatomic) bool cancelsTouchesInView;
@property (nonatomic) double clickDownDuration;
@property (nonatomic, readonly) double clickTimeoutDuration;
@property (nonatomic, readonly) bool clicksUpAutomaticallyAfterTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIClickInteractionDriverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double forceMultiplier;
@property (nonatomic, retain) _UITouchDurationObservingGestureRecognizer *gestureRecognizer;
@property (nonatomic, readonly) bool hasExceededAllowableMovement;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCurrentlyAcceleratedByForce;
@property (nonatomic, readonly) double maximumEffectProgress;
@property (nonatomic, readonly) UIGestureRecognizer *primaryGestureRecognizer;
@property (nonatomic) bool reachedClickDownThreshold;
@property (nonatomic, retain) _UIStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double touchDuration;
@property (nonatomic) UIView *view;

+ (bool)prefersCancelsTouchesInView;
+ (bool)requiresForceCapability;

- (void).cxx_destruct;
- (void)_asyncGestureBegan;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_handleGestureRecognizer:(id)arg1;
- (void)_notifyDelegateOfUpdatedClickDownProgress:(double)arg1 forceAdjustedClickDownDuration:(double)arg2;
- (void)_prepareStateMachine;
- (void)_updateForActiveGestureRecognizer;
- (double)allowableMovement;
- (void)cancelInteraction;
- (bool)cancelsTouchesInView;
- (double)clickDownDuration;
- (double)clickTimeoutDuration;
- (bool)clicksUpAutomaticallyAfterTimeout;
- (id)delegate;
- (double)forceMultiplier;
- (id)gestureRecognizer;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)hasExceededAllowableMovement;
- (id)init;
- (bool)isCurrentlyAcceleratedByForce;
- (struct CGPoint { double x1; double x2; })locationInCoordinateSpace:(id)arg1;
- (double)maximumEffectProgress;
- (id)primaryGestureRecognizer;
- (bool)reachedClickDownThreshold;
- (void)setAllowableMovement:(double)arg1;
- (void)setCancelsTouchesInView:(bool)arg1;
- (void)setClickDownDuration:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForceMultiplier:(double)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setReachedClickDownThreshold:(bool)arg1;
- (void)setStateMachine:(id)arg1;
- (void)setView:(id)arg1;
- (id)stateMachine;
- (double)touchDuration;
- (id)view;

@end