/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficRerouteFeedback : PBCodable <NSCopying> {
    int  _actionType;
    int  _alertType;
    bool  _backgrounded;
    struct { 
        unsigned int has_actionType : 1; 
        unsigned int has_alertType : 1; 
        unsigned int has_oldRouteHistoricTravelTime : 1; 
        unsigned int has_oldRouteTravelTime : 1; 
        unsigned int has_rerouteType : 1; 
        unsigned int has_reroutedRouteHistoricTravelTime : 1; 
        unsigned int has_reroutedRouteTravelTime : 1; 
        unsigned int has_backgrounded : 1; 
        unsigned int read_oldRouteID : 1; 
        unsigned int read_oldRouteIncidents : 1; 
        unsigned int read_reroutedRouteID : 1; 
        unsigned int read_responseId : 1; 
        unsigned int wrote_oldRouteID : 1; 
        unsigned int wrote_oldRouteIncidents : 1; 
        unsigned int wrote_reroutedRouteID : 1; 
        unsigned int wrote_responseId : 1; 
        unsigned int wrote_actionType : 1; 
        unsigned int wrote_alertType : 1; 
        unsigned int wrote_oldRouteHistoricTravelTime : 1; 
        unsigned int wrote_oldRouteTravelTime : 1; 
        unsigned int wrote_rerouteType : 1; 
        unsigned int wrote_reroutedRouteHistoricTravelTime : 1; 
        unsigned int wrote_reroutedRouteTravelTime : 1; 
        unsigned int wrote_backgrounded : 1; 
    }  _flags;
    unsigned int  _oldRouteHistoricTravelTime;
    NSData * _oldRouteID;
    NSMutableArray * _oldRouteIncidents;
    unsigned int  _oldRouteTravelTime;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _rerouteType;
    unsigned int  _reroutedRouteHistoricTravelTime;
    NSData * _reroutedRouteID;
    unsigned int  _reroutedRouteTravelTime;
    NSData * _responseId;
}

@property (nonatomic) int actionType;
@property (nonatomic) int alertType;
@property (nonatomic) bool backgrounded;
@property (nonatomic) bool hasActionType;
@property (nonatomic) bool hasAlertType;
@property (nonatomic) bool hasBackgrounded;
@property (nonatomic) bool hasOldRouteHistoricTravelTime;
@property (nonatomic, readonly) bool hasOldRouteID;
@property (nonatomic) bool hasOldRouteTravelTime;
@property (nonatomic) bool hasRerouteType;
@property (nonatomic) bool hasReroutedRouteHistoricTravelTime;
@property (nonatomic, readonly) bool hasReroutedRouteID;
@property (nonatomic) bool hasReroutedRouteTravelTime;
@property (nonatomic, readonly) bool hasResponseId;
@property (nonatomic) unsigned int oldRouteHistoricTravelTime;
@property (nonatomic, retain) NSData *oldRouteID;
@property (nonatomic, retain) NSMutableArray *oldRouteIncidents;
@property (nonatomic) unsigned int oldRouteTravelTime;
@property (nonatomic) int rerouteType;
@property (nonatomic) unsigned int reroutedRouteHistoricTravelTime;
@property (nonatomic, retain) NSData *reroutedRouteID;
@property (nonatomic) unsigned int reroutedRouteTravelTime;
@property (nonatomic, retain) NSData *responseId;

+ (bool)isValid:(id)arg1;
+ (Class)oldRouteIncidentsType;

- (void).cxx_destruct;
- (int)StringAsActionType:(id)arg1;
- (int)StringAsAlertType:(id)arg1;
- (int)StringAsRerouteType:(id)arg1;
- (void)_addNoFlagsOldRouteIncidents:(id)arg1;
- (void)_readOldRouteID;
- (void)_readOldRouteIncidents;
- (void)_readReroutedRouteID;
- (void)_readResponseId;
- (int)actionType;
- (id)actionTypeAsString:(int)arg1;
- (void)addOldRouteIncidents:(id)arg1;
- (int)alertType;
- (id)alertTypeAsString:(int)arg1;
- (bool)backgrounded;
- (void)clearOldRouteIncidents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionType;
- (bool)hasAlertType;
- (bool)hasBackgrounded;
- (bool)hasOldRouteHistoricTravelTime;
- (bool)hasOldRouteID;
- (bool)hasOldRouteTravelTime;
- (bool)hasRerouteType;
- (bool)hasReroutedRouteHistoricTravelTime;
- (bool)hasReroutedRouteID;
- (bool)hasReroutedRouteTravelTime;
- (bool)hasResponseId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)oldRouteHistoricTravelTime;
- (id)oldRouteID;
- (id)oldRouteIncidents;
- (id)oldRouteIncidentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)oldRouteIncidentsCount;
- (unsigned int)oldRouteTravelTime;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)rerouteType;
- (id)rerouteTypeAsString:(int)arg1;
- (unsigned int)reroutedRouteHistoricTravelTime;
- (id)reroutedRouteID;
- (unsigned int)reroutedRouteTravelTime;
- (id)responseId;
- (void)setActionType:(int)arg1;
- (void)setAlertType:(int)arg1;
- (void)setBackgrounded:(bool)arg1;
- (void)setHasActionType:(bool)arg1;
- (void)setHasAlertType:(bool)arg1;
- (void)setHasBackgrounded:(bool)arg1;
- (void)setHasOldRouteHistoricTravelTime:(bool)arg1;
- (void)setHasOldRouteTravelTime:(bool)arg1;
- (void)setHasRerouteType:(bool)arg1;
- (void)setHasReroutedRouteHistoricTravelTime:(bool)arg1;
- (void)setHasReroutedRouteTravelTime:(bool)arg1;
- (void)setOldRouteHistoricTravelTime:(unsigned int)arg1;
- (void)setOldRouteID:(id)arg1;
- (void)setOldRouteIncidents:(id)arg1;
- (void)setOldRouteTravelTime:(unsigned int)arg1;
- (void)setRerouteType:(int)arg1;
- (void)setReroutedRouteHistoricTravelTime:(unsigned int)arg1;
- (void)setReroutedRouteID:(id)arg1;
- (void)setReroutedRouteTravelTime:(unsigned int)arg1;
- (void)setResponseId:(id)arg1;
- (void)writeTo:(id)arg1;

@end