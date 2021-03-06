/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIWatchListCardRowModel : SearchUICardSectionRowModel {
    long long  _buttonState;
    <SearchUIWatchListCardRowModelDelegate> * _delegate;
    bool  _hasError;
    bool  _hasLoaded;
    SFImage * _image;
    SearchUIWatchListCardsManager * _manager;
    SFPunchout * _punchout;
    NSString * _text;
}

@property (nonatomic) long long buttonState;
@property (nonatomic, retain) SFWatchListCardSection *cardSection;
@property <SearchUIWatchListCardRowModelDelegate> *delegate;
@property (nonatomic) bool hasError;
@property (nonatomic) bool hasLoaded;
@property (nonatomic, retain) SFImage *image;
@property (nonatomic, retain) SearchUIWatchListCardsManager *manager;
@property (nonatomic, retain) SFPunchout *punchout;
@property (nonatomic, retain) NSString *text;

- (void).cxx_destruct;
- (long long)buttonState;
- (id)delegate;
- (bool)hasError;
- (bool)hasLoaded;
- (id)image;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 asyncRowManager:(id)arg3 queryId:(unsigned long long)arg4;
- (bool)isDraggable;
- (bool)isTappable;
- (id)manager;
- (id)punchout;
- (id)punchouts;
- (int)separatorStyle;
- (void)setButtonState:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasLoaded:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setPunchout:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)toggleAddToUpNextWithFeedbackDelegate:(id)arg1;
- (void)updateWithText:(id)arg1 buttonState:(long long)arg2;
- (void)updateWithText:(id)arg1 buttonState:(long long)arg2 image:(id)arg3 punchout:(id)arg4;

@end
