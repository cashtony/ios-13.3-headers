/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDQuantitySampleValueEnumerator : NSObject

+ (long long)_enumerateWithEnumerator:(id)arg1 endTime:(double)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (id)_propertiesForEnumeration;
+ (id)_queryForEnumerationWithPredicate:(id)arg1 transaction:(id)arg2 options:(long long)arg3;
+ (bool)orderedQuantityValuesBySeriesForPredicate:(id)arg1 profile:(id)arg2 options:(long long)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
+ (bool)orderedQuantityValuesBySeriesForPredicate:(id)arg1 transaction:(id)arg2 options:(long long)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
+ (bool)orderedQuantityValuesForPredicate:(id)arg1 profile:(id)arg2 options:(long long)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
+ (bool)orderedQuantityValuesForPredicate:(id)arg1 transaction:(id)arg2 options:(long long)arg3 error:(id*)arg4 handler:(id /* block */)arg5;

@end
