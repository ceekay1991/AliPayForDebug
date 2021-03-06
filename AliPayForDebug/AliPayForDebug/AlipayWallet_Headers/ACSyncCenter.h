//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SyncDownCallback-Protocol.h"

@class NSString;

@interface ACSyncCenter : NSObject <SyncDownCallback>
{
}

+ (id)shared;
- (_Bool)hasLoain;
- (void)logSyncInfoError:(id)arg1;
- (_Bool)isTimeValid:(id)arg1;
- (void)processSyncTinyAppForce:(id)arg1;
- (void)processSyncTinyAppInfo:(id)arg1;
- (void)processSyncNotifyRpcApp:(id)arg1;
- (void)processSyncNotifyRpcStage:(id)arg1;
- (void)processSyncAppInfo:(id)arg1;
- (void)processSyncStageConfig:(id)arg1;
- (void)processNotification:(id)arg1;
- (long long)syncInfoType:(id)arg1;
- (void)onReceiveMessageNotification:(id)arg1;
- (void)handleAppSyncTypeUserNotification:(id)arg1;
- (void)handleAppSyncTypeGlobalNotification:(id)arg1;
- (void)registerAppSyncInfo;
- (void)dealloc;
- (id)initInPrivate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

