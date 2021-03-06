/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
 */

@interface PowerUILocationSignalMonitor : NSObject <CLLocationManagerDelegate, PowerUISignalMonitor> {
    NSObject<OS_dispatch_semaphore> * _authorizationSemaphore;
    int  _authorizationStatus;
    CLLocation * _currentLocation;
    CLLocationManager * _locationManager;
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_semaphore> * _requestLocationSemaphore;
    RTRoutineManager * _routine;
}

@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *authorizationSemaphore;
@property (nonatomic) int authorizationStatus;
@property (retain) CLLocation *currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_semaphore> *requestLocationSemaphore;
@property (nonatomic, retain) RTRoutineManager *routine;
@property (readonly) Class superclass;

+ (id)monitorWithDelegate:(id)arg1;

- (void).cxx_destruct;
- (id)authorizationSemaphore;
- (int)authorizationStatus;
- (id)currentLocation;
- (bool)inTypicalChargingLocation;
- (id)init;
- (bool)locationIsUncertain:(id)arg1;
- (id)locationManager;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)log;
- (bool)longCharges:(id)arg1 occurredInLocationsNear:(id)arg2;
- (id)longChargesAroundDate:(id)arg1;
- (id)predicateForEventsWithinSeconds:(double)arg1 aroundTimeOfDay:(id)arg2;
- (id)queue;
- (id)requestLocationSemaphore;
- (id)requiredFullChargeDate;
- (id)routine;
- (void)setAuthorizationSemaphore:(id)arg1;
- (void)setAuthorizationStatus:(int)arg1;
- (void)setCurrentLocation:(id)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRequestLocationSemaphore:(id)arg1;
- (void)setRoutine:(id)arg1;
- (unsigned long long)signalID;
- (void)startMonitoring;
- (void)stopMonitoring;

@end
