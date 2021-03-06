//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter;

@interface IDStrategyLogUtil : NSObject
{
    NSDateFormatter *_formatter;
}

+ (id)defaultLogUtil;
@property(retain, nonatomic) NSDateFormatter *formatter; // @synthesize formatter=_formatter;
- (void).cxx_destruct;
- (void)uploadLocalLogWithPath:(id)arg1;
- (void)checkAndUploadLocalLogs;
- (void)uploadLog:(id)arg1;
- (id)formattedLogContent:(id)arg1;
- (id)logStringForCaseId:(id)arg1 extParams:(id)arg2;
- (id)appendEndSymbolForLogBuffer:(id)arg1;
- (id)getLogHeaderWithBizID:(id)arg1 strategyName:(id)arg2 version:(long long)arg3;
- (id)getLocalLogFilePath;
- (id)getNetWorkType;
- (id)getStrategyLogEnvdataWithBizId:(id)arg1 strategyName:(id)arg2 version:(long long)arg3;
- (id)init;

@end

