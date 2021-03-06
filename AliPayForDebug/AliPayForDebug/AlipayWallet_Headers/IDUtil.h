//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDUtil : NSObject
{
}

+ (id)getDataForKey:(id)arg1;
+ (_Bool)saveValue:(id)arg1 forKey:(id)arg2;
+ (_Bool)isNum:(id)arg1;
+ (id)transferObjToStr:(id)arg1;
+ (_Bool)isArrayEmpty:(id)arg1;
+ (id)currentPreferences;
+ (id)getCurrentUserId;
+ (id)getRefreshConfigTime;
+ (_Bool)saveRefreshConfigTime;
+ (id)getPredictResultDataForKey:(id)arg1;
+ (_Bool)savePredictResultData:(id)arg1 forKey:(id)arg2;
+ (_Bool)saveStrategyVersion:(long long)arg1;
+ (_Bool)savePredictVersion:(long long)arg1;
+ (_Bool)saveExtractVersion:(long long)arg1;
+ (long long)getStrategyVersion;
+ (long long)getPredictVersion;
+ (long long)getExtractVersion;
+ (_Bool)saveStrategyEnable:(_Bool)arg1;
+ (_Bool)savePredictEnable:(_Bool)arg1;
+ (_Bool)saveExtractEnable:(_Bool)arg1;
+ (_Bool)getStrategyEnable;
+ (_Bool)getPredictEnable;
+ (_Bool)getExtractEnable;
+ (id)getPredictConfigData;
+ (id)getExtractConfigData;
+ (id)getStrategyConfigData;
+ (_Bool)savePredictConfigData:(id)arg1;
+ (_Bool)saveExtractConfigData:(id)arg1;
+ (_Bool)saveStrategyConfigData:(id)arg1;
+ (id)deviceType;
+ (_Bool)isJailbreak;
+ (id)strategyModelFromCacheAndDiskWithContext:(id)arg1;
+ (void)saveFeatureResultWithResult:(id)arg1 forId:(id)arg2 toContext:(id)arg3;
+ (id)featureResultForId:(id)arg1 fromContext:(id)arg2;
+ (id)extrasFromContext:(id)arg1;
+ (id)bizIdFromContext:(id)arg1;
+ (id)strategyNameFromContext:(id)arg1;
+ (_Bool)isTryMode:(id)arg1;
+ (_Bool)isShadowTask:(id)arg1;

@end

