/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLJournalEntryPayloadProperty : NSObject {
    bool  _isToManySubRelationship;
    bool  _isUUIDKey;
    NSString * _key;
    PLJournalEntryPayloadProperty * _parentProperty;
    NSSet * _relationPropertyNames;
    bool  _requiresConversion;
    NSDictionary * _subRelationshipProperties;
    unsigned long long  _type;
}

@property (nonatomic, readonly) bool isPropertyListSupportedType;
@property (nonatomic, readonly) bool isToManySubRelationship;
@property (nonatomic, readonly) bool isUUIDKey;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic) PLJournalEntryPayloadProperty *parentProperty;
@property (nonatomic, readonly) NSSet *relationPropertyNames;
@property (nonatomic, readonly) bool requiresConversion;
@property (nonatomic, readonly) NSDictionary *subRelationshipProperties;
@property (nonatomic, readonly) unsigned long long type;

+ (id)payloadPropertyForUUID;
+ (id)payloadPropertyWithKey:(id)arg1 andType:(unsigned long long)arg2;
+ (id)payloadPropertyWithKey:(id)arg1 andType:(unsigned long long)arg2 requiresConversion:(bool)arg3;
+ (id)payloadPropertyWithKey:(id)arg1 relationPropertyNames:(id)arg2;
+ (id)payloadPropertyWithKey:(id)arg1 subRelationshipProperties:(id)arg2 isToMany:(bool)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)initWithKey:(id)arg1 andType:(unsigned long long)arg2 subRelationshipProperties:(id)arg3 requiresConversion:(bool)arg4 relationPropertyNames:(id)arg5 isUUIDKey:(bool)arg6 isToManySubRelationship:(bool)arg7;
- (bool)isEqualToKey:(id)arg1;
- (bool)isPropertyListSupportedType;
- (bool)isToManySubRelationship;
- (bool)isUUIDKey;
- (id)key;
- (id)parentProperty;
- (id)relationPropertyNames;
- (bool)requiresConversion;
- (void)setParentProperty:(id)arg1;
- (id)subRelationshipProperties;
- (unsigned long long)type;

@end
