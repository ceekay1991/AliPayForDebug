//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface NAMConfigManager : NSObject
{
    NSDictionary *_dicConfig;
    NSDictionary *_dicKey;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)shared;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSDictionary *dicKey; // @synthesize dicKey=_dicKey;
@property(retain, nonatomic) NSDictionary *dicConfig; // @synthesize dicConfig=_dicConfig;
- (void).cxx_destruct;
- (void)save;
- (_Bool)enablePerformanceOpt:(unsigned long long)arg1;
- (_Bool)cacheReqTime;
- (_Bool)callbackInHighPriorityAfterUnzip;
- (_Bool)enableAppPackageSourceLog;
- (_Bool)enableAppInfoSourceLog;
- (_Bool)isPackageDowngradeSwitchOn;
- (_Bool)enableAsyncUnzipWhenLaunchingApps;
- (double)packageDowngradePrepareTimeLimit:(id)arg1;
- (id)currentLanguage;
- (double)prepareTimeLimit:(id)arg1;
- (_Bool)enablePreDownload:(id)arg1;
- (id)resManifestSwitchers;
- (unsigned long long)networkStatus;
- (double)expireTime:(int)arg1 type:(id)arg2;
- (id)valueForKey:(id)arg1 class:(Class)arg2;
- (double)resMainDocInvalidTime;
- (double)limitReqRate;
- (_Bool)enablePreDownloadWith4G:(id)arg1;
- (double)asyncReqRate:(int)arg1;
- (double)forcePreReqRate:(int)arg1;
- (double)preReqRate:(int)arg1;
- (double)updateReqRate;
- (long long)appPoolCapacity;
- (void)updateConfig:(id)arg1;
- (id)initInPrivate;
- (id)init;

@end
