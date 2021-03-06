/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKReporter : NSObject {
    double  _appLaunchTimestamp;
    double  _authenticateResponseTimestamp;
    double  _connectingDevicesTimestamp;
    double  _inviteeUILaunchTimestamp;
    double  _messageInviteProcessingTimestamp;
    double  _programaticInviteTimestamp;
    double  _totalInviteReceivedTimestamp;
}

@property (nonatomic) double appLaunchTimestamp;
@property (nonatomic) double authenticateResponseTimestamp;
@property (nonatomic) double connectingDevicesTimestamp;
@property (nonatomic) double inviteeUILaunchTimestamp;
@property (nonatomic) double messageInviteProcessingTimestamp;
@property (nonatomic) double programaticInviteTimestamp;
@property (nonatomic) double totalInviteReceivedTimestamp;

+ (id)reporter;

- (void)_nativeReport:(id)arg1 signature:(id)arg2 result:(bool*)arg3;
- (void)_nativeReportDistributionValue:(id)arg1 signature:(id)arg2 domain:(id)arg3;
- (void)_nativeReportValue:(long long)arg1 signature:(id)arg2 domain:(id)arg3;
- (double)appLaunchTimestamp;
- (double)authenticateResponseTimestamp;
- (double)connectingDevicesTimestamp;
- (double)inviteeUILaunchTimestamp;
- (bool)isTimeSpanValid:(double)arg1;
- (double)messageInviteProcessingTimestamp;
- (double)programaticInviteTimestamp;
- (void)recordAppLaunchAndTotalTimestamp;
- (void)recordAuthenticateResponseTimestamp;
- (void)recordConnectingDevicesTimestamp;
- (void)recordInviteeUILaunchTimestamp;
- (void)recordMessageInviteProcessingTimestamp;
- (void)recordProgramaticInviteTimestamp;
- (void)report:(id)arg1;
- (void)report:(id)arg1 signature:(id)arg2;
- (void)report:(id)arg1 signature:(id)arg2 result:(bool)arg3;
- (void)reportAppLaunchDuration;
- (void)reportAuthenticateResponseDuration;
- (void)reportConnectingDevicesDuration;
- (void)reportDistributionValue:(id)arg1 domain:(id)arg2;
- (void)reportDurationForEventType:(id)arg1 withStartTimestamp:(double)arg2;
- (void)reportEvent:(id)arg1 payload:(id)arg2;
- (void)reportInviteeUILaunchDuration;
- (void)reportMessageInviteProcessingDuration;
- (void)reportProgramaticInviteDuration;
- (void)reportTotalInviteReceivedDuration;
- (void)reportValue:(long long)arg1 domain:(id)arg2;
- (void)setAppLaunchTimestamp:(double)arg1;
- (void)setAuthenticateResponseTimestamp:(double)arg1;
- (void)setConnectingDevicesTimestamp:(double)arg1;
- (void)setInviteeUILaunchTimestamp:(double)arg1;
- (void)setMessageInviteProcessingTimestamp:(double)arg1;
- (void)setProgramaticInviteTimestamp:(double)arg1;
- (void)setTotalInviteReceivedTimestamp:(double)arg1;
- (double)totalInviteReceivedTimestamp;

@end
