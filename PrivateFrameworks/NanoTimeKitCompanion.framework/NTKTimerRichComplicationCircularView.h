/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTimerRichComplicationCircularView : NTKRichComplicationCircularBaseView {
    NTKRichComplicationDialView * _backgroundDial;
    NTKRichComplicationDialView * _foregroundDial;
    struct { 
        long long numberTicks; 
        struct CGSize { 
            double width; 
            double height; 
        } tickSize; 
        double dialDiameter; 
        double timerLabelBottom; 
        double timerLabelFontSize; 
        double timerLabelMaxWidth; 
    }  _layoutConstants;
    NSDate * _timerDate;
    double  _timerDuration;
    UIImageView * _timerImageView;
    NTKColoringLabel * _timerLabel;
    struct NSNumber { Class x1; } * _updateToken;
}

- (void).cxx_destruct;
- (void)_applyPausedUpdate;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_pause;
- (void)_resume;
- (void)_updateDialProgress;
- (void)dealloc;
- (id)init;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
