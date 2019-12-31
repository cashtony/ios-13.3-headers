/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFPasswordPickerViewController : UINavigationController <_SFPasswordPickerTableViewControllerDelegate> {
    _ASIncomingCallObserver * _callObserver;
    id /* block */  _completionHandler;
    _SFPasswordPickerTableViewController * _passwordPickerTableViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_preventsAppearanceProxyCustomization;

- (void).cxx_destruct;
- (void)_appDidEnterBackground:(id)arg1;
- (void)_dismiss;
- (void)dealloc;
- (id)initWithPrompt:(id)arg1 forUserNamesOnly:(bool)arg2 appNames:(id)arg3 appID:(id)arg4 matchedSites:(id)arg5 urlString:(id)arg6 minimumNumberOfCredentialsToShowLikelyMatchesSection:(unsigned long long)arg7 shouldShowIcons:(bool)arg8 completionHandler:(id /* block */)arg9;
- (void)passwordPickerTableViewController:(id)arg1 didPickSavedPassword:(id)arg2;
- (void)passwordPickerTableViewControllerDidCancel:(id)arg1;

@end