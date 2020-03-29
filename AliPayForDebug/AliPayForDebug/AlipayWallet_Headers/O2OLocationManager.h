//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMapPOI, CLLocation, LBSAddressInfo, NSString, O2OLocationCityInfo, O2OLocationXYInfo;

@interface O2OLocationManager : NSObject
{
    NSString *_bizType;
    O2OLocationCityInfo *_selectedCityInfoInternal;
    _Bool _isAuthorized;
    O2OLocationXYInfo *_currentXY;
    LBSAddressInfo *_userLocation;
    AMapPOI *_popEyeSelectedPoi;
    CLLocation *_cacheLocation;
}

+ (long long)userSelectCityExpireTime;
+ (id)intlHistoryCities;
+ (id)natlHistoryCities;
+ (void)saveHistoryCityInfo:(id)arg1 forKey:(id)arg2;
+ (void)saveHistoryCityInfo:(id)arg1;
+ (id)keyForIntlHistory;
+ (id)keyForNatlHistory;
+ (id)defaultManager;
@property(retain, nonatomic) CLLocation *cacheLocation; // @synthesize cacheLocation=_cacheLocation;
@property(retain, nonatomic) AMapPOI *popEyeSelectedPoi; // @synthesize popEyeSelectedPoi=_popEyeSelectedPoi;
@property(retain, nonatomic) LBSAddressInfo *userLocation; // @synthesize userLocation=_userLocation;
@property(retain, nonatomic) O2OLocationXYInfo *currentXY; // @synthesize currentXY=_currentXY;
- (void).cxx_destruct;
- (_Bool)isGuideAlertShowing;
- (_Bool)checkAndTryToShowLocationGuideAlert;
- (id)locationTipBarWithTip:(id)arg1 cannotGoSettingTip:(id)arg2 baseSeed:(id)arg3 view:(id)arg4;
- (void)updateShowGuidLastTime;
- (id)showGuidLastTimeStr;
- (_Bool)canOpenSettingPage;
- (_Bool)openSettingPage;
- (_Bool)isLocationGuideNecessary;
- (void)dealloc;
- (void)cancel;
- (id)keyForSelectedCityInfo;
- (void)saveTempManualCityInfo:(id)arg1;
- (void)saveManualCityInfo:(id)arg1;
- (void)saveSelectedCityInfo:(id)arg1;
- (void)refreshLocationCache:(id)arg1;
- (id)cachedLocation:(id)arg1 expire:(long long)arg2 locationAccuracy:(double)arg3;
- (void)startLocationWithLocatedSuccess:(CDUnknownBlockType)arg1 locatedFail:(CDUnknownBlockType)arg2 reverseSuccessBlock:(CDUnknownBlockType)arg3 paramsBlock:(CDUnknownBlockType)arg4;
- (void)startLocationWithLocatedSuccess:(CDUnknownBlockType)arg1 locatedFail:(CDUnknownBlockType)arg2 reverseSuccessBlock:(CDUnknownBlockType)arg3 timeout:(double)arg4 cacheExpire:(int)arg5 locationAccuracy:(double)arg6 biz:(id)arg7;
- (void)startLocationWithLocatedSuccess:(CDUnknownBlockType)arg1 locatedFail:(CDUnknownBlockType)arg2 reverseSuccessBlock:(CDUnknownBlockType)arg3 timeout:(double)arg4 cacheExpire:(int)arg5 locationAccuracy:(double)arg6;
- (void)startLocationWithLocatedSuccess:(CDUnknownBlockType)arg1 locatedFail:(CDUnknownBlockType)arg2 reverseSuccessBlock:(CDUnknownBlockType)arg3 timeout:(double)arg4 cacheExpire:(int)arg5 biz:(id)arg6;
- (void)startLocationWithLocatedSuccess:(CDUnknownBlockType)arg1 locatedFail:(CDUnknownBlockType)arg2 reverseSuccessBlock:(CDUnknownBlockType)arg3 biz:(id)arg4;
- (double)defaultAccuracy:(_Bool)arg1;
- (int)defaultExpire;
- (double)defaultTimeout:(_Bool)arg1;
- (void)startLocationWithLocatedSuccess:(CDUnknownBlockType)arg1 locatedFail:(CDUnknownBlockType)arg2 reverseSuccessBlock:(CDUnknownBlockType)arg3;
- (void)startLocationWithLocatedSuccess:(CDUnknownBlockType)arg1 locatedFail:(CDUnknownBlockType)arg2 timeout:(double)arg3 cacheExpire:(int)arg4 biz:(id)arg5;
- (void)startLocationWithLocatedSuccess:(CDUnknownBlockType)arg1 locatedFail:(CDUnknownBlockType)arg2 timeout:(double)arg3 cacheExpire:(int)arg4;
- (void)startLocationWithLocatedSuccess:(CDUnknownBlockType)arg1 locatedFail:(CDUnknownBlockType)arg2 biz:(id)arg3;
- (void)startLocationWithLocatedSuccess:(CDUnknownBlockType)arg1 locatedFail:(CDUnknownBlockType)arg2;
- (void)writeReverseSuccessLogWithTimeout:(double)arg1 expire:(long long)arg2 biz:(id)arg3;
- (void)writeLocatingSuccessLogWithTimeout:(double)arg1 expire:(long long)arg2 biz:(id)arg3;
- (void)writeFailLogWithError:(id)arg1 timeout:(double)arg2 expire:(long long)arg3 biz:(id)arg4;
- (void)changeCurrentXY:(id)arg1;
- (void)changeSelectedCityInfo:(id)arg1;
- (void)updateAuthStatus;
- (_Bool)isAuthorized;
- (id)keyForTempManualCity;
- (id)keyForManualCity;
- (void)markSelectedCityInvalid;
- (_Bool)isSelectedCityValid;
- (void)clearCityInfo;
- (id)tempManualCityInfo;
- (id)manualCityInfo;
- (id)selectedCityInfoInternal;
@property(readonly, nonatomic) O2OLocationCityInfo *selectedCityInfo;
- (id)init;

@end
