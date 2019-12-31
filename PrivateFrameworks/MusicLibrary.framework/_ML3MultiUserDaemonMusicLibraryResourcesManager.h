/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface _ML3MultiUserDaemonMusicLibraryResourcesManager : _ML3BaseMusicLibraryResourcesManager <_ML3MultiUserDaemonAccountChangeOperationDelegate> {
    <MLMediaLibraryAccountChangeObserver> * _accountChangeObserver;
    NSOperationQueue * _accountChangeOperationQueue;
    <ML3AccountInformationProviding> * _accountInfo;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSString * _currentActiveAccountDSID;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic) <MLMediaLibraryAccountChangeObserver> *accountChangeObserver;
@property (nonatomic, retain) NSOperationQueue *accountChangeOperationQueue;
@property (nonatomic, retain) <ML3AccountInformationProviding> *accountInfo;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *calloutQueue;
@property (nonatomic, copy) NSString *currentActiveAccountDSID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (id)_libraryContainerPathForDSID:(id)arg1;
- (void)_notifyClients:(id)arg1;
- (void)_processAccountChangeNotification;
- (void)_setupNotifications;
- (void)_tearDownNotifications;
- (id)accountChangeObserver;
- (id)accountChangeOperationQueue;
- (void)accountChangeOperationWillStartPerformingDatabasePathChange:(id)arg1 newDatabasePath:(id)arg2;
- (id)accountInfo;
- (id)calloutQueue;
- (id)currentActiveAccountDSID;
- (id)databasePathForDSID:(id)arg1;
- (void)dealloc;
- (id)initWithAccountInfo:(id)arg1 accountChangeObserver:(id)arg2;
- (id)libraryContainerPath;
- (id)serialQueue;
- (void)setAccountChangeObserver:(id)arg1;
- (void)setAccountChangeOperationQueue:(id)arg1;
- (void)setAccountInfo:(id)arg1;
- (void)setCalloutQueue:(id)arg1;
- (void)setCurrentActiveAccountDSID:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (bool)shouldExecuteAccountChangeOperation:(id)arg1 reason:(id*)arg2;

@end