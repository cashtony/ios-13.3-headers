/* Generated by RuntimeBrowser.
 */

@protocol WiFiCandidateNetwork <NSObject, TBScorable>

@required

- (NSString *)SSID;
- (NSSet *)accessPoints;
- (NSSet *)attributes;
- (bool)containsAccessPointMatchingBSSIDs:(NSSet *)arg1;
- (bool)matched;
- (NSString *)password;
- (void)setMatched:(bool)arg1;
- (void)setSSID:(NSString *)arg1;
- (long long)source;

@optional

- (NSString *)uniqueIdentifier;

@end
