/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGMemory : NSObject <PGMemoryCore, PGMemoryProtocol> {
    unsigned long long  _aggregatedVersions;
    PHAssetCollection * _assetCollection;
    NSArray * _blacklistableFeatures;
    unsigned long long  _category;
    NSDate * _creationDate;
    PHAssetCollection * _curatedAssetCollection;
    PHAsset * _curatedKeyAsset;
    PGMemoryDebug * _debug;
    unsigned long long  _duration;
    PHAssetCollection * _extendedCuratedAssetCollection;
    NSSet * _features;
    NSDate * _localEndDate;
    NSDate * _localStartDate;
    NSString * _matchedEventName;
    NSDate * _matchedLocalDate;
    CLLocation * _matchedLocation;
    NSSet * _matchedPeople;
    unsigned long long  _matchedTypes;
    NSString * _meUUID;
    NSSet * _momentIDs;
    NSDictionary * _musicGenreDistribution;
    long long  _notificationQuality;
    NSDictionary * _numberOfAssetsByMomentIDs;
    unsigned long long  _originalSubcategory;
    NSMutableSet * _persistedFeatures;
    NSString * _rejectionCause;
    double  _score;
    long long  _sourceType;
    unsigned long long  _subcategory;
    NSString * _subtitle;
    NSString * _title;
    long long  _titleCategory;
    NSDate * _universalEndDate;
    NSDate * _universalStartDate;
}

@property (nonatomic, readonly) unsigned long long aggregatedVersions;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, retain) NSArray *blacklistableFeatures;
@property (nonatomic) unsigned long long category;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) PHAssetCollection *curatedAssetCollection;
@property (nonatomic, retain) PHAsset *curatedKeyAsset;
@property (nonatomic) unsigned short curationAlgorithmsVersion;
@property (nonatomic, retain) PGMemoryDebug *debug;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long duration;
@property (nonatomic, retain) PHAssetCollection *extendedCuratedAssetCollection;
@property (nonatomic, retain) NSSet *features;
@property (nonatomic) unsigned short graphSchemaVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *localEndDate;
@property (nonatomic, retain) NSDate *localStartDate;
@property (nonatomic, retain) NSString *matchedEventName;
@property (nonatomic, retain) NSDate *matchedLocalDate;
@property (nonatomic, retain) CLLocation *matchedLocation;
@property (nonatomic, retain) NSSet *matchedPeople;
@property (nonatomic) unsigned long long matchedTypes;
@property (nonatomic, retain) NSString *meUUID;
@property (nonatomic, readonly) NSArray *meaningLabels;
@property (nonatomic) unsigned short memoriesAlgorithmsVersion;
@property (nonatomic, retain) NSSet *momentIDs;
@property (nonatomic, readonly) NSArray *moodKeywords;
@property (nonatomic, copy) NSDictionary *musicGenreDistribution;
@property (nonatomic) long long notificationQuality;
@property (nonatomic, retain) NSDictionary *numberOfAssetsByMomentIDs;
@property (nonatomic) unsigned long long originalSubcategory;
@property (nonatomic, retain) NSMutableSet *persistedFeatures;
@property (nonatomic) NSString *rejectionCause;
@property (nonatomic) unsigned short relatedAlgorithmsVersion;
@property (nonatomic) double score;
@property (nonatomic) long long sourceType;
@property (nonatomic) unsigned long long subcategory;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, readonly) unsigned long long suggestedMood;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) long long titleCategory;
@property (nonatomic, retain) NSDate *universalEndDate;
@property (nonatomic, retain) NSDate *universalStartDate;

+ (id)greatMemoryCriteria;
+ (id)mustSeeMemoryCriteria;
+ (id)otherMemoryCriteria;
+ (id)stellarMemoryCriteria;
+ (id)stringForSourceType:(long long)arg1;

- (void).cxx_destruct;
- (id)_localIdentifiersInAssetCollection:(id)arg1;
- (double)_scoreForMemoryCriteria:(id)arg1;
- (void)addPersistedFeature:(id)arg1;
- (unsigned long long)aggregatedVersions;
- (id)assetCollection;
- (id)blacklistableFeatures;
- (unsigned long long)category;
- (id)creationDate;
- (id)curatedAssetCollection;
- (id)curatedKeyAsset;
- (unsigned short)curationAlgorithmsVersion;
- (id)debug;
- (id)description;
- (unsigned long long)duration;
- (id)extendedCuratedAssetCollection;
- (id)features;
- (unsigned short)graphSchemaVersion;
- (id)initWithAssetCollection:(id)arg1;
- (bool)isGreat;
- (bool)isMustSee;
- (bool)isStellar;
- (id)localEndDate;
- (id)localStartDate;
- (id)matchedEventName;
- (id)matchedLocalDate;
- (id)matchedLocation;
- (id)matchedPeople;
- (unsigned long long)matchedTypes;
- (id)meUUID;
- (id)meaningLabels;
- (unsigned short)memoriesAlgorithmsVersion;
- (id)momentIDs;
- (id)moodKeywords;
- (id)musicGenreDistribution;
- (long long)notificationQuality;
- (id)numberOfAssetsByMomentIDs;
- (unsigned long long)originalSubcategory;
- (id)persistedFeatures;
- (double)phMemoryScore;
- (id)rejectionCause;
- (unsigned short)relatedAlgorithmsVersion;
- (double)score;
- (void)setBlacklistableFeatures:(id)arg1;
- (void)setCategory:(unsigned long long)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCuratedAssetCollection:(id)arg1;
- (void)setCuratedKeyAsset:(id)arg1;
- (void)setCurationAlgorithmsVersion:(unsigned short)arg1;
- (void)setDebug:(id)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setExtendedCuratedAssetCollection:(id)arg1;
- (void)setFeatures:(id)arg1;
- (void)setGraphSchemaVersion:(unsigned short)arg1;
- (void)setLocalEndDate:(id)arg1;
- (void)setLocalStartDate:(id)arg1;
- (void)setMatchedEventName:(id)arg1;
- (void)setMatchedLocalDate:(id)arg1;
- (void)setMatchedLocation:(id)arg1;
- (void)setMatchedPeople:(id)arg1;
- (void)setMatchedTypes:(unsigned long long)arg1;
- (void)setMeUUID:(id)arg1;
- (void)setMemoriesAlgorithmsVersion:(unsigned short)arg1;
- (void)setMomentIDs:(id)arg1;
- (void)setMusicGenreDistribution:(id)arg1;
- (void)setNotificationQuality:(long long)arg1;
- (void)setNumberOfAssetsByMomentIDs:(id)arg1;
- (void)setOriginalSubcategory:(unsigned long long)arg1;
- (void)setPersistedFeatures:(id)arg1;
- (void)setRejectionCause:(id)arg1;
- (void)setRelatedAlgorithmsVersion:(unsigned short)arg1;
- (void)setScore:(double)arg1;
- (void)setSourceType:(long long)arg1;
- (void)setSubcategory:(unsigned long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleCategory:(long long)arg1;
- (void)setUniversalEndDate:(id)arg1;
- (void)setUniversalStartDate:(id)arg1;
- (long long)sourceType;
- (unsigned long long)subcategory;
- (id)subtitle;
- (unsigned long long)suggestedMood;
- (id)title;
- (long long)titleCategory;
- (id)universalEndDate;
- (id)universalStartDate;

@end