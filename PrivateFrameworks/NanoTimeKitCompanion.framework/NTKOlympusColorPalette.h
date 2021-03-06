/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKOlympusColorPalette : NSObject <NTKCircularAnalogDialColorPalette> {
    UIColor * _accentColor;
    UIColor * _blackColor;
    UIColor * _circularDialSubtickColor;
    unsigned long long  _color;
    UIColor * _cornerComplicationsAccentColor;
    UIColor * _darkMainColor;
    unsigned long long  _dial;
    UIColor * _largeHandsColor;
    UIColor * _lightMainColor;
    UIColor * _mainColor;
    UIColor * _primaryBackgroundColor;
    UIColor * _primaryLogoColor;
    UIColor * _primaryTextColor;
    UIColor * _secondHandColor;
    UIColor * _secondaryBackgroundColor;
    UIColor * _secondaryLogoColor;
    UIColor * _secondaryTextColor;
    UIColor * _softBlackColor;
    UIColor * _softWhiteColor;
    unsigned long long  _style;
}

@property (nonatomic, retain) UIColor *accentColor;
@property (nonatomic, readonly) UIColor *bezelComplicationColor;
@property (nonatomic, retain) UIColor *blackColor;
@property (nonatomic, retain) UIColor *circularDialSubtickColor;
@property (nonatomic) unsigned long long color;
@property (nonatomic, retain) UIColor *cornerComplicationsAccentColor;
@property (nonatomic, retain) UIColor *darkMainColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long dial;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBlackBackground;
@property (nonatomic, retain) UIColor *largeHandsColor;
@property (nonatomic, retain) UIColor *lightMainColor;
@property (nonatomic, retain) UIColor *mainColor;
@property (nonatomic, retain) UIColor *primaryBackgroundColor;
@property (nonatomic, retain) UIColor *primaryLogoColor;
@property (nonatomic, readonly) UIColor *primaryOutlineTextColor;
@property (nonatomic, retain) UIColor *primaryTextColor;
@property (nonatomic, retain) UIColor *secondHandColor;
@property (nonatomic, retain) UIColor *secondaryBackgroundColor;
@property (nonatomic, retain) UIColor *secondaryLogoColor;
@property (nonatomic, readonly) UIColor *secondaryOutlineTextColor;
@property (nonatomic, retain) UIColor *secondaryTextColor;
@property (nonatomic, retain) UIColor *softBlackColor;
@property (nonatomic, retain) UIColor *softWhiteColor;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;

+ (id)paletteForColor:(unsigned long long)arg1 dial:(unsigned long long)arg2 style:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)accentColor;
- (id)bezelComplicationColor;
- (id)blackColor;
- (id)circularDialFillColor;
- (id)circularDialSubtickColor;
- (id)circularDialTickColor;
- (unsigned long long)color;
- (id)cornerComplicationsAccentColor;
- (id)darkMainColor;
- (unsigned long long)dial;
- (id)initWithColor:(unsigned long long)arg1 dial:(unsigned long long)arg2 style:(unsigned long long)arg3;
- (bool)isBlackBackground;
- (bool)isEqual:(id)arg1;
- (id)largeHandsColor;
- (id)lightMainColor;
- (id)mainColor;
- (id)primaryBackgroundColor;
- (id)primaryLogoColor;
- (id)primaryOutlineTextColor;
- (id)primaryTextColor;
- (id)secondHandColor;
- (id)secondaryBackgroundColor;
- (id)secondaryLogoColor;
- (id)secondaryOutlineTextColor;
- (id)secondaryTextColor;
- (void)setAccentColor:(id)arg1;
- (void)setBlackColor:(id)arg1;
- (void)setCircularDialSubtickColor:(id)arg1;
- (void)setColor:(unsigned long long)arg1;
- (void)setCornerComplicationsAccentColor:(id)arg1;
- (void)setDarkMainColor:(id)arg1;
- (void)setDial:(unsigned long long)arg1;
- (void)setLargeHandsColor:(id)arg1;
- (void)setLightMainColor:(id)arg1;
- (void)setMainColor:(id)arg1;
- (void)setPrimaryBackgroundColor:(id)arg1;
- (void)setPrimaryLogoColor:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setSecondHandColor:(id)arg1;
- (void)setSecondaryBackgroundColor:(id)arg1;
- (void)setSecondaryLogoColor:(id)arg1;
- (void)setSecondaryTextColor:(id)arg1;
- (void)setSoftBlackColor:(id)arg1;
- (void)setSoftWhiteColor:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (id)softBlackColor;
- (id)softWhiteColor;
- (unsigned long long)style;

@end
