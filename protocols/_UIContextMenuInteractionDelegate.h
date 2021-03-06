/* Generated by RuntimeBrowser.
 */

@protocol _UIContextMenuInteractionDelegate <NSObject>

@required

- (_UIContextMenuPreviewActionGroup *)contextMenuInteraction:(_UIContextMenuInteraction *)arg1 actionsForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2 withSuggestedActions:(NSArray *)arg3;

@optional

- (_UITargetedPreview *)contextMenuInteraction:(_UIContextMenuInteraction *)arg1 previewForHighlightingAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteractionDidEnd:(_UIContextMenuInteraction *)arg1;
- (bool)contextMenuInteractionShouldBegin:(_UIContextMenuInteraction *)arg1;
- (void)contextMenuInteractionWillPresent:(_UIContextMenuInteraction *)arg1;
- (_UITargetedPreview *)targetedPreviewForDismissingContextMenuInteraction:(_UIContextMenuInteraction *)arg1;

@end
