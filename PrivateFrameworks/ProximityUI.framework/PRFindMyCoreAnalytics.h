/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
 */

@interface PRFindMyCoreAnalytics : NSObject {
    NSString * _authHeaderValue;
    AKAppleIDSession * _authSession;
    long long  _eventNumber;
    PRTargetEstimate * _latestTarget;
    NSObject<OS_os_log> * _logger;
    NSNumber * _numberOfPoses;
    NSNumber * _numberOfRanges;
    PRPose * _previousPose;
    NSNumber * _rangeEstimate;
    NSUUID * _sessionId;
    bool  _shouldLogTargetFoundEvent;
    double  _startTime;
    NSNumber * _traveledDistance;
    NSURLSession * _urlSession;
}

@property (nonatomic, retain) NSString *authHeaderValue;
@property (nonatomic, retain) AKAppleIDSession *authSession;
@property (nonatomic) long long eventNumber;
@property (nonatomic, retain) PRTargetEstimate *latestTarget;
@property (nonatomic, retain) NSNumber *numberOfPoses;
@property (nonatomic, retain) NSNumber *numberOfRanges;
@property (nonatomic, retain) PRPose *previousPose;
@property (nonatomic, retain) NSNumber *rangeEstimate;
@property (nonatomic, retain) NSUUID *sessionId;
@property (nonatomic) bool shouldLogTargetFoundEvent;
@property (nonatomic) double startTime;
@property (nonatomic, retain) NSNumber *traveledDistance;
@property (nonatomic, retain) NSURLSession *urlSession;

+ (bool)isInternalBuild;

- (void).cxx_destruct;
- (id)addLatestTarget:(id)arg1;
- (id)authHeaderValue;
- (id)authSession;
- (void)configureSession;
- (void)endSession;
- (id)eventDictionaryWithEvent:(id)arg1;
- (long long)eventNumber;
- (id)init;
- (void)invalidPoseDetected;
- (id)latestTarget;
- (id)numberOfPoses;
- (id)numberOfRanges;
- (id)previousPose;
- (id)rangeEstimate;
- (void)rangingFailedWithError:(id)arg1;
- (void)sendAnalyticsEvent:(id)arg1 withName:(id)arg2;
- (void)sendLiveOnAnalytics:(id)arg1 withName:(id)arg2;
- (id)sessionId;
- (void)setAuthHeaderValue:(id)arg1;
- (void)setAuthSession:(id)arg1;
- (void)setEventNumber:(long long)arg1;
- (void)setLatestTarget:(id)arg1;
- (void)setNumberOfPoses:(id)arg1;
- (void)setNumberOfRanges:(id)arg1;
- (void)setPreviousPose:(id)arg1;
- (void)setRangeEstimate:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setShouldLogTargetFoundEvent:(bool)arg1;
- (void)setStartTime:(double)arg1;
- (void)setTraveledDistance:(id)arg1;
- (void)setUrlSession:(id)arg1;
- (bool)shouldLogTargetFoundEvent;
- (void)startSession;
- (double)startTime;
- (void)targetComputed:(id)arg1;
- (void)targetRevoked;
- (id)traveledDistance;
- (void)updateTravelDistanceWithPose:(id)arg1;
- (void)updateWithRangeEstimate:(id)arg1;
- (id)urlSession;

@end