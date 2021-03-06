/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigNSURLSession : NSObject {
    NSString * _clientBundleIdentifier;
    NSURLSessionConfiguration * _configuration;
    <NSURLSessionDataDelegate> * _dataDelegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _doomCheckScheduled;
    long long  _doomTime;
    NSOperationQueue * _opQueue;
    NSURLSession * _session;
    struct OpaqueFigCFWeakReferenceHolder { } * _weakAssertion;
}

@property (nonatomic, readonly) struct FigOpaqueAssertion { }*assertion;
@property (nonatomic, readonly) NSString *clientBundleIdentifier;
@property (nonatomic, readonly) <NSURLSessionDataDelegate> *dataDelegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) bool doomCheckScheduled;
@property (nonatomic) long long doomTime;
@property (nonatomic, readonly) NSOperationQueue *opQueue;
@property (nonatomic, readonly) NSURLSession *session;

- (struct FigOpaqueAssertion { }*)assertion;
- (id)clientBundleIdentifier;
- (id)dataDelegate;
- (void)dealloc;
- (void)debug;
- (id)dispatchQueue;
- (bool)doomCheckScheduled;
- (long long)doomTime;
- (id)initWithClientBundleIdentifier:(id)arg1 dispatchQueue:(id)arg2;
- (id)opQueue;
- (id)session;
- (void)setDoomCheckScheduled:(bool)arg1;
- (void)setDoomTime:(long long)arg1;

@end
