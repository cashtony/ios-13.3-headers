/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFSaveFileAction : WFStorageServiceAction {
    <WFFileStorageServiceOperation> * _saveOperation;
}

@property (nonatomic, retain) <WFFileStorageServiceOperation> *saveOperation;

- (void).cxx_destruct;
- (void)cancel;
- (id)filePathKey;
- (void)finishRunningWithError:(id)arg1;
- (bool)inputsMultipleItems;
- (bool)outputsMultipleItems;
- (void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2;
- (id)saveOperation;
- (void)setSaveOperation:(id)arg1;
- (id)showPickerKey;

@end
