/* Generated by RuntimeBrowser.
 */

@protocol WFTumblrViewControllerDelegate <NSObject>

@optional

- (void)tumblrViewController:(WFTumblrViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)tumblrViewController:(WFTumblrViewController *)arg1 didSucceedWithOAuthToken:(NSString *)arg2 OAuthTokenSecret:(NSString *)arg3;
- (void)tumblrViewControllerDidCancel:(WFTumblrViewController *)arg1;

@end
