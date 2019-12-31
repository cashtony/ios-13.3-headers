/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
 */

@interface CKContextResponse : NSObject <NSSecureCoding> {
    NSString * _debug;
    bool  _discarded;
    _Atomic bool  _engaged;
    NSError * _error;
    NSDate * _hideCompletionsAfterDate;
    double  _hideCompletionsTimeLimit;
    NSArray * _level1Topics;
    NSArray * _level2Topics;
    _Atomic bool  _logged;
    _Atomic unsigned int  _loggingCouldHaveShownMax;
    _Atomic unsigned int  _loggingInputLengthMax;
    _Atomic bool  _loggingServerOverride;
    _Atomic unsigned int  _loggingShownMax;
    unsigned long long  _mustPrefixMatchLength;
    unsigned long long  _requestType;
    NSDate * _responseDate;
    NSArray * _results;
    bool  _resultsNeedFiltering;
    _Atomic bool  _shown;
    _Atomic bool  _transactionSuccessful;
    NSString * _uuid;
}

@property (nonatomic, retain) NSString *debug;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSDate *hideCompletionsAfterDate;
@property (nonatomic, retain) NSArray *level1Topics;
@property (nonatomic, retain) NSArray *level2Topics;
@property (nonatomic) unsigned long long mustPrefixMatchLength;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic, retain) NSDate *responseDate;
@property (nonatomic, retain) NSArray *results;
@property (nonatomic) bool resultsNeedFiltering;
@property (nonatomic, copy) NSString *uuid;

// Image: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addDebug:(id)arg1;
- (void)appendToDebug:(id)arg1;
- (id)completer;
- (void)dealloc;
- (id)debug;
- (void)discard;
- (void)discardCompleter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)hideCompletionsAfterDate;
- (id)initPlaceholderWithUUID:(id)arg1 requestType:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1 requestType:(unsigned long long)arg2;
- (id)initWithResults:(id)arg1 requestType:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isPlaceholder;
- (id)level1Topics;
- (id)level2Topics;
- (void)logEngagement:(id)arg1 forInput:(id)arg2 completion:(id)arg3;
- (void)logResultsShown:(unsigned long long)arg1 serverOverride:(bool)arg2 forInput:(id)arg3 couldHaveShown:(unsigned long long)arg4;
- (void)logTransactionSuccessfulForInput:(id)arg1 completion:(id)arg2;
- (unsigned long long)mustPrefixMatchLength;
- (unsigned long long)requestType;
- (id)responseDate;
- (id)resultByQuery:(id)arg1;
- (id)results;
- (bool)resultsNeedFiltering;
- (void)setDebug:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHideCompletionsAfterDate:(id)arg1;
- (void)setHideCompletionsTimeLimit:(double)arg1;
- (void)setLevel1Topics:(id)arg1;
- (void)setLevel2Topics:(id)arg1;
- (void)setMustPrefixMatchLength:(unsigned long long)arg1;
- (void)setRequestType:(unsigned long long)arg1;
- (void)setResponseDate:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setResultsNeedFiltering:(bool)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (id)safari_topQIDsWithMaximumCount:(unsigned long long)arg1;

@end