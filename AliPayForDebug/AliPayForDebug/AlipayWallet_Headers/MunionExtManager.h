//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface MunionExtManager : NSObject
{
    NSDictionary *_adDataForFlowLimit;
    NSMutableDictionary *_extModelDic;
    NSMutableDictionary *_successBlockDic;
    NSMutableDictionary *_failBlockDic;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *failBlockDic; // @synthesize failBlockDic=_failBlockDic;
@property(retain, nonatomic) NSMutableDictionary *successBlockDic; // @synthesize successBlockDic=_successBlockDic;
@property(retain, nonatomic) NSMutableDictionary *extModelDic; // @synthesize extModelDic=_extModelDic;
@property(retain, nonatomic) NSDictionary *adDataForFlowLimit; // @synthesize adDataForFlowLimit=_adDataForFlowLimit;
- (void).cxx_destruct;
- (_Bool)checkEqualityOfData:(id)arg1 andConfiguration:(id)arg2;
- (void)loadFileCacheForFlowLimit;
- (void)updateAdDataForFlowLimitConfiguration:(id)arg1;
- (void)preloadDataForFlowLimitConfiguration:(id)arg1;
- (id)analiseMemoryDataToCacheData:(id)arg1;
- (void)replaceDataAndSaveToCacheOnGlobalQ:(id)arg1 fileName:(id)arg2;
- (void)replaceCpmCacheAndSave:(id)arg1 namespace:(id)arg2;
- (id)analiseCacheDataToMemoryData:(id)arg1;
- (void)loadFileCacheByName:(id)arg1 adType:(int)arg2;
- (void)loadFileCache:(id)arg1 adType:(int)arg2;
- (id)getExtModelByNameSpace:(id)arg1;
- (void)setUserDic:(id)arg1 namespace:(id)arg2 onSuccessBlock:(CDUnknownBlockType)arg3 onFailBlock:(CDUnknownBlockType)arg4;
- (_Bool)isMunionRequesting;
- (id)resolveCpmData:(id)arg1 useCache:(_Bool)arg2;
- (void)callFailBlock:(id)arg1 namespace:(id)arg2;
- (void)callDelegateAfterGetNewADData:(id)arg1 namespace:(id)arg2 useCache:(_Bool)arg3;
- (void)clearMemDataAndCache:(id)arg1;
- (void)callDelegateAfterGetNewADDataOnMainThread:(id)arg1 namespace:(id)arg2 useCache:(_Bool)arg3;
- (void)sendCpmRequest:(long long)arg1 namespace:(id)arg2 userDic:(id)arg3;
- (id)getCpmUserDic:(id)arg1 pids:(id)arg2;
- (_Bool)isPidsModifyed:(id)arg1 namespace:(id)arg2;
- (long long)getCpmForceTrigerType:(id)arg1 pids:(id)arg2;
- (long long)getForceTrigerType:(int)arg1 namespace:(id)arg2 pids:(id)arg3;
- (void)triggerMuionRequestByAdType:(int)arg1 namespace:(id)arg2 pids:(id)arg3 userDic:(id)arg4 requestType:(long long)arg5;
- (void)triggerMuionRequestByAdType:(int)arg1 namespace:(id)arg2 pids:(id)arg3;
- (id)getMunionDataByAdType:(int)arg1 namespace:(id)arg2;
- (void)munionCpmInitRequest:(id)arg1 pids:(id)arg2 userDic:(id)arg3;
- (void)munionInitRequest:(int)arg1 namespace:(id)arg2 pids:(id)arg3 userDic:(id)arg4;
- (void)setAsyncMuionParm:(id)arg1 adType:(int)arg2 namespace:(id)arg3 pids:(id)arg4 userDic:(id)arg5 onSuccessBlock:(CDUnknownBlockType)arg6 onFailBlock:(CDUnknownBlockType)arg7;
- (void)loadFlowLimitConfiguration;
- (void)updateMunionSDKVersion;
- (id)init;

@end

