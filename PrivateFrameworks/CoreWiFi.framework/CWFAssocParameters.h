/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

@interface CWFAssocParameters : NSObject <NSCopying, NSSecureCoding> {
    CWFEAPCredentials * _EAPCredentials;
    CWFNetworkProfile * _knownNetworkProfile;
    NSString * _password;
    bool  _rememberUponSuccessfulAssociation;
    CWFScanResult * _scanResult;
}

@property (nonatomic, copy) CWFEAPCredentials *EAPCredentials;
@property (nonatomic, copy) CWFNetworkProfile *knownNetworkProfile;
@property (nonatomic, copy) NSString *password;
@property (nonatomic) bool rememberUponSuccessfulAssociation;
@property (nonatomic, copy) CWFScanResult *scanResult;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)EAPCredentials;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAssocParameters:(id)arg1;
- (id)knownNetworkProfile;
- (id)password;
- (bool)rememberUponSuccessfulAssociation;
- (id)scanResult;
- (void)setEAPCredentials:(id)arg1;
- (void)setKnownNetworkProfile:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setRememberUponSuccessfulAssociation:(bool)arg1;
- (void)setScanResult:(id)arg1;

@end