/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeWidthCache : NSObject {
    struct vector<TSTStrokeWidthCacheEntry, std::__1::allocator<TSTStrokeWidthCacheEntry> > { 
        struct TSTStrokeWidthCacheEntry {} *__begin_; 
        struct TSTStrokeWidthCacheEntry {} *__end_; 
        struct __compressed_pair<TSTStrokeWidthCacheEntry *, std::__1::allocator<TSTStrokeWidthCacheEntry> > { 
            struct TSTStrokeWidthCacheEntry {} *__value_; 
        } __end_cap_; 
    }  _indexToCacheEntriesMap;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _rwlock;
}

@property (nonatomic) struct _opaque_pthread_rwlock_t { long long x1; BOOL x2[192]; } rwlock;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)lockForWriting;
- (struct _opaque_pthread_rwlock_t { long long x1; BOOL x2[192]; })rwlock;
- (void)setCount:(unsigned int)arg1;
- (void)setRwlock:(struct _opaque_pthread_rwlock_t { long long x1; BOOL x2[192]; })arg1;
- (double)strokeWidthForGridIndex:(unsigned int)arg1 inRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg2;
- (void)unlock;
- (void)updateCacheForGridIndex:(unsigned int)arg1 withMergedStrokes:(id)arg2;

@end
