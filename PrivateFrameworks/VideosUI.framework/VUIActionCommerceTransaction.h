/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIActionCommerceTransaction : VUIAction {
    IKAppContext * _appContext;
    NSString * _commerceActionRef;
    NSDictionary * _contextData;
}

@property (nonatomic) IKAppContext *appContext;
@property (nonatomic, retain) NSString *commerceActionRef;
@property (nonatomic, copy) NSDictionary *contextData;

+ (void)_addTransaction:(id)arg1 forBuyParams:(id)arg2;
+ (void)_removeTransactionForBuyParams:(id)arg1;
+ (id)_skuDownloadKind:(long long)arg1;
+ (void)displayConfirmationNotificationWithTitle:(id)arg1 andBody:(id)arg2 forChannelName:(id)arg3;
+ (id)extractSalableAdamIDFromBuyParams:(id)arg1;
+ (bool)isTransactionInProgressForBuyParams:(id)arg1;

- (void).cxx_destruct;
- (void)_postPurchaseNotification:(id)arg1 error:(id)arg2;
- (void)_postSubscriptionNotificationWithChannelName:(id)arg1 buyParams:(id)arg2 error:(id)arg3;
- (void)_postTransactionDidStartNotificationWithBuyParams:(id)arg1;
- (void)_recordLog:(id)arg1 withBuyParams:(id)arg2;
- (void)_startPurchaseFlowForOffer:(id)arg1 playWhenDone:(bool)arg2 appContext:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_startSubscribeFlowForOffer:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)appContext;
- (id)commerceActionRef;
- (id)contextData;
- (id)initWithActionRef:(id)arg1 contextData:(id)arg2 appContext:(id)arg3;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setAppContext:(id)arg1;
- (void)setCommerceActionRef:(id)arg1;
- (void)setContextData:(id)arg1;

@end
