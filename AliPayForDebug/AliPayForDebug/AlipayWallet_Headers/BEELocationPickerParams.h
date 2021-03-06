//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMapPOI, BEECLLocationObject, NSString;

@interface BEELocationPickerParams : NSObject
{
    _Bool _isChinese;
    _Bool _needReversingGeo;
    _Bool _showTelephoneIcon;
    _Bool _showMapIcon;
    _Bool _showDistanceInfo;
    _Bool _isShowConfirmSelectBtn;
    _Bool _fullMap;
    _Bool _hideSearch;
    _Bool _showTips;
    long long _locationStyle;
    BEECLLocationObject *_locationOBJ;
    AMapPOI *_locatedPOI;
    AMapPOI *_lastSelectedPOI;
    NSString *_cityName;
    NSString *_keywords;
    long long _showPOIItem;
    NSString *_business;
    NSString *_placeHolder;
    NSString *_poiSearchType;
    NSString *_source_appid;
    NSString *_referer_url;
    double _scale;
    NSString *_markerTitle;
    struct CLLocationCoordinate2D _customInitCoordinate;
    struct CGSize _snapShotSize;
}

@property(nonatomic) _Bool showTips; // @synthesize showTips=_showTips;
@property(nonatomic) _Bool hideSearch; // @synthesize hideSearch=_hideSearch;
@property(nonatomic) _Bool fullMap; // @synthesize fullMap=_fullMap;
@property(copy, nonatomic) NSString *markerTitle; // @synthesize markerTitle=_markerTitle;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSString *referer_url; // @synthesize referer_url=_referer_url;
@property(retain, nonatomic) NSString *source_appid; // @synthesize source_appid=_source_appid;
@property(nonatomic) _Bool isShowConfirmSelectBtn; // @synthesize isShowConfirmSelectBtn=_isShowConfirmSelectBtn;
@property(retain, nonatomic) NSString *poiSearchType; // @synthesize poiSearchType=_poiSearchType;
@property(nonatomic) _Bool showDistanceInfo; // @synthesize showDistanceInfo=_showDistanceInfo;
@property(nonatomic) _Bool showMapIcon; // @synthesize showMapIcon=_showMapIcon;
@property(nonatomic) _Bool showTelephoneIcon; // @synthesize showTelephoneIcon=_showTelephoneIcon;
@property(nonatomic) struct CGSize snapShotSize; // @synthesize snapShotSize=_snapShotSize;
@property(nonatomic) struct CLLocationCoordinate2D customInitCoordinate; // @synthesize customInitCoordinate=_customInitCoordinate;
@property(retain, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(nonatomic) _Bool needReversingGeo; // @synthesize needReversingGeo=_needReversingGeo;
@property(retain, nonatomic) NSString *business; // @synthesize business=_business;
@property(nonatomic) long long showPOIItem; // @synthesize showPOIItem=_showPOIItem;
@property(nonatomic) _Bool isChinese; // @synthesize isChinese=_isChinese;
@property(retain, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain, nonatomic) AMapPOI *lastSelectedPOI; // @synthesize lastSelectedPOI=_lastSelectedPOI;
@property(retain, nonatomic) AMapPOI *locatedPOI; // @synthesize locatedPOI=_locatedPOI;
@property(retain, nonatomic) BEECLLocationObject *locationOBJ; // @synthesize locationOBJ=_locationOBJ;
@property(nonatomic) long long locationStyle; // @synthesize locationStyle=_locationStyle;
- (void).cxx_destruct;

@end

