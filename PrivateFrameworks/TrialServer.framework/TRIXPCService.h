/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRIXPCService : NSObject {
    bool  _isRunning;
    NSObject<OS_xpc_object> * _listener;
    <TRIXPCMessageHandling> * _messageHandler;
}

@property (readonly) bool isRunning;
@property (nonatomic, retain) <TRIXPCMessageHandling> *messageHandler;

+ (id)classStringForKeyedArchiver:(id)arg1;
+ (id)classesForKeyedArchiver:(id)arg1;
+ (id)decodeClassesFromData:(id)arg1 error:(id*)arg2;
+ (id)decodeResult:(id)arg1 success:(bool*)arg2 error:(id*)arg3;
+ (id)encodeClassesFromObject:(id)arg1 error:(id*)arg2;
+ (id)encodeResult:(id)arg1 error:(id)arg2;
+ (id)sendMessage:(id)arg1 success:(bool*)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)init;
- (bool)isRunning;
- (void)keepAlive:(id*)arg1 time:(double*)arg2;
- (id)messageHandler;
- (bool)replyRequested:(id)arg1;
- (void)setMessageHandler:(id)arg1;
- (void)start;
- (void)startXpcService;

@end
