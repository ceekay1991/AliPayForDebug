//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol APConfigService;

@interface AOFConfigCenter : NSObject
{
    id <APConfigService> _apConfigService;
}

+ (id)shareInstance;
@property(retain, nonatomic) id <APConfigService> apConfigService; // @synthesize apConfigService=_apConfigService;
- (void).cxx_destruct;
- (id)filterUploadBlackList;
- (id)life_bizIdDictionary;
- (long long)prehotBizIdInterval;
- (_Bool)enablePrehotBizIdList;
- (long long)bizIdCacheMaxAvailableTime;
- (long long)bizIdCacheAvailableTime;
- (_Bool)enableInsertAppInfoToOPDB:(id)arg1;
- (_Bool)opFavoriteNewRecentMode;
- (long long)recentUsedAppMaxStorageSize;
- (long long)appInfoAvailableCacheTime;
- (long long)reportTimeInterval;
- (_Bool)enableRealtimeReport;
- (id)forceDisableCacheList;
- (id)forceEnableCacheList;
- (long long)refreshInterval;
- (long long)cacheTimeInterval;
- (long long)maxFavoriteSize;
- (_Bool)enableEmergencySwith;
- (_Bool)enablePreInitCache;
- (_Bool)disableCache;
- (_Bool)disableCache4AppId:(id)arg1;
- (id)dictValueForKey:(id)arg1 defaultVal:(id)arg2;
- (id)dictValueForKey:(id)arg1;
- (id)arrayValueForKey:(id)arg1 defaultVal:(id)arg2;
- (id)arrayValueForKey:(id)arg1;
- (long long)longLongValueForKey:(id)arg1 defaultval:(long long)arg2;
- (long long)integerValueForKey:(id)arg1 defaultVal:(long long)arg2;
- (long long)integerValueForKey:(id)arg1;
- (_Bool)boolValueForKey:(id)arg1 defaultVal:(_Bool)arg2;
- (_Bool)boolValueForKey:(id)arg1;
- (id)configForKey:(id)arg1;
- (id)initPrivate;
- (id)init;

@end

