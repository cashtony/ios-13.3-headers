/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentPassActivationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate, PKPaymentSetupViewControllerDelegate> {
    PKPeerPaymentCredential * _credential;
    <PKPaymentSetupViewControllerDelegate> * _delegate;
    PKPeerPaymentSetupFlowHeroView * _heroView;
    UIImage * _passSnapShot;
    PKPeerPaymentWebService * _peerPaymentWebService;
    bool  _presentedDeviceToDeviceEncryptionFlow;
    PKPaymentProvisioningController * _provisioningController;
    bool  _shouldShowAddDebitCardViewController;
    unsigned long long  _state;
    PKPeerPaymentTermsController * _termsController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool presentedDeviceToDeviceEncryptionFlow;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginSetup;
- (id)_bodyStringForState;
- (void)_checkCloudStoreState;
- (void)_handleActivatedState;
- (void)_handleError:(id)arg1;
- (void)_handleNextStep;
- (void)_initalizeCloudStoreWithTargetDevice:(id)arg1 ifNecessaryWithCompletion:(id /* block */)arg2;
- (void)_presentActivationFailedErrorAlert;
- (void)_presentAddDebitCardViewController;
- (void)_presentAlertControllerForError:(id)arg1;
- (void)_presentDeviceToDeviceEncryptionFlow;
- (void)_presentIdentityVerificationWithError:(id)arg1;
- (void)_presentMissingTLKsAlert;
- (void)_presentSetupWillCompleteLaterAlertController;
- (void)_presentTermsAndConditionsWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)_processCloudStorePCSError;
- (void)_provisionPeerPaymentPass;
- (void)_resetApplyPayManateeView;
- (void)_setShowSpinner:(bool)arg1;
- (void)_setState:(unsigned long long)arg1;
- (bool)_shouldShowAddDebitCardViewController;
- (struct CGSize { double x1; double x2; })_snapshotSize;
- (void)_terminateSetupFlow;
- (id)_titleStringForState;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 credential:(id)arg4 passSnapShot:(id)arg5;
- (bool)presentedDeviceToDeviceEncryptionFlow;
- (void)setPresentedDeviceToDeviceEncryptionFlow:(bool)arg1;
- (void)viewControllerDidCancelSetupFlow:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewDidLoad;

@end