/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIKeyboardInteractionProtocolEventCandidateAccepted : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent> {
    TIKeyboardCandidate * _candWord;
    long long  _candidateIndex;
    NSString * _context;
    TIDocumentState * _documentState;
    TIKeyboardInput * _input;
    NSString * _inputStem;
    bool  _predictionBarHit;
    bool  _useCandidateSelection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidateAccepted:(id)arg1 withInput:(id)arg2 documentState:(id)arg3 inputContext:(id)arg4 inputStem:(id)arg5 predictionBarHit:(bool)arg6 useCandidateSelection:(bool)arg7 candidateIndex:(long long)arg8 keyboardState:(id)arg9;
- (id)initWithCoder:(id)arg1;
- (void)sendTo:(id)arg1;

@end
