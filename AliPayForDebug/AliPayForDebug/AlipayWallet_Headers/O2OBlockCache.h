//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface O2OBlockCache : NSObject
{
}

+ (id)sharedInstance;
- (id)cacheKeyForId:(id)arg1 cityId:(id)arg2;
- (id)cacheForId:(id)arg1 cityId:(id)arg2;
- (void)removeCacheForId:(id)arg1 cityId:(id)arg2;
- (void)saveCache:(id)arg1 blockTemplates:(id)arg2 forId:(id)arg3 cityId:(id)arg4;
- (void)fulfillCategoryResponse:(id)arg1 cityId:(id)arg2;
- (void)fulfillResponse:(id)arg1 withDynamicResponse:(id)arg2;
- (void)saveCaches:(id)arg1 blockTemplates:(id)arg2 forCityId:(id)arg3;
- (void)fulfillResponse:(id)arg1;

@end
