/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARImageSensor : NSObject <ARSensor, AVCaptureDataOutputSynchronizerDelegate, AVCaptureVideoDataOutputSampleBufferDelegate> {
    AVCaptureDevice * _captureDevice;
    NSArray * _captureDeviceKeysObserved;
    long long  _captureFramesPerSecond;
    NSObject<OS_dispatch_queue> * _captureQueue;
    AVCaptureSession * _captureSession;
    NSMutableArray * _connections;
    float  _defaultLensPosition;
    <ARSensorDelegate> * _delegate;
    AVCaptureDataOutputSynchronizer * _outputSynchronizer;
    unsigned long long  _powerUsage;
    bool  _runningSingleShotAutoFocus;
    ARImageSensorSettings * _settings;
    AVCaptureConnection * _videoConnection;
    AVCaptureDeviceInput * _videoInput;
    AVCaptureVideoDataOutput * _videoOutput;
    AVCaptureConnection * _visionDataConnection;
    AVCaptureVisionDataOutput * _visionDataOutput;
}

@property (nonatomic, readonly) AVCaptureDevice *captureDevice;
@property long long captureFramesPerSecond;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *captureQueue;
@property (nonatomic, readonly) AVCaptureSession *captureSession;
@property (retain) NSMutableArray *connections;
@property (readonly, copy) NSString *debugDescription;
@property float defaultLensPosition;
@property (nonatomic) <ARSensorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVCaptureDataOutputSynchronizer *outputSynchronizer;
@property (nonatomic, readonly) NSArray *outputsForSynchronizer;
@property (nonatomic) unsigned long long powerUsage;
@property bool runningSingleShotAutoFocus;
@property (nonatomic, readonly, copy) ARImageSensorSettings *settings;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AVCaptureConnection *videoConnection;
@property (nonatomic, readonly) AVCaptureDeviceInput *videoInput;
@property (nonatomic, readonly) AVCaptureVideoDataOutput *videoOutput;
@property (nonatomic, readonly) AVCaptureConnection *visionDataConnection;

+ (float)defaultLensPosition;
+ (void)registerSignPostForImageData:(id)arg1;

- (void).cxx_destruct;
- (void)_configureCameraExposureForDevice:(id)arg1;
- (void)_configureCameraFocusForDevice:(id)arg1;
- (void)_configureCameraWhiteBalanceForDevice:(id)arg1;
- (void)_configureFrameRateForDevice:(id)arg1;
- (void)_configureFrameRateForDevice:(id)arg1 frameRate:(double)arg2;
- (void)_configureImageControlModeForDevice:(id)arg1;
- (id)_configureVisionDataOutputForSession:(id)arg1;
- (void)_dispatchImageData:(id)arg1;
- (id)_setActiveFormat;
- (bool)canReconfigure:(id)arg1;
- (id)captureDevice;
- (long long)captureFramesPerSecond;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (id)captureQueue;
- (id)captureSession;
- (void)configureCaptureDevice;
- (id)configureCaptureSession;
- (void)configureGeometricDistortionCorrectionForDevice:(id)arg1;
- (id)connections;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (void)dealloc;
- (float)defaultLensPosition;
- (id)delegate;
- (void)enableAutoFocusForDevice:(id)arg1;
- (void)enableSensor:(bool)arg1;
- (void)forceUpdatePowerUsage:(unsigned long long)arg1;
- (id)init;
- (id)initWithSettings:(id)arg1 captureSession:(id)arg2 captureQueue:(id)arg3;
- (id)logPrefix;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputSynchronizer;
- (id)outputsForSynchronizer;
- (unsigned long long)powerUsage;
- (id)prepareToStart;
- (unsigned long long)providedDataTypes;
- (void)reconfigure:(id)arg1;
- (bool)runningSingleShotAutoFocus;
- (void)setCaptureFramesPerSecond:(long long)arg1;
- (void)setConnections:(id)arg1;
- (void)setDefaultLensPosition:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPowerUsage:(unsigned long long)arg1;
- (void)setRunningSingleShotAutoFocus:(bool)arg1;
- (id)settings;
- (void)start;
- (void)stop;
- (void)triggerVisionDataBurst;
- (void)updateCaptureDeviceFrameRate:(double)arg1;
- (id)videoConnection;
- (id)videoInput;
- (id)videoOutput;
- (id)visionDataConnection;

@end