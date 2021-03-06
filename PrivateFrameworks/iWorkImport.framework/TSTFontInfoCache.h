/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTFontInfoCache : NSObject {
    NSMapTable * _cache;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _rwlock;
}

@property (nonatomic, retain) NSMapTable *cache;

- (void).cxx_destruct;
- (id)cache;
- (void)dealloc;
- (id)fontInfoForTextStyle:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)p_didEnterBackground:(id)arg1;
- (void)p_didReceiveMemoryWarning:(id)arg1;
- (void)setCache:(id)arg1;

@end
