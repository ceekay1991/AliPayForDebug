//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QEngineBaseManager.h"

@interface QEngineSecuManager : QEngineBaseManager
{
}

- (id)dataStore;
- (Class)dataAdapterClass;
- (Class)getBizClass;
- (void)loadAndUpdateSecu:(id)arg1 withObserver:(id)arg2;
- (void)pullSecuInfo:(id)arg1 observer:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)requestList:(id)arg1 strategy:(id)arg2 observer:(id)arg3;

@end
