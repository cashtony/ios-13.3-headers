/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKGraphViewAxisAnnotationHandler : NSObject <HKGraphSeriesAxisAnnotation> {
    bool  _clearedPreviousAnnotations;
    bool  _disableDuringTiling;
    NSMapTable * _seriesToAnnotations;
}

@property (nonatomic) bool clearedPreviousAnnotations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableDuringTiling;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *seriesToAnnotations;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAxisAnnotation:(id)arg1 forSeries:(id)arg2 textColor:(id)arg3 modelCoordinate:(id)arg4;
- (long long)applyAnnotationForSeries:(id)arg1 commonAxes:(id)arg2;
- (void)clearAxisAnnotations;
- (bool)clearedPreviousAnnotations;
- (bool)disableDuringTiling;
- (id)init;
- (id)seriesToAnnotations;
- (void)setClearedPreviousAnnotations:(bool)arg1;
- (void)setDisableDuringTiling:(bool)arg1;
- (void)setSeriesToAnnotations:(id)arg1;
- (void)startAnnotationSequence;

@end