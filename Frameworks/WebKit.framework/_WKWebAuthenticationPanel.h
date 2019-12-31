/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKWebAuthenticationPanel : NSObject <WKObject> {
    struct WeakPtr<WebKit::WebAuthenticationPanelClient> { 
        struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { 
            struct WeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  _client;
    struct ObjectStorage<API::WebAuthenticationPanel> { 
        struct type { 
            unsigned char __lx[48]; 
        } data; 
    }  _panel;
}

@property (readonly) struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_WKWebAuthenticationPanelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *relyingPartyID;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (id)relyingPartyID;
- (void)setDelegate:(id)arg1;

@end