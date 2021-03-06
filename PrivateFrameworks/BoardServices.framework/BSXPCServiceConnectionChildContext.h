/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

@interface BSXPCServiceConnectionChildContext : BSXPCServiceConnectionContext {
    unsigned long long  _identifier;
    BSXPCServiceConnectionRootContext * _parent;
    bool  _remote;
}

@property (nonatomic, readonly) unsigned long long identifier;
@property (getter=isRemote, nonatomic, readonly) bool remote;

- (void).cxx_destruct;
- (id)_initWithParent:(id)arg1 identifier:(unsigned long long)arg2 remote:(bool)arg3 proem:(id)arg4;
- (id)debugDescription;
- (id)endpointDescription;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (bool)isChild;
- (bool)isClient;
- (bool)isEqual:(id)arg1;
- (bool)isRemote;
- (bool)isServer;

@end
