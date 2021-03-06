/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCAVController : MPAVController {
    bool  _allowsNewPlaybackErrorItem;
    NSMutableSet * _failedItemsIdentifiers;
    MPAVItem * _firstPlaybackErrorItem;
    MPCPlaybackEngine * _playbackEngine;
    bool  _playedSuccessfully;
}

@property (nonatomic) bool allowsNewPlaybackErrorItem;
@property (nonatomic, retain) NSMutableSet *failedItemsIdentifiers;
@property (nonatomic) MPAVItem *firstPlaybackErrorItem;
@property (nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (getter=hasPlayedSuccessfully, nonatomic) bool playedSuccessfully;

+ (bool)prefersApplicationAudioSession;

- (void).cxx_destruct;
- (void)_configureAudioSession;
- (void)_connectAVPlayer;
- (void)_contentsChanged;
- (id)_expectedAssetTypesForPlaybackMode:(long long)arg1;
- (void)_itemDidChange:(id)arg1;
- (void)_itemWillChange:(id)arg1;
- (void)_networkPolicyItemCellularRestrictedNotification:(id)arg1;
- (void)_playbackUserDefaultsEQPresetDidChangeNotification:(id)arg1;
- (void)_queueDidEndWithReason:(id)arg1 lastItem:(id)arg2;
- (void)_queueDidEndWithReason:(id)arg1 skipCL:(bool)arg2 lastItem:(id)arg3;
- (void)_setState:(long long)arg1;
- (void)_updateStateForPlaybackPrevention;
- (bool)allowsNewPlaybackErrorItem;
- (void)endPlayback;
- (id)failedItemsIdentifiers;
- (id)firstPlaybackErrorItem;
- (void)handlePlaybackErrorWithUserInfo:(id)arg1;
- (bool)hasPlayedSuccessfully;
- (id)initWithPlaybackEngine:(id)arg1;
- (id)initWithPlaybackEngine:(id)arg1 options:(unsigned long long)arg2;
- (id)playbackEngine;
- (void)playbackHasStartedForItem:(id)arg1;
- (void)queueController:(id)arg1 didChangeRepeatType:(long long)arg2;
- (void)queueController:(id)arg1 didChangeShuffleType:(long long)arg2;
- (void)queueController:(id)arg1 didIncrementVersionForSegment:(id)arg2;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setAllowsNewPlaybackErrorItem:(bool)arg1;
- (void)setFailedItemsIdentifiers:(id)arg1;
- (void)setFirstPlaybackErrorItem:(id)arg1;
- (void)setPlayedSuccessfully:(bool)arg1;
- (void)updateAudioSession;

@end
