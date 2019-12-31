/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPCircleProxyImpl : NSObject <CDPDCircleProxy> {
    CDPContext * _cdpContext;
    OTClique * _clique;
}

@property (nonatomic, readonly) CDPContext *cdpContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_authenticatedCircleStatus:(id*)arg1;
- (long long)_circleStatus:(id*)arg1;
- (id)_pairingChannelContext;
- (bool)_registerCredentialsOnlyIfNeeded:(bool)arg1;
- (int)_sos_authenticatedCircleStatus:(id*)arg1;
- (int)_sos_circleStatus:(id*)arg1;
- (bool)anyPeerHasEnabledViewsInSet:(id)arg1 error:(id*)arg2;
- (int)cachedCircleStatus:(id*)arg1;
- (unsigned long long)cachedCliqueStatus:(id*)arg1;
- (bool)canAuthenticate;
- (id)cdpContext;
- (unsigned long long)cdpStatusFromOT:(long long)arg1;
- (unsigned long long)cdpStatusFromSOS:(int)arg1;
- (unsigned long long)circleStatus:(id*)arg1;
- (id)contextType;
- (void)didJoinCircleAfterRecovery:(id)arg1;
- (id)generateRecoveryKeyWithInfo:(id)arg1 error:(id*)arg2;
- (id)generateVerifierWithRecoveryKey:(id)arg1 error:(id*)arg2;
- (bool)hasNonViewAwarePeers;
- (id)initWithContext:(id)arg1;
- (bool)isLastBackupMakingPeer:(id*)arg1;
- (id)pairingChannelAcceptor:(id*)arg1;
- (id)pairingChannelInitiator:(id*)arg1;
- (unsigned long long)peerCount;
- (id)peerDeviceNamesByPeerID;
- (id)peerId;
- (bool)registerCredentials;
- (bool)registerCredentialsIfMissing;
- (bool)removeNonViewAwarePeers:(id*)arg1;
- (bool)removeThisDeviceFromCircle:(id*)arg1;
- (void)reportFailure:(id)arg1;
- (void)reportSuccess;
- (bool)requestToJoinCircle:(id*)arg1;
- (bool)requestToJoinCircleAfterRestore:(id*)arg1;
- (bool)requestToResetCircle:(id*)arg1;
- (bool)requestToResetCloudKitDataForReason:(id)arg1 error:(id*)arg2;
- (bool)setViewsWithEnableSet:(id)arg1 disableSet:(id)arg2;
- (int)sos_circleStatus:(id*)arg1;
- (bool)synchronizeCircleViews;
- (bool)tryRegisteringCredentials;
- (bool)viewMemberForAutofillPasswords:(id*)arg1;
- (bool)waitForInitialSync:(id*)arg1;
- (void)waitForUpdate;

@end