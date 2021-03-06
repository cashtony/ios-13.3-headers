/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOClientCapabilities : PBCodable <NSCopying> {
    GEOAbAssignInfo * _abAssignInfo;
    NSString * _appMajorVersion;
    NSString * _appMinorVersion;
    bool  _clusteredTransitRoutesSupported;
    NSString * _deviceCountryCode;
    NSString * _deviceSku;
    NSMutableArray * _displayLanguages;
    NSString * _displayRegion;
    struct { 
        unsigned int has_maxFormatterSupported : 1; 
        unsigned int has_maxManeuverTypeSupported : 1; 
        unsigned int has_maxRouteIncidentSupported : 1; 
        unsigned int has_maxTrafficSpeedSupported : 1; 
        unsigned int has_maxZilchMessageVersionSupported : 1; 
        unsigned int has_transitMarketSupport : 1; 
        unsigned int has_clusteredTransitRoutesSupported : 1; 
        unsigned int has_includeCrossLanguagePhonetics : 1; 
        unsigned int has_internalInstall : 1; 
        unsigned int has_internalTool : 1; 
        unsigned int has_routeOptionsSupported : 1; 
        unsigned int has_snapToClosestStopSupported : 1; 
        unsigned int has_supportsArrivalMapRegion : 1; 
        unsigned int has_supportsGuidanceEventsInlineShields : 1; 
        unsigned int has_supportsGuidanceEvents : 1; 
        unsigned int has_supportsJunctionView : 1; 
        unsigned int has_supportsLongShieldStrings : 1; 
        unsigned int has_supportsNaturalGuidance : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_supportedTransitFeatures : 1; 
        unsigned int read_abAssignInfo : 1; 
        unsigned int read_appMajorVersion : 1; 
        unsigned int read_appMinorVersion : 1; 
        unsigned int read_deviceCountryCode : 1; 
        unsigned int read_deviceSku : 1; 
        unsigned int read_displayLanguages : 1; 
        unsigned int read_displayRegion : 1; 
        unsigned int read_formattedStringClientCapabilities : 1; 
        unsigned int read_hardwareModel : 1; 
        unsigned int read_localizationCapabilities : 1; 
        unsigned int read_requestTime : 1; 
        unsigned int read_userCurrentTimezone : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_supportedTransitFeatures : 1; 
        unsigned int wrote_abAssignInfo : 1; 
        unsigned int wrote_appMajorVersion : 1; 
        unsigned int wrote_appMinorVersion : 1; 
        unsigned int wrote_deviceCountryCode : 1; 
        unsigned int wrote_deviceSku : 1; 
        unsigned int wrote_displayLanguages : 1; 
        unsigned int wrote_displayRegion : 1; 
        unsigned int wrote_formattedStringClientCapabilities : 1; 
        unsigned int wrote_hardwareModel : 1; 
        unsigned int wrote_localizationCapabilities : 1; 
        unsigned int wrote_requestTime : 1; 
        unsigned int wrote_userCurrentTimezone : 1; 
        unsigned int wrote_maxFormatterSupported : 1; 
        unsigned int wrote_maxManeuverTypeSupported : 1; 
        unsigned int wrote_maxRouteIncidentSupported : 1; 
        unsigned int wrote_maxTrafficSpeedSupported : 1; 
        unsigned int wrote_maxZilchMessageVersionSupported : 1; 
        unsigned int wrote_transitMarketSupport : 1; 
        unsigned int wrote_clusteredTransitRoutesSupported : 1; 
        unsigned int wrote_includeCrossLanguagePhonetics : 1; 
        unsigned int wrote_internalInstall : 1; 
        unsigned int wrote_internalTool : 1; 
        unsigned int wrote_routeOptionsSupported : 1; 
        unsigned int wrote_snapToClosestStopSupported : 1; 
        unsigned int wrote_supportsArrivalMapRegion : 1; 
        unsigned int wrote_supportsGuidanceEventsInlineShields : 1; 
        unsigned int wrote_supportsGuidanceEvents : 1; 
        unsigned int wrote_supportsJunctionView : 1; 
        unsigned int wrote_supportsLongShieldStrings : 1; 
        unsigned int wrote_supportsNaturalGuidance : 1; 
    }  _flags;
    GEOFormattedStringClientCapabilities * _formattedStringClientCapabilities;
    NSString * _hardwareModel;
    bool  _includeCrossLanguagePhonetics;
    bool  _internalInstall;
    bool  _internalTool;
    GEOLocalizationCapabilities * _localizationCapabilities;
    int  _maxFormatterSupported;
    int  _maxManeuverTypeSupported;
    int  _maxRouteIncidentSupported;
    unsigned int  _maxTrafficSpeedSupported;
    unsigned int  _maxZilchMessageVersionSupported;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOLocalTime * _requestTime;
    bool  _routeOptionsSupported;
    bool  _snapToClosestStopSupported;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedTransitFeatures;
    bool  _supportsArrivalMapRegion;
    bool  _supportsGuidanceEvents;
    bool  _supportsGuidanceEventsInlineShields;
    bool  _supportsJunctionView;
    bool  _supportsLongShieldStrings;
    bool  _supportsNaturalGuidance;
    int  _transitMarketSupport;
    PBUnknownFields * _unknownFields;
    NSString * _userCurrentTimezone;
}

@property (nonatomic, retain) GEOAbAssignInfo *abAssignInfo;
@property (nonatomic, retain) NSString *appMajorVersion;
@property (nonatomic, retain) NSString *appMinorVersion;
@property (nonatomic) bool clusteredTransitRoutesSupported;
@property (nonatomic, retain) NSString *deviceCountryCode;
@property (nonatomic, retain) NSString *deviceSku;
@property (nonatomic, retain) NSMutableArray *displayLanguages;
@property (nonatomic, retain) NSString *displayRegion;
@property (nonatomic, retain) GEOFormattedStringClientCapabilities *formattedStringClientCapabilities;
@property (nonatomic, retain) NSString *hardwareModel;
@property (nonatomic, readonly) bool hasAbAssignInfo;
@property (nonatomic, readonly) bool hasAppMajorVersion;
@property (nonatomic, readonly) bool hasAppMinorVersion;
@property (nonatomic) bool hasClusteredTransitRoutesSupported;
@property (nonatomic, readonly) bool hasDeviceCountryCode;
@property (nonatomic, readonly) bool hasDeviceSku;
@property (nonatomic, readonly) bool hasDisplayRegion;
@property (nonatomic, readonly) bool hasFormattedStringClientCapabilities;
@property (nonatomic, readonly) bool hasHardwareModel;
@property (nonatomic) bool hasIncludeCrossLanguagePhonetics;
@property (nonatomic) bool hasInternalInstall;
@property (nonatomic) bool hasInternalTool;
@property (nonatomic, readonly) bool hasLocalizationCapabilities;
@property (nonatomic) bool hasMaxFormatterSupported;
@property (nonatomic) bool hasMaxManeuverTypeSupported;
@property (nonatomic) bool hasMaxRouteIncidentSupported;
@property (nonatomic) bool hasMaxTrafficSpeedSupported;
@property (nonatomic) bool hasMaxZilchMessageVersionSupported;
@property (nonatomic, readonly) bool hasRequestTime;
@property (nonatomic) bool hasRouteOptionsSupported;
@property (nonatomic) bool hasSnapToClosestStopSupported;
@property (nonatomic) bool hasSupportsArrivalMapRegion;
@property (nonatomic) bool hasSupportsGuidanceEvents;
@property (nonatomic) bool hasSupportsGuidanceEventsInlineShields;
@property (nonatomic) bool hasSupportsJunctionView;
@property (nonatomic) bool hasSupportsLongShieldStrings;
@property (nonatomic) bool hasSupportsNaturalGuidance;
@property (nonatomic) bool hasTransitMarketSupport;
@property (nonatomic, readonly) bool hasUserCurrentTimezone;
@property (nonatomic) bool includeCrossLanguagePhonetics;
@property (nonatomic) bool internalInstall;
@property (nonatomic) bool internalTool;
@property (nonatomic, retain) GEOLocalizationCapabilities *localizationCapabilities;
@property (nonatomic) int maxFormatterSupported;
@property (nonatomic) int maxManeuverTypeSupported;
@property (nonatomic) int maxRouteIncidentSupported;
@property (nonatomic) unsigned int maxTrafficSpeedSupported;
@property (nonatomic) unsigned int maxZilchMessageVersionSupported;
@property (nonatomic, retain) GEOLocalTime *requestTime;
@property (nonatomic) bool routeOptionsSupported;
@property (nonatomic) bool snapToClosestStopSupported;
@property (nonatomic, readonly) int*supportedTransitFeatures;
@property (nonatomic, readonly) unsigned long long supportedTransitFeaturesCount;
@property (nonatomic) bool supportsArrivalMapRegion;
@property (nonatomic) bool supportsGuidanceEvents;
@property (nonatomic) bool supportsGuidanceEventsInlineShields;
@property (nonatomic) bool supportsJunctionView;
@property (nonatomic) bool supportsLongShieldStrings;
@property (nonatomic) bool supportsNaturalGuidance;
@property (nonatomic) int transitMarketSupport;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *userCurrentTimezone;

+ (Class)displayLanguagesType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsMaxManeuverTypeSupported:(id)arg1;
- (int)StringAsSupportedTransitFeatures:(id)arg1;
- (int)StringAsTransitMarketSupport:(id)arg1;
- (void)_addNoFlagsDisplayLanguages:(id)arg1;
- (void)_addNoFlagsSupportedTransitFeature:(int)arg1;
- (void)_readAbAssignInfo;
- (void)_readAppMajorVersion;
- (void)_readAppMinorVersion;
- (void)_readDeviceCountryCode;
- (void)_readDeviceSku;
- (void)_readDisplayLanguages;
- (void)_readDisplayRegion;
- (void)_readFormattedStringClientCapabilities;
- (void)_readHardwareModel;
- (void)_readLocalizationCapabilities;
- (void)_readRequestTime;
- (void)_readSupportedTransitFeatures;
- (void)_readUserCurrentTimezone;
- (id)abAssignInfo;
- (void)addDisplayLanguages:(id)arg1;
- (void)addSupportedTransitFeature:(int)arg1;
- (id)appMajorVersion;
- (id)appMinorVersion;
- (void)clearDisplayLanguages;
- (void)clearSupportedTransitFeatures;
- (void)clearUnknownFields:(bool)arg1;
- (bool)clusteredTransitRoutesSupported;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceCountryCode;
- (id)deviceSku;
- (id)dictionaryRepresentation;
- (id)displayLanguages;
- (id)displayLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayLanguagesCount;
- (id)displayRegion;
- (id)formattedStringClientCapabilities;
- (id)hardwareModel;
- (bool)hasAbAssignInfo;
- (bool)hasAppMajorVersion;
- (bool)hasAppMinorVersion;
- (bool)hasClusteredTransitRoutesSupported;
- (bool)hasDeviceCountryCode;
- (bool)hasDeviceSku;
- (bool)hasDisplayRegion;
- (bool)hasFormattedStringClientCapabilities;
- (bool)hasHardwareModel;
- (bool)hasIncludeCrossLanguagePhonetics;
- (bool)hasInternalInstall;
- (bool)hasInternalTool;
- (bool)hasLocalizationCapabilities;
- (bool)hasMaxFormatterSupported;
- (bool)hasMaxManeuverTypeSupported;
- (bool)hasMaxRouteIncidentSupported;
- (bool)hasMaxTrafficSpeedSupported;
- (bool)hasMaxZilchMessageVersionSupported;
- (bool)hasRequestTime;
- (bool)hasRouteOptionsSupported;
- (bool)hasSnapToClosestStopSupported;
- (bool)hasSupportsArrivalMapRegion;
- (bool)hasSupportsGuidanceEvents;
- (bool)hasSupportsGuidanceEventsInlineShields;
- (bool)hasSupportsJunctionView;
- (bool)hasSupportsLongShieldStrings;
- (bool)hasSupportsNaturalGuidance;
- (bool)hasTransitMarketSupport;
- (bool)hasUserCurrentTimezone;
- (unsigned long long)hash;
- (bool)includeCrossLanguagePhonetics;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)internalInstall;
- (bool)internalTool;
- (bool)isEqual:(id)arg1;
- (id)localizationCapabilities;
- (int)maxFormatterSupported;
- (int)maxManeuverTypeSupported;
- (id)maxManeuverTypeSupportedAsString:(int)arg1;
- (int)maxRouteIncidentSupported;
- (unsigned int)maxTrafficSpeedSupported;
- (unsigned int)maxZilchMessageVersionSupported;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestTime;
- (bool)routeOptionsSupported;
- (void)setAbAssignInfo:(id)arg1;
- (void)setAppMajorVersion:(id)arg1;
- (void)setAppMinorVersion:(id)arg1;
- (void)setClusteredTransitRoutesSupported:(bool)arg1;
- (void)setDeviceCountryCode:(id)arg1;
- (void)setDeviceSku:(id)arg1;
- (void)setDisplayLanguages:(id)arg1;
- (void)setDisplayRegion:(id)arg1;
- (void)setFormattedStringClientCapabilities:(id)arg1;
- (void)setHardwareModel:(id)arg1;
- (void)setHasClusteredTransitRoutesSupported:(bool)arg1;
- (void)setHasIncludeCrossLanguagePhonetics:(bool)arg1;
- (void)setHasInternalInstall:(bool)arg1;
- (void)setHasInternalTool:(bool)arg1;
- (void)setHasMaxFormatterSupported:(bool)arg1;
- (void)setHasMaxManeuverTypeSupported:(bool)arg1;
- (void)setHasMaxRouteIncidentSupported:(bool)arg1;
- (void)setHasMaxTrafficSpeedSupported:(bool)arg1;
- (void)setHasMaxZilchMessageVersionSupported:(bool)arg1;
- (void)setHasRouteOptionsSupported:(bool)arg1;
- (void)setHasSnapToClosestStopSupported:(bool)arg1;
- (void)setHasSupportsArrivalMapRegion:(bool)arg1;
- (void)setHasSupportsGuidanceEvents:(bool)arg1;
- (void)setHasSupportsGuidanceEventsInlineShields:(bool)arg1;
- (void)setHasSupportsJunctionView:(bool)arg1;
- (void)setHasSupportsLongShieldStrings:(bool)arg1;
- (void)setHasSupportsNaturalGuidance:(bool)arg1;
- (void)setHasTransitMarketSupport:(bool)arg1;
- (void)setIncludeCrossLanguagePhonetics:(bool)arg1;
- (void)setInternalInstall:(bool)arg1;
- (void)setInternalTool:(bool)arg1;
- (void)setLocalizationCapabilities:(id)arg1;
- (void)setMaxFormatterSupported:(int)arg1;
- (void)setMaxManeuverTypeSupported:(int)arg1;
- (void)setMaxRouteIncidentSupported:(int)arg1;
- (void)setMaxTrafficSpeedSupported:(unsigned int)arg1;
- (void)setMaxZilchMessageVersionSupported:(unsigned int)arg1;
- (void)setRequestTime:(id)arg1;
- (void)setRouteOptionsSupported:(bool)arg1;
- (void)setSnapToClosestStopSupported:(bool)arg1;
- (void)setSupportedTransitFeatures:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSupportsArrivalMapRegion:(bool)arg1;
- (void)setSupportsGuidanceEvents:(bool)arg1;
- (void)setSupportsGuidanceEventsInlineShields:(bool)arg1;
- (void)setSupportsJunctionView:(bool)arg1;
- (void)setSupportsLongShieldStrings:(bool)arg1;
- (void)setSupportsNaturalGuidance:(bool)arg1;
- (void)setTransitMarketSupport:(int)arg1;
- (void)setUserCurrentTimezone:(id)arg1;
- (bool)snapToClosestStopSupported;
- (int)supportedTransitFeatureAtIndex:(unsigned long long)arg1;
- (int*)supportedTransitFeatures;
- (id)supportedTransitFeaturesAsString:(int)arg1;
- (unsigned long long)supportedTransitFeaturesCount;
- (bool)supportsArrivalMapRegion;
- (bool)supportsGuidanceEvents;
- (bool)supportsGuidanceEventsInlineShields;
- (bool)supportsJunctionView;
- (bool)supportsLongShieldStrings;
- (bool)supportsNaturalGuidance;
- (int)transitMarketSupport;
- (id)transitMarketSupportAsString:(int)arg1;
- (id)unknownFields;
- (id)userCurrentTimezone;
- (void)writeTo:(id)arg1;

@end
