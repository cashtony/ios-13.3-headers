/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCMTWriterLock : NSObject <NFLocking> {
    <NFLocking> * _underlyingLock;
}

@property (nonatomic, retain) <NFLocking> *underlyingLock;

- (void).cxx_destruct;
- (id)init;
- (id)initWithUnderlyingLock:(id)arg1;
- (void)lock;
- (void)performReadSync:(id /* block */)arg1;
- (void)performWriteSync:(id /* block */)arg1;
- (void)setUnderlyingLock:(id)arg1;
- (id)underlyingLock;
- (void)unlock;

@end
