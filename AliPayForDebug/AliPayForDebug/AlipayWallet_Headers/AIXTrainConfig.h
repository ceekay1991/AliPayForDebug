//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AIXTrainConfig : NSObject
{
    _Bool _labelRequired;
    _Bool _suspendable;
    NSString *_taskId;
    NSString *_roundId;
    long long _intervalSleep;
    long long _batchSize;
    long long _trainSteps;
    long long _taskType;
    NSString *_condition;
    long long _positiveSampleRequired;
    long long _negativeSampleRequired;
    long long _coldDown;
    long long _timeValid;
    long long _suspendLimit;
    long long _suspendTimes;
    long long _suspendInterval;
    NSArray *_modelIds;
    long long _sampleRequired;
    long long _timeRequired;
    long long _sampleMinimumLimit;
    long long _sampleMaximumLimit;
    NSString *_cloudId;
    NSString *_trainModelPath;
    NSString *_updateSavePath;
    NSString *_xnnConfig;
    NSString *_sceneCode;
}

@property(retain, nonatomic) NSString *sceneCode; // @synthesize sceneCode=_sceneCode;
@property(retain, nonatomic) NSString *xnnConfig; // @synthesize xnnConfig=_xnnConfig;
@property(retain, nonatomic) NSString *updateSavePath; // @synthesize updateSavePath=_updateSavePath;
@property(retain, nonatomic) NSString *trainModelPath; // @synthesize trainModelPath=_trainModelPath;
@property(retain, nonatomic) NSString *cloudId; // @synthesize cloudId=_cloudId;
@property(nonatomic) long long sampleMaximumLimit; // @synthesize sampleMaximumLimit=_sampleMaximumLimit;
@property(nonatomic) long long sampleMinimumLimit; // @synthesize sampleMinimumLimit=_sampleMinimumLimit;
@property(nonatomic) long long timeRequired; // @synthesize timeRequired=_timeRequired;
@property(nonatomic) long long sampleRequired; // @synthesize sampleRequired=_sampleRequired;
@property(copy, nonatomic) NSArray *modelIds; // @synthesize modelIds=_modelIds;
@property(nonatomic) long long suspendInterval; // @synthesize suspendInterval=_suspendInterval;
@property(nonatomic) long long suspendTimes; // @synthesize suspendTimes=_suspendTimes;
@property(nonatomic) long long suspendLimit; // @synthesize suspendLimit=_suspendLimit;
@property(nonatomic) _Bool suspendable; // @synthesize suspendable=_suspendable;
@property(nonatomic) long long timeValid; // @synthesize timeValid=_timeValid;
@property(nonatomic) long long coldDown; // @synthesize coldDown=_coldDown;
@property(nonatomic) long long negativeSampleRequired; // @synthesize negativeSampleRequired=_negativeSampleRequired;
@property(nonatomic) long long positiveSampleRequired; // @synthesize positiveSampleRequired=_positiveSampleRequired;
@property(copy, nonatomic) NSString *condition; // @synthesize condition=_condition;
@property(nonatomic) long long taskType; // @synthesize taskType=_taskType;
@property(nonatomic) long long trainSteps; // @synthesize trainSteps=_trainSteps;
@property(nonatomic) long long batchSize; // @synthesize batchSize=_batchSize;
@property(nonatomic) long long intervalSleep; // @synthesize intervalSleep=_intervalSleep;
@property(copy, nonatomic) NSString *roundId; // @synthesize roundId=_roundId;
@property(nonatomic) _Bool labelRequired; // @synthesize labelRequired=_labelRequired;
@property(copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;
- (id)generateTrainFilePath:(id)arg1 md5:(id)arg2;
- (id)initWithTrainingPlan:(id)arg1;

@end

