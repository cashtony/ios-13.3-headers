/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

@interface TMLJSONObject : NSObject <NSCopying, TMLObservable> {
    NSData * _DATA;
    TMLJSONSchema * _SCHEMA;
    NSString * _STRING;
    NSMutableDictionary * _derived;
    NSMutableSet * _observers;
    NSDictionary * _rawJSON;
}

@property (nonatomic, copy) NSData *DATA;
@property (nonatomic, readonly) TMLJSONSchema *SCHEMA;
@property (nonatomic, copy) NSString *STRING;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *rawJSON;
@property (readonly) Class superclass;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)tmlPropertyWithKeyPath:(id)arg1;

- (void).cxx_destruct;
- (id)DATA;
- (id)SCHEMA;
- (id)STRING;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithSchema:(id)arg1;
- (id)initWithSchema:(id)arg1 json:(id)arg2;
- (bool)internalSetJSON:(id)arg1;
- (void)internalValidateJSON:(id)arg1 completion:(id /* block */)arg2;
- (void)notifyAllObservers;
- (id)rawJSON;
- (id)rawValueForKeyPath:(id)arg1 dictionary:(id)arg2;
- (void)setDATA:(id)arg1;
- (void)setRawJSON:(id)arg1;
- (void)setRawJSONAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)setRawJSONSync:(id)arg1;
- (void)setSTRING:(id)arg1;
- (void)tmlAddObserver:(id)arg1 forKeyPath:(id)arg2 callback:(id /* block */)arg3;
- (void)tmlRemoveObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)validateJSON:(id)arg1 completion:(id /* block */)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

@end