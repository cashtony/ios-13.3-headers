/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBAppBuild : PBCodable <NSCopying, NSSecureCoding, _INPBAppBuild> {
    bool  __encodeLegacyGloryData;
    _INPBAppId * _appId;
    _INPBBuildId * _buildId;
    struct { }  _has;
}

@property (setter=_setEncodeLegacyGloryData:, nonatomic) bool _encodeLegacyGloryData;
@property (nonatomic, retain) _INPBAppId *appId;
@property (nonatomic, retain) _INPBBuildId *buildId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAppId;
@property (nonatomic, readonly) bool hasBuildId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_encodeLegacyGloryData;
- (void)_setEncodeLegacyGloryData:(bool)arg1;
- (id)appId;
- (id)buildId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAppId;
- (bool)hasBuildId;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppId:(id)arg1;
- (void)setBuildId:(id)arg1;
- (void)writeTo:(id)arg1;

@end