/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLAbstractCellPropertyProvider : NSObject {
    NFLFontCache * _fontCache;
    NSString * _plistName;
    id * _propertiesByColumnSpan;
    unsigned long long  _propertiesByColumnSpanSize;
    NFUnfairLock * _propertiesLock;
    Class  _propertyClass;
    double  _scaleValue;
}

@property (nonatomic, readonly) NFLFontCache *fontCache;
@property (nonatomic, retain) NSString *plistName;
@property (nonatomic) unsigned long long propertiesByColumnSpanSize;
@property (nonatomic, retain) NFUnfairLock *propertiesLock;
@property (nonatomic) Class propertyClass;
@property (nonatomic, readonly) double scaleValue;

+ (id)plistProvider;
+ (id)publisherTitleFontLarge;
+ (id)publisherTitleFontSmall;

- (void).cxx_destruct;
- (void)_loadIfNeeded;
- (void)dealloc;
- (id)fontCache;
- (id)init;
- (id)initWithScaleValue:(double)arg1 preferredContentSizeCategory:(id)arg2 fontCache:(id)arg3 plistName:(id)arg4 propertyClass:(Class)arg5;
- (id)plistName;
- (unsigned long long)propertiesByColumnSpanSize;
- (id)propertiesForColumnSpan:(long long)arg1;
- (id)propertiesLock;
- (Class)propertyClass;
- (double)scaleValue;
- (void)setPlistName:(id)arg1;
- (void)setPropertiesByColumnSpanSize:(unsigned long long)arg1;
- (void)setPropertiesLock:(id)arg1;
- (void)setPropertyClass:(Class)arg1;

@end
