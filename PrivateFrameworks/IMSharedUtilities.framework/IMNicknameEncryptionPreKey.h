/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMNicknameEncryptionPreKey : NSObject {
    NSData * _derivedData;
    NSData * _generatedData;
}

@property (nonatomic, readonly) IMNicknameFieldEncryptionKey *fieldEncryptionKey;
@property (nonatomic, readonly) IMNicknameFieldTaggingKey *fieldTaggingKey;
@property (nonatomic, readonly) IMNicknameRecordTaggingKey *recordTaggingKey;

+ (id)generatePreKeyWithError:(id*)arg1;
+ (id)preKeyWithDataRepresentation:(id)arg1 error:(id*)arg2;

- (id)_subDerviedKeyDataAtIndex:(unsigned long long)arg1;
- (id)dataRepresentation;
- (void)dealloc;
- (id)fieldEncryptionKey;
- (id)fieldTaggingKey;
- (id)initWithGeneratedData:(id)arg1 derivedData:(id)arg2;
- (id)recordTaggingKey;

@end
