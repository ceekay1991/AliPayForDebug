//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSRecursiveLock, kbhomepageHomePageWrapperResponse;

@interface O2OResponseManager : NSObject
{
    NSDictionary *_blockDict;
    NSDictionary *_categoryBlockDict;
    kbhomepageHomePageWrapperResponse *_lastResponse;
    NSRecursiveLock *_lock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)cacheCategoryMd5Infos:(id)arg1 cityId:(id)arg2;
- (id)categoryMd5InfoList;
- (id)getHomeResonseWithSubResponse:(id)arg1;
- (id)md5s;
- (id)fulfillBlocksByMd5:(id)arg1 page:(unsigned long long)arg2;
- (void)fulfillResponse:(id)arg1;
- (id)init;

@end

