//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MAMapView, NSArray, UIColor;

@interface RVMANaviRoute : NSObject
{
    _Bool _anntationVisible;
    _Bool _hasUpBus;
    NSArray *_routePolylines;
    NSArray *_naviAnnotations;
    UIColor *_routeColor;
    UIColor *_walkingColor;
    UIColor *_railwayColor;
    NSArray *_multiPolylineColors;
    MAMapView *_mapView;
    NSArray *_trafficColors;
}

+ (id)naviRouteForPolylines:(id)arg1 andAnnotations:(id)arg2;
+ (id)naviRouteForPath:(id)arg1 withNaviType:(long long)arg2 showTraffic:(_Bool)arg3 startPoint:(id)arg4 endPoint:(id)arg5;
+ (id)naviRouteForTransit:(id)arg1 startPoint:(id)arg2 endPoint:(id)arg3;
+ (struct CLLocationCoordinate2D)coordinateWithString:(id)arg1;
+ (id)coordinateArrayWithPolylineString:(id)arg1;
+ (double)calcDistanceBetweenCoor:(struct CLLocationCoordinate2D)arg1 andCoor:(struct CLLocationCoordinate2D)arg2;
+ (id)calcPointWithStartPoint:(id)arg1 endPoint:(id)arg2 rate:(double)arg3;
+ (id)colorWithTrafficStatus:(id)arg1;
+ (id)multiColoredPolylineWithDrivePath:(id)arg1 polylineColors:(id *)arg2;
+ (id)replenishPolylineWithStart:(struct CLLocationCoordinate2D)arg1 end:(struct CLLocationCoordinate2D)arg2;
+ (void)replenishPolylinesForPathWith:(id)arg1 lastPolyline:(id)arg2 Polylines:(id)arg3;
+ (void)replenishPolylinesForTransit:(id)arg1 CurrentSegment:(id)arg2 Polylines:(id)arg3;
+ (void)replenishPolylinesForSegment:(id)arg1 busLinePolyline:(id)arg2 Segment:(id)arg3 polylines:(id)arg4;
+ (void)replenishPolylinesForWalkingWith:(id)arg1 LastPolyline:(id)arg2 Polylines:(id)arg3 Walking:(id)arg4;
+ (void)replenishPolylinesForStartPoint:(id)arg1 endPoint:(id)arg2 Polylines:(id)arg3;
+ (id)polylineForBusLine:(id)arg1;
+ (id)polylineForStep:(id)arg1;
+ (id)naviRouteForSegment:(id)arg1;
+ (id)naviRouteForWalking:(id)arg1;
+ (id)naviRouteForTaxi:(id)arg1;
+ (id)naviRouteForRailway:(id)arg1;
+ (id)naviCalloutWithBusLine:(id)arg1;
@property(nonatomic) _Bool hasUpBus; // @synthesize hasUpBus=_hasUpBus;
@property(retain, nonatomic) NSArray *trafficColors; // @synthesize trafficColors=_trafficColors;
@property(nonatomic) __weak MAMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) NSArray *multiPolylineColors; // @synthesize multiPolylineColors=_multiPolylineColors;
@property(retain, nonatomic) UIColor *railwayColor; // @synthesize railwayColor=_railwayColor;
@property(retain, nonatomic) UIColor *walkingColor; // @synthesize walkingColor=_walkingColor;
@property(retain, nonatomic) UIColor *routeColor; // @synthesize routeColor=_routeColor;
@property(retain, nonatomic) NSArray *naviAnnotations; // @synthesize naviAnnotations=_naviAnnotations;
@property(retain, nonatomic) NSArray *routePolylines; // @synthesize routePolylines=_routePolylines;
@property(nonatomic) _Bool anntationVisible; // @synthesize anntationVisible=_anntationVisible;
- (void).cxx_destruct;
- (id)init;
- (id)initWithPath:(id)arg1 withNaviType:(long long)arg2 showTraffic:(_Bool)arg3 startPoint:(id)arg4 endPoint:(id)arg5;
- (id)initWithTransit:(id)arg1 startPoint:(id)arg2 endPoint:(id)arg3;
- (id)initWithPolylines:(id)arg1 andAnnotations:(id)arg2;
- (void)setNaviAnnotationVisibility:(_Bool)arg1;
- (void)removeFromMapView;
- (void)addToMapView:(id)arg1 routeLevel:(long long)arg2;

@end
