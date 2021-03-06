/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

@interface BCSConfigController : NSObject

- (id)_shardHashForIndex:(long long)arg1 count:(long long)arg2;
- (void)deleteConfigItemFromPersistentStore;
- (void)fetchBloomFilterWithStartIndex:(long long)arg1 shardCount:(long long)arg2 forClientBundleID:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchConfigItemForClientBundleID:(id)arg1 completion:(id /* block */)arg2;

@end
