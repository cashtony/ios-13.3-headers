/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSAttestation : NSObject

+ (id)ACLVersionForOptions:(id)arg1;
+ (id)ACLVersionOnDiskForOptions:(id)arg1;
+ (id)_attestationPListWithStyle:(unsigned long long)arg1 primaryAttestation:(id)arg2 extendedAttestation:(id)arg3 error:(id*)arg4;
+ (id)_certChainStringsWithOptions:(id)arg1 error:(id*)arg2;
+ (id)attestationHTTPBodyDataWithStyle:(unsigned long long)arg1 regenerateKeys:(bool)arg2 error:(id*)arg3;
+ (id)attestationWithOptions:(id)arg1 error:(id*)arg2;
+ (bool)clearAttestationWithAccount:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (bool)clearAttestationWithOptions:(id)arg1 error:(id*)arg2;

@end
