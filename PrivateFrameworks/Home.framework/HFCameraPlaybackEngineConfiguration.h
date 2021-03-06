/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCameraPlaybackEngineConfiguration : NSObject {
    HMCameraProfile * _cameraProfile;
    id /* block */  _clipPlayerBuilder;
    <HFCameraClipScrubbing> * _clipScrubber;
    HMHome * _home;
    <HFCameraLiveStreamControlling> * _liveStreamController;
    HFCameraPlaybackPosition * _playbackPosition;
}

@property (nonatomic, readonly) HMCameraProfile *cameraProfile;
@property (nonatomic, copy) id /* block */ clipPlayerBuilder;
@property (nonatomic) <HFCameraClipScrubbing> *clipScrubber;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) <HFCameraLiveStreamControlling> *liveStreamController;
@property (nonatomic, retain) HFCameraPlaybackPosition *playbackPosition;

- (void).cxx_destruct;
- (void)assertConfigurationIsValid;
- (id)cameraProfile;
- (id /* block */)clipPlayerBuilder;
- (id)clipScrubber;
- (id)home;
- (id)initWithHome:(id)arg1 cameraProfile:(id)arg2;
- (id)liveStreamController;
- (id)playbackPosition;
- (void)setClipPlayerBuilder:(id /* block */)arg1;
- (void)setClipScrubber:(id)arg1;
- (void)setLiveStreamController:(id)arg1;
- (void)setPlaybackPosition:(id)arg1;

@end
