/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDiscretionaryOptions : NSObject <NSCoding, NSSecureCoding> {
    bool  _allowsExpensiveAccess;
    unsigned long long  _discretionaryNetworkBehavior;
    NSString * _secondarySourceAppplicationBundleId;
    NSString * _sourceApplicationBundleId;
    double  _timeoutIntervalForResource;
}

@property (nonatomic) bool allowsExpensiveAccess;
@property (nonatomic) unsigned long long discretionaryNetworkBehavior;
@property (nonatomic, retain) NSString *secondarySourceAppplicationBundleId;
@property (nonatomic, retain) NSString *sourceApplicationBundleId;
@property (nonatomic) double timeoutIntervalForResource;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsExpensiveAccess;
- (unsigned long long)discretionaryNetworkBehavior;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)secondarySourceAppplicationBundleId;
- (void)setAllowsExpensiveAccess:(bool)arg1;
- (void)setDiscretionaryNetworkBehavior:(unsigned long long)arg1;
- (void)setSecondarySourceAppplicationBundleId:(id)arg1;
- (void)setSourceApplicationBundleId:(id)arg1;
- (void)setTimeoutIntervalForResource:(double)arg1;
- (id)sourceApplicationBundleId;
- (double)timeoutIntervalForResource;

@end