//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QEngineBaseManager.h"

@interface QEngineDealRequestManager : QEngineBaseManager
{
}

- (id)dataStore;
- (Class)dataAdapterClass;
- (id)saveAndFilter:(id)arg1 withCodes:(id)arg2;
- (Class)getBizClass;
- (void)pullDealRequest:(id)arg1 observer:(id)arg2 repeat:(_Bool)arg3 finishBlock:(CDUnknownBlockType)arg4;
- (void)loadAndUpdateDealRequest:(id)arg1 needSync:(_Bool)arg2 withObserver:(id)arg3;
- (void)requestList:(id)arg1 strategy:(id)arg2 observer:(id)arg3;
- (void)requestData:(id)arg1 strategy:(id)arg2 observer:(id)arg3;

@end

