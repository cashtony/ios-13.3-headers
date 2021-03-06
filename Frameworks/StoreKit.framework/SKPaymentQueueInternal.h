/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPaymentQueueInternal : NSObject {
    bool  _checkedIn;
    SKPaymentQueueClient * _client;
    <SKPaymentQueueDelegate> * _delegate;
    NSMutableDictionary * _downloads;
    NSString * _identifier;
    bool  _isRefreshing;
    NSMutableArray * _localTransactions;
    SKXPCConnection * _requestConnection;
    SKXPCConnection * _responseConnection;
    bool  _restoreFinishedDuringRefresh;
    bool  _restoringCompletedTransactions;
    NSMutableArray * _transactions;
    NSMutableArray * _weakObservers;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
