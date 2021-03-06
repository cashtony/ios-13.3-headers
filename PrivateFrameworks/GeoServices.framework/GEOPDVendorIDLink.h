/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDVendorIDLink : PBCodable <NSCopying> {
    NSString * _externalItemId;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_reservationTypes : 1; 
        unsigned int read_externalItemId : 1; 
        unsigned int read_vendorId : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_reservationTypes : 1; 
        unsigned int wrote_externalItemId : 1; 
        unsigned int wrote_vendorId : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _reservationTypes;
    PBUnknownFields * _unknownFields;
    NSString * _vendorId;
}

@property (nonatomic, retain) NSString *externalItemId;
@property (nonatomic, readonly) bool hasExternalItemId;
@property (nonatomic, readonly) bool hasVendorId;
@property (nonatomic, readonly) int*reservationTypes;
@property (nonatomic, readonly) unsigned long long reservationTypesCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *vendorId;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsReservationTypes:(id)arg1;
- (void)_addNoFlagsReservationType:(int)arg1;
- (void)_readExternalItemId;
- (void)_readReservationTypes;
- (void)_readVendorId;
- (void)addReservationType:(int)arg1;
- (void)clearReservationTypes;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalItemId;
- (bool)hasExternalItemId;
- (bool)hasVendorId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)reservationTypeAtIndex:(unsigned long long)arg1;
- (int*)reservationTypes;
- (id)reservationTypesAsString:(int)arg1;
- (unsigned long long)reservationTypesCount;
- (void)setExternalItemId:(id)arg1;
- (void)setReservationTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setVendorId:(id)arg1;
- (id)unknownFields;
- (id)vendorId;
- (void)writeTo:(id)arg1;

@end
