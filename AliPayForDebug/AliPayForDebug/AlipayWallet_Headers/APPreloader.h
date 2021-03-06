//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface APPreloader : NSObject
{
    NSMutableDictionary *_dagNodeMap;
    NSMutableArray *_loaders;
}

+ (void)concelPreloadTaskWithBizType:(id)arg1 preloaderType:(unsigned long long)arg2;
+ (id)getPreloadResultWithBizType:(id)arg1 subBizType:(id)arg2 preloaderType:(unsigned long long)arg3;
+ (void)registerPreloadNodeWithBizType:(id)arg1 subBizType:(id)arg2 preloaderType:(unsigned long long)arg3 customPhase:(id)arg4 dependency:(id)arg5 preloaderBlock:(CDUnknownBlockType)arg6;
+ (void)excuteWithType:(unsigned long long)arg1 context:(id)arg2 customPhase:(id)arg3;
+ (void)excuteWithType:(unsigned long long)arg1 context:(id)arg2;
+ (void)excuteWithType:(unsigned long long)arg1;
+ (id)sharedInstance;
+ (id)getPreloadResultWithBizType:(id)arg1 subBizType:(id)arg2 preloaderType:(unsigned long long)arg3;
+ (void)registerPreloadNodeWithBizType:(id)arg1 subBizType:(id)arg2 preloaderType:(unsigned long long)arg3 customPhase:(id)arg4 dependency:(id)arg5 preloaderBlock:(CDUnknownBlockType)arg6;
+ (void)excuteWithType:(unsigned long long)arg1 context:(id)arg2 customPhase:(id)arg3;
+ (void)excuteWithType:(unsigned long long)arg1 context:(id)arg2;
+ (void)excuteWithType:(unsigned long long)arg1;
@property(retain, nonatomic) NSMutableArray *loaders; // @synthesize loaders=_loaders;
@property(retain, nonatomic) NSMutableDictionary *dagNodeMap; // @synthesize dagNodeMap=_dagNodeMap;
- (void).cxx_destruct;
- (void)addWithPreloadSubDagNode:(id)arg1;
- (id)_getPreloadResultWithBizType:(id)arg1 subBizType:(id)arg2 preloaderType:(unsigned long long)arg3;
- (void)_registerPreloadNodeWithBizType:(id)arg1 subBizType:(id)arg2 preloaderType:(unsigned long long)arg3 customPhase:(id)arg4 dependency:(id)arg5 preloaderBlock:(CDUnknownBlockType)arg6;
- (void)_excuteWithType:(unsigned long long)arg1 context:(id)arg2 customPhase:(id)arg3;
- (void)_excuteWithType:(unsigned long long)arg1 context:(id)arg2;
- (id)init;

@end

