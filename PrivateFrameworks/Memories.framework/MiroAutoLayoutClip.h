/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAutoLayoutClip : NSObject {
    bool  _canSupportMultiUp;
    bool  _canSupportPrecedingTransition;
    int  _clipType;
    bool  _couldSupportNUpBase;
    int  _directionOfMovement;
    bool  _durationIsFlexible;
    bool  _facesAreClose;
    bool  _isPortrait;
    bool  _isSquare;
    bool  _itemShouldHeroFeaturedPerson;
    MiroAutoEditKenBurnsController * _kbController;
    bool  _missedRollToBeats;
    MultiUpClip * _multiUpClip;
    NSArray * _multiUpPeers;
    int  _numberOfFaces;
    int  _preferredDirection;
    KonaClip * _projectClip;
    MiroAutoLayoutClip * _selectedPeer;
    bool  _supportsHalf;
    bool  _supportsOneThird;
    bool  _supportsTwoThirds;
    bool  _transitionAssigned;
    AltClipCollection * _treatmentInfo;
    bool  _zoomToPersonCandidate;
}

@property (nonatomic) bool canSupportMultiUp;
@property (nonatomic) bool canSupportPrecedingTransition;
@property (nonatomic) int clipType;
@property (nonatomic) bool couldSupportNUpBase;
@property (nonatomic) int directionOfMovement;
@property (nonatomic) bool durationIsFlexible;
@property (nonatomic, readonly) bool facesAreClose;
@property (nonatomic, readonly) bool isPortrait;
@property (nonatomic, readonly) bool isSquare;
@property (nonatomic) bool itemShouldHeroFeaturedPerson;
@property (nonatomic, retain) MiroAutoEditKenBurnsController *kbController;
@property (nonatomic) bool missedRollToBeats;
@property (nonatomic, retain) MultiUpClip *multiUpClip;
@property (nonatomic, retain) NSArray *multiUpPeers;
@property (nonatomic, readonly) int numberOfFaces;
@property (nonatomic) int preferredDirection;
@property (nonatomic, retain) KonaClip *projectClip;
@property (nonatomic, retain) MiroAutoLayoutClip *selectedPeer;
@property (nonatomic) bool supportsHalf;
@property (nonatomic) bool supportsOneThird;
@property (nonatomic) bool supportsTwoThirds;
@property (nonatomic) bool transitionAssigned;
@property (nonatomic, retain) AltClipCollection *treatmentInfo;
@property (nonatomic) bool zoomToPersonCandidate;

+ (double)clipAspectRatio:(id)arg1;
+ (bool)clipIsPano:(id)arg1;
+ (bool)clipIsPortrait:(id)arg1;
+ (bool)clipIsPortraitOrSquare:(id)arg1;
+ (bool)clipIsSquare:(id)arg1;

- (void).cxx_destruct;
- (void)applyAssignedTreatmentsFromRequired;
- (bool)canSupportMultiUp;
- (bool)canSupportPrecedingTransition;
- (bool)clipCanZoomCrop:(id)arg1;
- (int)clipType;
- (bool)couldSupportNUpBase;
- (id)description;
- (int)directionOfMovement;
- (double)distanceToLayoutClip:(id)arg1;
- (bool)durationIsFlexible;
- (void)establishCanSupportPrecedingTransition;
- (void)establishDurationFlexibility;
- (void)establishFaceInfo:(id)arg1;
- (void)establishFacesAreClose;
- (void)establishIsPortrait;
- (void)establishIsSquare;
- (void)establishPreferredDirection;
- (void)establishProjectClipType;
- (int)establishRequiredTreatmentForAspect:(double)arg1 polishDelegate:(id)arg2;
- (bool)facesAreClose;
- (bool)hasMultipleFaces;
- (id)initWithKonaClip:(id)arg1 polishDelegate:(id)arg2 zoomToPersonCandidate:(bool)arg3;
- (bool)isEdited;
- (bool)isEqual:(id)arg1;
- (bool)isFavorite;
- (bool)isPano;
- (bool)isPortrait;
- (bool)isSquare;
- (bool)isTransition;
- (bool)isVideo;
- (bool)itemShouldHeroFeaturedPerson;
- (id)kbController;
- (id)locationForClip;
- (bool)missedRollToBeats;
- (id)multiUpClip;
- (id)multiUpPeers;
- (int)numberOfFaces;
- (int)preferredDirection;
- (id)projectClip;
- (id)selectedPeer;
- (void)setCanSupportMultiUp:(bool)arg1;
- (void)setCanSupportPrecedingTransition:(bool)arg1;
- (void)setClipType:(int)arg1;
- (void)setCouldSupportNUpBase:(bool)arg1;
- (void)setDirectionOfMovement:(int)arg1;
- (void)setDurationIsFlexible:(bool)arg1;
- (void)setItemShouldHeroFeaturedPerson:(bool)arg1;
- (void)setKbController:(id)arg1;
- (void)setMissedRollToBeats:(bool)arg1;
- (void)setMultiUpClip:(id)arg1;
- (void)setMultiUpPeers:(id)arg1;
- (void)setPreferredDirection:(int)arg1;
- (void)setProjectClip:(id)arg1;
- (void)setSelectedPeer:(id)arg1;
- (void)setSupportsHalf:(bool)arg1;
- (void)setSupportsOneThird:(bool)arg1;
- (void)setSupportsTwoThirds:(bool)arg1;
- (void)setTransitionAssigned:(bool)arg1;
- (void)setTreatmentInfo:(id)arg1;
- (void)setZoomToPersonCandidate:(bool)arg1;
- (bool)supportsHalf;
- (bool)supportsOneThird;
- (bool)supportsTwoThirds;
- (bool)transitionAssigned;
- (id)treatmentInfo;
- (bool)zoomToPersonCandidate;

@end