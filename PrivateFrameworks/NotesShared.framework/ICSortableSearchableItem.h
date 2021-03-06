/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICSortableSearchableItem : NSObject {
    NSDate * _creationDate;
    bool  _isPrefixMatch;
    NSDate * _modificationDate;
    unsigned long long  _modificationDateBucket;
    double  _rankingScore;
    unsigned long long  _relevanceBitField;
    unsigned long long  _searchResultType;
    CSSearchableItem * _searchableItem;
}

@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic) bool isPrefixMatch;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic) unsigned long long modificationDateBucket;
@property (nonatomic) double rankingScore;
@property (nonatomic) unsigned long long relevanceBitField;
@property (nonatomic) unsigned long long searchResultType;
@property (nonatomic, retain) CSSearchableItem *searchableItem;

+ (id)sortDescriptorsForRankingStrategy:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)creationDate;
- (id)initWithSearchableItem:(id)arg1 rankingScore:(double)arg2 relevanceBitField:(unsigned long long)arg3 modificationDateBucket:(unsigned long long)arg4 searchResultType:(unsigned long long)arg5 isPrefixMatch:(bool)arg6;
- (bool)isPrefixMatch;
- (id)modificationDate;
- (unsigned long long)modificationDateBucket;
- (double)rankingScore;
- (unsigned long long)relevanceBitField;
- (unsigned long long)searchResultType;
- (id)searchableItem;
- (void)setCreationDate:(id)arg1;
- (void)setIsPrefixMatch:(bool)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setModificationDateBucket:(unsigned long long)arg1;
- (void)setRankingScore:(double)arg1;
- (void)setRelevanceBitField:(unsigned long long)arg1;
- (void)setSearchResultType:(unsigned long long)arg1;
- (void)setSearchableItem:(id)arg1;

@end
