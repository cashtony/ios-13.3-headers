/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
 */

@interface STStatusServer : NSObject <BSDescriptionProviding, STStatusDomainPublisherServerHandle, STStatusDomainServerHandle> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSMutableDictionary * _clientsByDomain;
    NSMutableDictionary * _dataByDomain;
    NSObject<OS_dispatch_queue> * _internalQueue;
    STStatusDomainPublisherXPCClientListener * _publisherXPCClientListener;
    STStatusDomainXPCClientListener * _xpcClientListener;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly) NSMutableDictionary *clientsByDomain;
@property (nonatomic, readonly) NSMutableDictionary *dataByDomain;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, readonly) STStatusDomainPublisherXPCClientListener *publisherXPCClientListener;
@property (readonly) Class superclass;
@property (nonatomic, readonly) STStatusDomainXPCClientListener *xpcClientListener;

- (void).cxx_destruct;
- (id)_internalQueue_dataForDomain:(unsigned long long)arg1;
- (id)_internalQueue_dataForDomainCreatingIfNecessary:(unsigned long long)arg1;
- (void)_internalQueue_enumerateClientsForDomain:(unsigned long long)arg1 withBlock:(id /* block */)arg2;
- (void)_internalQueue_notifyClient:(id)arg1 ofData:(id)arg2 forDomain:(unsigned long long)arg3;
- (id)_newEmptyDataForDomain:(unsigned long long)arg1;
- (id)clientQueue;
- (id)clientsByDomain;
- (id)dataByDomain;
- (id)dataForDomain:(unsigned long long)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)internalQueue;
- (void)publishData:(id)arg1 forDomain:(unsigned long long)arg2;
- (id)publishedDataForDomain:(unsigned long long)arg1;
- (id)publisherXPCClientListener;
- (void)registerClient:(id)arg1 forDomain:(unsigned long long)arg2;
- (void)removeClient:(id)arg1 forDomain:(unsigned long long)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)xpcClientListener;

@end
