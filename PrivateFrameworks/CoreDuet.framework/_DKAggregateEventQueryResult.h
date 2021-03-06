/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKAggregateEventQueryResult : NSObject {
    NSMutableArray * _mutableErrors;
    NSMutableArray * _mutableEvents;
    unsigned long long  _numberOfContributions;
    _DKEventQuery * _query;
}

@property (nonatomic, readonly, copy) NSError *aggregateError;
@property (nonatomic, readonly, copy) NSArray *aggregateEvents;
@property (nonatomic, retain) NSMutableArray *mutableErrors;
@property (nonatomic, retain) NSMutableArray *mutableEvents;
@property (nonatomic) unsigned long long numberOfContributions;
@property (nonatomic, retain) _DKEventQuery *query;

- (void).cxx_destruct;
- (void)addError:(id)arg1;
- (void)addEvents:(id)arg1;
- (id)aggregateError;
- (id)aggregateEvents;
- (id)initWithEventQuery:(id)arg1;
- (id)mutableErrors;
- (id)mutableEvents;
- (unsigned long long)numberOfContributions;
- (id)query;
- (void)setMutableErrors:(id)arg1;
- (void)setMutableEvents:(id)arg1;
- (void)setNumberOfContributions:(unsigned long long)arg1;
- (void)setQuery:(id)arg1;

@end
