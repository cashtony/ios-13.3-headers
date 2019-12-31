/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSnapshotSessionApplicationID : HMFObject <NSCopying> {
    NSString * _applicationIdentifier;
    HMDCameraSnapshotSessionID * _sessionID;
}

@property (nonatomic, readonly) NSString *applicationIdentifier;
@property (nonatomic, readonly) HMDCameraSnapshotSessionID *sessionID;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSessionID:(id)arg1 applicationIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)sessionID;

@end