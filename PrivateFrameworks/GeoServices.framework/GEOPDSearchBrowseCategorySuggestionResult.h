/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchBrowseCategorySuggestionResult : PBCodable <NSCopying> {
    NSMutableArray * _categorys;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *categorys;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)categoryType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addCategory:(id)arg1;
- (id)categoryAtIndex:(unsigned long long)arg1;
- (id)categorys;
- (unsigned long long)categorysCount;
- (void)clearCategorys;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategorys:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
