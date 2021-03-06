/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIEvent : NSObject {
    double  __initialTouchTimestamp;
    UIScreen * _cachedScreen;
    UIEventEnvironment * _eventEnvironment;
    NSMutableSet * _eventObservers;
    struct __GSEvent { } * _gsEvent;
    struct __IOHIDEvent { } * _hidEvent;
    double  _timestamp;
}

@property (nonatomic, readonly) double _initialTouchTimestamp;
@property (nonatomic, readonly) NSSet *allTouches;
@property (nonatomic) UIEventEnvironment *eventEnvironment;
@property (nonatomic, readonly) bool pnp_isPencilEvent;
@property (nonatomic, readonly) long long subtype;
@property (setter=_setTimestamp:, nonatomic) double timestamp;
@property (nonatomic, readonly) long long type;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (void)_addEventObserver:(id)arg1;
- (void)_cleanupAfterDispatch;
- (unsigned long long)_clickCount;
- (struct CGPoint { double x1; double x2; })_digitizerLocation;
- (id)_eventObservers;
- (unsigned long long)_focusHeading;
- (void)_gestureRecognizerNoLongerNeedsSendEvent:(id)arg1;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (struct __GSEvent { }*)_gsEvent;
- (struct __IOHIDEvent { }*)_hidEvent;
- (id)_init;
- (id)_initWithEnvironment:(id)arg1;
- (id)_initWithEvent:(struct __GSEvent { }*)arg1 touches:(id)arg2;
- (double)_initialTouchTimestamp;
- (bool)_isKeyDown;
- (bool)_isTouchRoutingPolicyBased;
- (id)_modifiedInput;
- (long long)_modifierFlags;
- (long long)_moveDirection;
- (void)_removeEventObserver:(id)arg1;
- (id)_screen;
- (bool)_sendEventToGestureRecognizer:(id)arg1;
- (void)_sendEventToResponder:(id)arg1;
- (void)_setGSEvent:(struct __GSEvent { }*)arg1;
- (void)_setHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_setTimestamp:(double)arg1;
- (int)_shakeState;
- (id)_touchesForGestureRecognizer:(id)arg1;
- (id)_triggeringPhysicalButton;
- (id)_unmodifiedInput;
- (void)_wasDeliveredToGestureRecognizers;
- (double)_wheelVelocity;
- (id)_windows;
- (id)allTouches;
- (id)coalescedTouchesForTouch:(id)arg1;
- (void)dealloc;
- (id)eventEnvironment;
- (bool)isKeyDown;
- (id)predictedTouchesForTouch:(id)arg1;
- (void)setEventEnvironment:(id)arg1;
- (long long)subtype;
- (double)timestamp;
- (id)touchesForGestureRecognizer:(id)arg1;
- (id)touchesForView:(id)arg1;
- (id)touchesForWindow:(id)arg1;
- (long long)type;

// Image: /System/Library/Frameworks/PencilKit.framework/PencilKit

- (bool)PK_isEventFromPencil;

// Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI

- (bool)pnp_isPencilEvent;

@end
