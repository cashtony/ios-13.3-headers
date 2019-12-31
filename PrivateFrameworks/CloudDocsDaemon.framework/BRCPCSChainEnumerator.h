/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPCSChainEnumerator : NSEnumerator {
    BRCPrivateClientZone * _clientZone;
    NSError * _error;
    unsigned long long  _maxPathDepth;
    NSMutableArray * _stack;
}

- (void).cxx_destruct;
- (id)error;
- (id)initWithPCSChainInfo:(id)arg1 clientZone:(id)arg2;
- (id)nextObject;

@end