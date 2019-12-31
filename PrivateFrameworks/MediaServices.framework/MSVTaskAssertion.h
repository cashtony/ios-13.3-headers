/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVTaskAssertion : NSObject {
    bool  _acquired;
    NSString * _bundleID;
    NSObject<OS_dispatch_source> * _invalidationTimer;
    NSString * _name;
    int  _pid;
    BKSProcessAssertion * _processAssertion;
    NSString * _uuid;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) int pid;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (unsigned int)_BSKFlagsForMSVFlags:(unsigned long long)arg1;
- (unsigned int)_BSKReasonForMSVReason:(unsigned long long)arg1;
- (void)_cancelInvalidationTimerWithCompletion:(id /* block */)arg1;
- (id)_initWithName:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 subsystem:(id)arg4 reason:(unsigned long long)arg5 flags:(unsigned long long)arg6;
- (id)bundleID;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1 bundleID:(id)arg2 subsystem:(id)arg3 reason:(unsigned long long)arg4 flags:(unsigned long long)arg5;
- (id)initWithName:(id)arg1 pid:(int)arg2 subsystem:(id)arg3 reason:(unsigned long long)arg4 flags:(unsigned long long)arg5;
- (void)invalidate;
- (void)invalidateOnDate:(id)arg1;
- (bool)isValid;
- (id)name;
- (int)pid;

@end