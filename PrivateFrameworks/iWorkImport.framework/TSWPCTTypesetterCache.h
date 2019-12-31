/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPCTTypesetterCache : NSObject {
    struct map<unsigned long, std::__1::shared_ptr<TSWPParagraphTypesetter>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<TSWPParagraphTypesetter> > > > { 
        struct __tree<std::__1::__value_type<unsigned long, std::__1::shared_ptr<TSWPParagraphTypesetter> >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::shared_ptr<TSWPParagraphTypesetter> >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::shared_ptr<TSWPParagraphTypesetter> > > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::shared_ptr<TSWPParagraphTypesetter> >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::shared_ptr<TSWPParagraphTypesetter> >, std::__1::less<unsigned long>, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _typesetters;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addTypesetterForParagraphIdentifier:(unsigned long long)arg1 typesetter:(struct shared_ptr<TSWPParagraphTypesetter> { struct TSWPParagraphTypesetter {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (struct shared_ptr<TSWPParagraphTypesetter> { struct TSWPParagraphTypesetter {} *x1; struct __shared_weak_count {} *x2; })cachedTypesetterForParagraphIdentifier:(unsigned long long)arg1;
- (void)clearCache;
- (void)dealloc;
- (void)p_limitCacheSize:(unsigned long long)arg1;
- (void)removeTypesetterForParagraphIndex:(unsigned long long)arg1;

@end