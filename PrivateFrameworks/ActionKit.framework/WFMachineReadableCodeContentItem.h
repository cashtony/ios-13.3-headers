/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFMachineReadableCodeContentItem : WFContentItem <WFContentItemClass> {
    NSString * _errorCorrectionLevel;
    bool  _prefersImage;
}

@property (nonatomic, readonly) WFMachineReadableCode *codeObject;
@property (nonatomic, retain) NSString *errorCorrectionLevel;
@property (nonatomic) bool prefersImage;

+ (id)contentCategories;
+ (id)countDescription;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)qrCodeItemWithString:(id)arg1 errorCorrectionLevel:(id)arg2;
+ (bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)typeDescription;

- (void).cxx_destruct;
- (bool)canGenerateRepresentationForType:(id)arg1;
- (id)codeObject;
- (id)errorCorrectionLevel;
- (id)generateImageOfSize:(struct CGSize { double x1; double x2; })arg1 withErrorCorrectionLevel:(id)arg2 error:(id*)arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (id)preferredFileType;
- (id)preferredObjectType;
- (bool)prefersImage;
- (void)setErrorCorrectionLevel:(id)arg1;
- (void)setPrefersImage:(bool)arg1;

@end