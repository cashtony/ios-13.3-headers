/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableSortRule : NSObject <NSCopying> {
    struct TSUModelColumnIndex { 
        unsigned short _column; 
    }  _baseColumnIndex;
    int  _direction;
}

@property (nonatomic, readonly) struct TSUModelColumnIndex { unsigned short x1; } baseColumnIndex;
@property (nonatomic, readonly) int direction;

+ (id)ruleWithBaseColumnIndex:(struct TSUModelColumnIndex { unsigned short x1; })arg1 direction:(int)arg2;

- (struct TSUModelColumnIndex { unsigned short x1; })baseColumnIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)direction;
- (void)encodeToArchive:(struct TableSortOrderArchive_SortRuleArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; unsigned int x5; int x6; }*)arg1;
- (unsigned long long)hash;
- (id)initFromArchive:(const struct TableSortOrderArchive_SortRuleArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; unsigned int x5; int x6; }*)arg1;
- (id)initWithBaseColumnIndex:(struct TSUModelColumnIndex { unsigned short x1; })arg1 direction:(int)arg2;
- (bool)isEqual:(id)arg1;
- (id)ruleByChangingBaseColumnIndexTo:(struct TSUModelColumnIndex { unsigned short x1; })arg1;
- (id)ruleByChangingDirectionTo:(int)arg1;

@end