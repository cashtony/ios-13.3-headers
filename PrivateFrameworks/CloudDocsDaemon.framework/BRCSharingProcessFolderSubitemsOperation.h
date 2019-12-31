/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharingProcessFolderSubitemsOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    NSMutableArray * _aliasItemsToDelete;
    BRCALRowID * _appLibraryRowID;
    unsigned long long  _batchSize;
    unsigned long long  _failedSubitemsLeft;
    bool  _isFSRoot;
    unsigned long long  _processType;
    BRCPrivateClientZone * _rootClientZone;
    BRCItemID * _rootItemID;
    unsigned long long  _rowID;
    NSMutableArray * _shareIDsToDelete;
    NSMutableArray * _sharedClientSubitems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_completeAfterProcessingClientTruthIfNecessaryWithError:(id)arg1;
- (bool)_completeAfterProcessingServerTruthIfNecessaryWithError:(id)arg1;
- (id)computeURLForItemID:(id)arg1 rootURL:(id)arg2;
- (id)createActivity;
- (id)initWithItem:(id)arg1 processType:(unsigned long long)arg2 maxSubitemsToFail:(unsigned long long)arg3;
- (void)main;
- (void)processClientTruthWithCompletion:(id /* block */)arg1;
- (void)processServerTruthWithCompletion:(id /* block */)arg1;
- (void)removeSharedSubitemsWithCompletion:(id /* block */)arg1;
- (bool)shouldRetryForError:(id)arg1;

@end