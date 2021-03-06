/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSPurchase : NSObject <NSCopying> {
    NSNumber * _accountId;
    NSDictionary * _additionalHeaders;
    AMSBuyParams * _buyParams;
    NSString * _callerBundleId;
    NSString * _clientId;
    NSString * _logUUID;
    NSNumber * _ownerAccountId;
    long long  _purchaseType;
    NSString * _storefront;
    NSNumber * _uniqueIdentifier;
    bool  _userInitiated;
}

@property (nonatomic, copy) NSNumber *accountId;
@property (nonatomic, copy) NSDictionary *additionalHeaders;
@property (nonatomic, readonly) AMSBuyParams *buyParams;
@property (nonatomic, copy) NSString *callerBundleId;
@property (nonatomic, copy) NSString *clientId;
@property (nonatomic, copy) NSString *logUUID;
@property (nonatomic, copy) NSNumber *ownerAccountId;
@property (readonly) long long purchaseType;
@property (nonatomic, copy) NSString *storefront;
@property (nonatomic, readonly) NSNumber *uniqueIdentifier;
@property (getter=isUserInitiated, nonatomic) bool userInitiated;

- (void).cxx_destruct;
- (id)_generateIdentifier;
- (id)accountId;
- (id)additionalHeaders;
- (id)buyParams;
- (id)callerBundleId;
- (id)clientId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPurchaseType:(long long)arg1 buyParams:(id)arg2;
- (bool)isUserInitiated;
- (id)logUUID;
- (id)ownerAccountId;
- (long long)purchaseType;
- (void)setAccountId:(id)arg1;
- (void)setAdditionalHeaders:(id)arg1;
- (void)setCallerBundleId:(id)arg1;
- (void)setClientId:(id)arg1;
- (void)setLogUUID:(id)arg1;
- (void)setOwnerAccountId:(id)arg1;
- (void)setStorefront:(id)arg1;
- (void)setUserInitiated:(bool)arg1;
- (id)storefront;
- (id)uniqueIdentifier;

@end
