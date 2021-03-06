/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@interface CALNTriggeredEventNotificationInfo : NSObject {
    bool  _allowsLocationAlerts;
    NSURL * _conferenceURL;
    NSDate * _endDate;
    bool  _eventHasAlarms;
    NSString * _eventID;
    NSString * _eventObjectID;
    NSDictionary * _eventRepresentationDictionary;
    bool  _forceDisplayOfNewTravelAdvisoryHypotheses;
    bool  _hasSuggestedLocation;
    bool  _isAllDay;
    NSString * _legacyIdentifier;
    NSString * _location;
    NSString * _locationWithoutPrediction;
    NSURL * _mailtoURL;
    EKStructuredLocation * _preferredLocation;
    NSDate * _startDate;
    NSString * _title;
}

@property (nonatomic, readonly) bool allowsLocationAlerts;
@property (nonatomic, readonly, copy) NSURL *conferenceURL;
@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly) bool eventHasAlarms;
@property (nonatomic, readonly, copy) NSString *eventID;
@property (nonatomic, readonly, copy) NSString *eventObjectID;
@property (nonatomic, readonly, copy) NSDictionary *eventRepresentationDictionary;
@property (nonatomic, readonly) bool forceDisplayOfNewTravelAdvisoryHypotheses;
@property (nonatomic, readonly) bool hasSuggestedLocation;
@property (nonatomic, readonly) bool isAllDay;
@property (nonatomic, readonly, copy) NSString *legacyIdentifier;
@property (nonatomic, readonly, copy) NSString *location;
@property (nonatomic, readonly, copy) NSString *locationWithoutPrediction;
@property (nonatomic, readonly, copy) NSURL *mailtoURL;
@property (nonatomic, readonly) EKStructuredLocation *preferredLocation;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (bool)allowsLocationAlerts;
- (id)conferenceURL;
- (id)description;
- (id)endDate;
- (bool)eventHasAlarms;
- (id)eventID;
- (id)eventObjectID;
- (id)eventRepresentationDictionary;
- (bool)forceDisplayOfNewTravelAdvisoryHypotheses;
- (bool)hasSuggestedLocation;
- (id)initWithTitle:(id)arg1 location:(id)arg2 locationWithoutPrediction:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 isAllDay:(bool)arg6 eventID:(id)arg7 eventObjectID:(id)arg8 eventRepresentationDictionary:(id)arg9 legacyIdentifier:(id)arg10 preferredLocation:(id)arg11 conferenceURL:(id)arg12 mailtoURL:(id)arg13 hasSuggestedLocation:(bool)arg14 eventHasAlarms:(bool)arg15 allowsLocationAlerts:(bool)arg16 forceDisplayOfNewTravelAdvisoryHypotheses:(bool)arg17;
- (bool)isAllDay;
- (id)legacyIdentifier;
- (id)location;
- (id)locationWithoutPrediction;
- (id)mailtoURL;
- (id)preferredLocation;
- (id)startDate;
- (id)title;

@end
