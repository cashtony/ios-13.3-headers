/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaClientEvent : PBCodable {
    SISchemaAudioFirstBufferRecorded * _audioFirstBufferRecorded;
    SISchemaAudioStopRecording * _audioStopRecording;
    SISchemaConversationTrace * _clientConversationTrace;
    SISchemaClientFlow * _clientFlow;
    SISchemaDeviceDynamicContext * _deviceDynamicContext;
    SISchemaDeviceFixedContext * _deviceFixedContext;
    SISchemaDialogOutput * _dialogOutput;
    SISchemaDictationContext * _dictationContext;
    SISchemaClientEventMetadata * _eventMetadata;
    SISchemaInvocation * _invocation;
    SISchemaLocation * _location;
    SISchemaPunchOut * _punchOut;
    SISchemaSiriCue * _siriCue;
    SISchemaSpeechTranscription * _speechTranscription;
    SISchemaTextToSpeechBegin * _textToSpeechBegin;
    SISchemaTextToSpeechEnd * _textToSpeechEnd;
    SISchemaClientTransportEventMetadata * _transportMetadata;
    SISchemaUIStateTransition * _uiStateTransition;
    SISchemaUUFRPresented * _uufrPresented;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) SISchemaAudioFirstBufferRecorded *audioFirstBufferRecorded;
@property (nonatomic, retain) SISchemaAudioStopRecording *audioStopRecording;
@property (nonatomic, retain) SISchemaConversationTrace *clientConversationTrace;
@property (nonatomic, retain) SISchemaClientFlow *clientFlow;
@property (nonatomic, retain) SISchemaDeviceDynamicContext *deviceDynamicContext;
@property (nonatomic, retain) SISchemaDeviceFixedContext *deviceFixedContext;
@property (nonatomic, retain) SISchemaDialogOutput *dialogOutput;
@property (nonatomic, retain) SISchemaDictationContext *dictationContext;
@property (nonatomic, retain) SISchemaClientEventMetadata *eventMetadata;
@property (nonatomic, retain) SISchemaInvocation *invocation;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaLocation *location;
@property (nonatomic, retain) SISchemaPunchOut *punchOut;
@property (nonatomic, retain) SISchemaSiriCue *siriCue;
@property (nonatomic, retain) SISchemaSpeechTranscription *speechTranscription;
@property (nonatomic, retain) SISchemaTextToSpeechBegin *textToSpeechBegin;
@property (nonatomic, retain) SISchemaTextToSpeechEnd *textToSpeechEnd;
@property (nonatomic, retain) SISchemaClientTransportEventMetadata *transportMetadata;
@property (nonatomic, retain) SISchemaUIStateTransition *uiStateTransition;
@property (nonatomic, retain) SISchemaUUFRPresented *uufrPresented;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (Class)getEventTypeClassForTag:(int)arg1;
+ (id)getTagForEventTypeClass:(Class)arg1;

- (void).cxx_destruct;
- (id)audioFirstBufferRecorded;
- (id)audioStopRecording;
- (id)clientConversationTrace;
- (id)clientFlow;
- (id)deviceDynamicContext;
- (id)deviceFixedContext;
- (id)dialogOutput;
- (id)dictationContext;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)invocation;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)location;
- (id)punchOut;
- (bool)readFrom:(id)arg1;
- (void)setAudioFirstBufferRecorded:(id)arg1;
- (void)setAudioStopRecording:(id)arg1;
- (void)setClientConversationTrace:(id)arg1;
- (void)setClientFlow:(id)arg1;
- (void)setDeviceDynamicContext:(id)arg1;
- (void)setDeviceFixedContext:(id)arg1;
- (void)setDialogOutput:(id)arg1;
- (void)setDictationContext:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setEventType:(id)arg1;
- (void)setInvocation:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setPunchOut:(id)arg1;
- (void)setSiriCue:(id)arg1;
- (void)setSpeechTranscription:(id)arg1;
- (void)setTextToSpeechBegin:(id)arg1;
- (void)setTextToSpeechEnd:(id)arg1;
- (void)setTransportMetadata:(id)arg1;
- (void)setUiStateTransition:(id)arg1;
- (void)setUufrPresented:(id)arg1;
- (id)siriCue;
- (id)speechTranscription;
- (id)textToSpeechBegin;
- (id)textToSpeechEnd;
- (id)transportMetadata;
- (id)uiStateTransition;
- (id)uufrPresented;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
