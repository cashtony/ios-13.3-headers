/* Generated by RuntimeBrowser.
 */

@protocol CAMFullscreenViewfinderDelegate <NSObject>

@required

- (void)fullscreenViewfinder:(CAMFullscreenViewfinder *)arg1 didChangeControlDrawerVisibility:(bool)arg2;
- (void)fullscreenViewfinder:(CAMFullscreenViewfinder *)arg1 didChangeExpanded:(bool)arg2 forDrawerControlOfType:(long long)arg3 animated:(bool)arg4;
- (void)fullscreenViewfinderDidCreateControlDrawer:(CAMFullscreenViewfinder *)arg1;
- (void)fullscreenViewfinderDidCreatePortraitControls:(CAMFullscreenViewfinder *)arg1;

@end