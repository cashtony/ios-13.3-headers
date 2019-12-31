/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface JXHTTPOperationQueue : NSOperationQueue {
    NSObject<OS_dispatch_queue> * _blockQueue;
    NSNumber * _bytesDownloaded;
    NSMutableDictionary * _bytesDownloadedPerOperation;
    NSNumber * _bytesUploaded;
    NSMutableDictionary * _bytesUploadedPerOperation;
    NSObject<JXHTTPOperationQueueDelegate> * _delegate;
    id /* block */  _didDownloadBlock;
    id /* block */  _didFinishBlock;
    id /* block */  _didMakeProgressBlock;
    id /* block */  _didStartBlock;
    id /* block */  _didUploadBlock;
    NSNumber * _downloadProgress;
    NSNumber * _expectedDownloadBytes;
    NSMutableDictionary * _expectedDownloadBytesPerOperation;
    NSNumber * _expectedUploadBytes;
    NSMutableDictionary * _expectedUploadBytesPerOperation;
    NSDate * _finishDate;
    NSObject<OS_dispatch_queue> * _observationQueue;
    NSMutableSet * _observedOperationSet;
    bool  _performsBlocksOnMainQueue;
    NSObject<OS_dispatch_queue> * _progressQueue;
    NSDate * _startDate;
    NSString * _uniqueString;
    NSNumber * _uploadProgress;
    id /* block */  _willFinishBlock;
    id /* block */  _willStartBlock;
}

@property (retain) NSObject<OS_dispatch_queue> *blockQueue;
@property (retain) NSNumber *bytesDownloaded;
@property (retain) NSMutableDictionary *bytesDownloadedPerOperation;
@property (retain) NSNumber *bytesUploaded;
@property (retain) NSMutableDictionary *bytesUploadedPerOperation;
@property NSObject<JXHTTPOperationQueueDelegate> *delegate;
@property (copy) id /* block */ didDownloadBlock;
@property (copy) id /* block */ didFinishBlock;
@property (copy) id /* block */ didMakeProgressBlock;
@property (copy) id /* block */ didStartBlock;
@property (copy) id /* block */ didUploadBlock;
@property (retain) NSNumber *downloadProgress;
@property (readonly) double elapsedSeconds;
@property (retain) NSNumber *expectedDownloadBytes;
@property (retain) NSMutableDictionary *expectedDownloadBytesPerOperation;
@property (retain) NSNumber *expectedUploadBytes;
@property (retain) NSMutableDictionary *expectedUploadBytesPerOperation;
@property (retain) NSDate *finishDate;
@property (retain) NSObject<OS_dispatch_queue> *observationQueue;
@property (retain) NSMutableSet *observedOperationSet;
@property bool performsBlocksOnMainQueue;
@property (retain) NSObject<OS_dispatch_queue> *progressQueue;
@property (retain) NSDate *startDate;
@property (retain) NSString *uniqueString;
@property (retain) NSNumber *uploadProgress;
@property (copy) id /* block */ willFinishBlock;
@property (copy) id /* block */ willStartBlock;

+ (id)sharedQueue;

- (void).cxx_destruct;
- (id /* block */)blockForSelector:(SEL)arg1;
- (id)blockQueue;
- (id)bytesDownloaded;
- (id)bytesDownloadedPerOperation;
- (id)bytesUploaded;
- (id)bytesUploadedPerOperation;
- (void)dealloc;
- (id)delegate;
- (id /* block */)didDownloadBlock;
- (id /* block */)didFinishBlock;
- (id /* block */)didMakeProgressBlock;
- (id /* block */)didStartBlock;
- (id /* block */)didUploadBlock;
- (id)downloadProgress;
- (double)elapsedSeconds;
- (id)expectedDownloadBytes;
- (id)expectedDownloadBytesPerOperation;
- (id)expectedUploadBytes;
- (id)expectedUploadBytesPerOperation;
- (id)finishDate;
- (id)init;
- (id)observationQueue;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedOperationSet;
- (void)performDelegateMethod:(SEL)arg1;
- (bool)performsBlocksOnMainQueue;
- (id)progressQueue;
- (void)setBlockQueue:(id)arg1;
- (void)setBytesDownloaded:(id)arg1;
- (void)setBytesDownloadedPerOperation:(id)arg1;
- (void)setBytesUploaded:(id)arg1;
- (void)setBytesUploadedPerOperation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidDownloadBlock:(id /* block */)arg1;
- (void)setDidFinishBlock:(id /* block */)arg1;
- (void)setDidMakeProgressBlock:(id /* block */)arg1;
- (void)setDidStartBlock:(id /* block */)arg1;
- (void)setDidUploadBlock:(id /* block */)arg1;
- (void)setDownloadProgress:(id)arg1;
- (void)setExpectedDownloadBytes:(id)arg1;
- (void)setExpectedDownloadBytesPerOperation:(id)arg1;
- (void)setExpectedUploadBytes:(id)arg1;
- (void)setExpectedUploadBytesPerOperation:(id)arg1;
- (void)setFinishDate:(id)arg1;
- (void)setObservationQueue:(id)arg1;
- (void)setObservedOperationSet:(id)arg1;
- (void)setPerformsBlocksOnMainQueue:(bool)arg1;
- (void)setProgressQueue:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setUniqueString:(id)arg1;
- (void)setUploadProgress:(id)arg1;
- (void)setWillFinishBlock:(id /* block */)arg1;
- (void)setWillStartBlock:(id /* block */)arg1;
- (id)startDate;
- (id)uniqueString;
- (id)uploadProgress;
- (id /* block */)willFinishBlock;
- (id /* block */)willStartBlock;

@end