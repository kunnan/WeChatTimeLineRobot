/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMObject.h"

@class QMapView, MMAddressAnnotation, NSArray, NSMutableDictionary;

@interface AnnotationLogicController : MMObject {
	NSMutableDictionary* _annotationDic;
	QMapView* _mapView;
	MMAddressAnnotation* _addressAnnotation;
}
@property(readonly, assign, nonatomic) NSArray* allAnnotations;
@property(readonly, assign, nonatomic) NSArray* allUsernames;
-(void).cxx_destruct;
-(id)getClusterUsernamesAroundPoint:(CGPoint)point;
-(XXStruct_Yvvv9D)getConvexRegion:(BOOL)region;
-(void)onlyShowMe;
-(void)removeAllFriendAnnotationCalloutAnimation;
-(void)removeAllHeadAnnotationCalloutAnimation;
-(void)setAllHeadAnnotationShowCallout:(BOOL)callout Animated:(BOOL)animated;
-(void)removeAddressAnnotation;
-(id)getAddressAnnotation;
-(id)addAddressAnnotation:(XXStruct_gLbvpC)annotation Location:(id)location POIName:(id)name;
-(void)removeMyselfAnnotation;
-(id)getMyselfAnnotation;
-(id)addMyselfAnnotationWithHeading:(double)heading;
-(id)getUserLocation;
-(void)removeAllFriendAnnoations;
-(void)removeFriendAnnotationWithUsername:(id)username;
-(id)getFriendAnnotationWithUsername:(id)username;
-(id)addFriendAnnotation:(id)annotation;
-(void)dealloc;
-(id)initWithMapView:(id)mapView;
@end

