//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AlipayLifeLocateObjectDelegate-Protocol.h"

@class AlipayLifeLocateObject, NSDate, NSMutableArray, NSString;

@interface AlipayLifeLocateManager : NSObject <AlipayLifeLocateObjectDelegate>
{
    NSMutableArray *_completions;
    AlipayLifeLocateObject *_aplLocateObject;
    NSString *_lastCityName;
    NSString *_lastCityCode;
    NSDate *_timestamp;
    NSString *_manCityName;
    NSString *_manCityCode;
}

@property(retain, nonatomic) NSString *manCityCode; // @synthesize manCityCode=_manCityCode;
@property(retain, nonatomic) NSString *manCityName; // @synthesize manCityName=_manCityName;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *lastCityCode; // @synthesize lastCityCode=_lastCityCode;
@property(retain, nonatomic) NSString *lastCityName; // @synthesize lastCityName=_lastCityName;
- (void).cxx_destruct;
- (void)handleLocationStatus:(unsigned long long)arg1 location:(id)arg2 cityName:(id)arg3 cityCode:(id)arg4 chineseMainLand:(_Bool)arg5 toast:(id)arg6;
- (void)requestUserBlock:(id)arg1 cityName:(id)arg2 cityCode:(id)arg3 chineseMainLand:(_Bool)arg4;
- (void)handleLocationData:(id)arg1 cityName:(id)arg2 cityCode:(id)arg3 chineseMainLand:(_Bool)arg4;
- (void)finishGeocode:(_Bool)arg1 location:(id)arg2 addressInfo:(id)arg3 error:(id)arg4;
- (void)startLocationRequest:(CDUnknownBlockType)arg1;
- (void)setLocateCityName:(id)arg1 cityCode:(id)arg2;
- (void)setSelectCityName:(id)arg1 cityCode:(id)arg2;
- (void)saveLocalData;
- (void)loadLocalData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

