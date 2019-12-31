/* Generated by RuntimeBrowser.
 */

@protocol SFSuggestionCardSection <SFCardSection>

@required

- (SFColor *)backgroundColor;
- (bool)canBeHidden;
- (NSDictionary *)dictionaryRepresentation;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (bool)isContact;
- (NSData *)jsonData;
- (NSArray *)punchoutOptions;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (NSString *)scopedSearchSectionBundleIdentifier;
- (int)separatorStyle;
- (void)setBackgroundColor:(SFColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setIsContact:(bool)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setScopedSearchSectionBundleIdentifier:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSuggestionText:(SFRichText *)arg1;
- (void)setSuggestionType:(int)arg1;
- (void)setType:(NSString *)arg1;
- (SFRichText *)suggestionText;
- (int)suggestionType;
- (NSString *)type;

@end