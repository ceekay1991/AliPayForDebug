//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APBinAOPPrivacySampleBean, NSDictionary, NSMutableDictionary;

@interface APBinAOPPrivacyStatistics : NSObject
{
    NSMutableDictionary *_reportCacheDic;
    double _appLastEnterBgTime;
    double _lastReportTime;
    unsigned long long _hasReportNum;
    int _lock;
    long long _timeToReport;
    long long _numToReport;
    unsigned long long _totalNumToReport;
    APBinAOPPrivacySampleBean *_globalSampleBean;
    NSDictionary *_specifiedSampleBeanDic;
}

- (void).cxx_destruct;
- (id)sampleBeanForProxyName:(id)arg1;
- (void)_doReport:(id)arg1;
- (void)reportIfNeeded;
- (void)enterFg;
- (void)enterBg;
- (void)dealloc;
- (void)configReportRate;
- (id)init;

@end
