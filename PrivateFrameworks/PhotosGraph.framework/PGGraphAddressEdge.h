/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphAddressEdge : PGGraphEdge

@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } photoCoordinate;
@property (nonatomic, readonly) CLLocation *photoLocation;
@property (nonatomic, readonly) double timestampUTCEnd;
@property (nonatomic, readonly) double timestampUTCStart;
@property (nonatomic, readonly) NSDate *universalEndDate;
@property (nonatomic, readonly) NSDate *universalStartDate;

- (struct CLLocationCoordinate2D { double x1; double x2; })photoCoordinate;
- (id)photoLocation;
- (double)timestampUTCEnd;
- (double)timestampUTCStart;
- (id)universalEndDate;
- (id)universalStartDate;

@end
