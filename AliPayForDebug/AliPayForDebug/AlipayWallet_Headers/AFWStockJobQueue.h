//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface AFWStockJobQueue : NSObject
{
    _Bool _isActive;
    NSString *_scheduleKey;
    long long _timeInterval;
    long long _timeBeforeNextExcution;
    NSMutableDictionary *_jobDic;
    long long _excutionTime;
    NSMutableDictionary *_jobExcutionStateDic;
}

@property(retain, nonatomic) NSMutableDictionary *jobExcutionStateDic; // @synthesize jobExcutionStateDic=_jobExcutionStateDic;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) long long excutionTime; // @synthesize excutionTime=_excutionTime;
@property(retain, nonatomic) NSMutableDictionary *jobDic; // @synthesize jobDic=_jobDic;
@property(nonatomic) long long timeBeforeNextExcution; // @synthesize timeBeforeNextExcution=_timeBeforeNextExcution;
@property(nonatomic) long long timeInterval; // @synthesize timeInterval=_timeInterval;
@property(retain, nonatomic) NSString *scheduleKey; // @synthesize scheduleKey=_scheduleKey;
- (void).cxx_destruct;
- (_Bool)hasJobNamed:(id)arg1;
- (long long)jobCount;
- (void)activeQueue;
- (void)excuteJobs;
- (void)updateTime:(long long)arg1;
- (void)addJob:(CDUnknownBlockType)arg1 withName:(id)arg2;
- (id)initWithKey:(id)arg1 timeInterval:(long long)arg2;
- (id)getJobQueue;

@end
