/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFContactSubstitutableState : WFMultipleValueParameterState

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;

- (id)collectionByConvertingStringItemsToHandles:(id)arg1;
- (void)processContentCollection:(id)arg1 fromVariable:(bool)arg2 valueHandler:(id /* block */)arg3;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(id /* block */)arg3 valueHandler:(id /* block */)arg4;
- (bool)reinterpretsStringsAsContactHandlesFromVariable:(bool)arg1;
- (id)stringInterpretedAsContactHandle:(id)arg1;
- (id)valueItemClasses;

@end
