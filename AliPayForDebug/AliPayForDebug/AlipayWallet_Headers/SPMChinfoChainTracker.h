//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPMQueue, SPMStack;
@protocol OS_dispatch_queue;

@interface SPMChinfoChainTracker : NSObject
{
    SPMQueue *_chinfoQueue;
    SPMStack *_pageStack;
    unsigned long long _queueMaxSize;
    unsigned long long _itemMaxLenth;
    unsigned long long _returnItemMaxLength;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_chinfoChain;
    NSString *_filteredChinfoChain;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *filteredChinfoChain; // @synthesize filteredChinfoChain=_filteredChinfoChain;
@property(retain, nonatomic) NSString *chinfoChain; // @synthesize chinfoChain=_chinfoChain;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) unsigned long long returnItemMaxLength; // @synthesize returnItemMaxLength=_returnItemMaxLength;
@property(nonatomic) unsigned long long itemMaxLenth; // @synthesize itemMaxLenth=_itemMaxLenth;
@property(nonatomic) unsigned long long queueMaxSize; // @synthesize queueMaxSize=_queueMaxSize;
@property(retain, nonatomic) SPMStack *pageStack; // @synthesize pageStack=_pageStack;
@property(retain, nonatomic) SPMQueue *chinfoQueue; // @synthesize chinfoQueue=_chinfoQueue;
- (void).cxx_destruct;
- (void)setupChinfoChain;
- (void)contentOverLengthEventLog:(id)arg1 isReturn:(_Bool)arg2;
- (void)doUpdateChinfo:(id)arg1;
- (void)updateChinfo:(id)arg1;
- (id)getFirstChinfo;
- (id)firstChinfo;
- (id)chinfoChainFromQueue:(id)arg1;
- (void)eventLogWithUUID:(id)arg1 chinfoChain:(id)arg2 bizName:(id)arg3 isFilter:(_Bool)arg4;
- (id)chinfoChainUUIDWithBizName:(id)arg1 isFiltter:(_Bool)arg2;
- (id)filteredChinfoChainUUIDWithBizName:(id)arg1;
- (id)chinfoChainUUIDWithBizName:(id)arg1;
- (void)recordChinfo:(id)arg1 pageInfo:(id)arg2 isFromClick:(_Bool)arg3;
- (void)page:(id)arg1;
- (void)click:(id)arg1;
- (void)doOnTabPageSwitch:(id)arg1;
- (void)doOnOldPageBack:(id)arg1;
- (void)doOnNewPageOpen:(id)arg1;
- (void)onTabPageSwitch:(id)arg1;
- (void)onOldPageBack:(id)arg1;
- (void)onNewPageOpen:(id)arg1;
- (id)init;

@end

