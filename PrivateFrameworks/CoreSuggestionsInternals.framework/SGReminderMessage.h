/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGReminderMessage : NSObject {
    NSArray * _enrichedTaggedCharacterRanges;
    SGPipelineEntity * _entity;
    SGTextMessage * _message;
    NSDictionary * _modelOutput;
}

@property (nonatomic, retain) NSArray *enrichedTaggedCharacterRanges;
@property (nonatomic, retain) SGPipelineEntity *entity;
@property (nonatomic, retain) SGTextMessage *message;
@property (nonatomic, retain) NSDictionary *modelOutput;

+ (id)_labelTokenIndexesForOutputName:(id)arg1 label:(id)arg2 modelOutput:(id)arg3;
+ (id)allDayDateComponentsFromDate:(id)arg1;
+ (id)blacklist;
+ (bool)blacklistedContent:(id)arg1;
+ (id)detectedTitleInModelOutput:(id)arg1 enrichedTaggedCharacterRanges:(id)arg2 textContent:(id)arg3;
+ (bool)enrichedTaggedCharacterRangesContainsProfanity:(id)arg1;
+ (id)regexFromJoinedArray:(id)arg1;
+ (id)triggerOptionalTokens;
+ (bool)validActionVerbIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 enrichedTaggedCharacterRanges:(id)arg2;
+ (bool)validModelOutput:(id)arg1 error:(id*)arg2;
+ (bool)validObjectCoreIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 enrichedTaggedCharacterRanges:(id)arg2;

- (void).cxx_destruct;
- (id)_labelTokenIndexesForOutputName:(id)arg1 label:(id)arg2;
- (id)detectedDueDateComponents;
- (id)detectedTitle;
- (id)dueLocation;
- (id)enrichedTaggedCharacterRanges;
- (id)entity;
- (bool)hasTrigger;
- (id)initWithMessage:(id)arg1 entity:(id)arg2 enrichedTaggedCharacterRanges:(id)arg3 modelOutput:(id)arg4;
- (bool)isConfirmation;
- (bool)isProposal;
- (bool)isTriggerOptional;
- (id)message;
- (id)modelOutput;
- (void)setEnrichedTaggedCharacterRanges:(id)arg1;
- (void)setEntity:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setModelOutput:(id)arg1;

@end