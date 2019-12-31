/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAShortcutController : TSPObject {
    TSADocumentRoot * _documentRoot;
    NSMutableDictionary * _shortcutToStyleDictionary;
    TSURetainedPointerKeyDictionary * _styleToShortcutDictionary;
}

@property (nonatomic) TSADocumentRoot *documentRoot;
@property (nonatomic, readonly) bool hasShortcuts;

+ (id)localizedStringForShortcut:(id)arg1;

- (void)dealloc;
- (void)documentDidLoad;
- (id)documentRoot;
- (void)documentWillUnload;
- (bool)hasShortcuts;
- (id)initWithDocumentRoot:(id)arg1;
- (void)loadFromArchive:(const struct ShortcutControllerArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSA::ShortcutControllerArchive_ShortcutMapEntry> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)removeStylesNotInTheme;
- (void)saveToArchive:(struct ShortcutControllerArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSA::ShortcutControllerArchive_ShortcutMapEntry> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setDocumentRoot:(id)arg1;
- (void)setStyle:(id)arg1 forShortcut:(id)arg2;
- (id)shortcutForStyle:(id)arg1;
- (id)styleForShortcut:(id)arg1;

@end