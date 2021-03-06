/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIAuthKitUpdatePromptController : NSObject <AKAppleIDAuthenticationDelegate, AMSAuthKitUpdateController> {
    struct UIViewController { Class x1; } * _presentingViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (readonly) Class superclass;

+ (Class)_authKitAuthenticationContextClass;
+ (id)_createAuthenticationController;

- (void).cxx_destruct;
- (id)_createAuthenticationContextForAccount:(id)arg1 options:(id)arg2;
- (void)_handleAuthKitError:(id)arg1 options:(id)arg2;
- (bool)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (id)initWithPresentingViewController:(id)arg1;
- (id)performAuthKitUpdateForAccount:(id)arg1 options:(id)arg2;
- (struct UIViewController { Class x1; }*)presentingViewController;

@end
