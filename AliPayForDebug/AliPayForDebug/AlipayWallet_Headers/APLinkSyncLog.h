//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APLongLinkLogInterface-Protocol.h"

@class NSString;

@interface APLinkSyncLog : NSObject <APLongLinkLogInterface>
{
}

+ (void)writeLogWithType:(int)arg1 subType:(id)arg2 param1:(id)arg3 param2:(id)arg4 param3:(id)arg5 paramKVMap:(id)arg6;
+ (void)writeSyncNetLogParam1:(id)arg1 param2:(id)arg2 param3:(id)arg3 paramKVMap:(id)arg4;
+ (void)writeFootprintLogParam1:(id)arg1 param2:(id)arg2 param3:(id)arg3 paramKVMap:(id)arg4;
+ (void)setSyncLogLevel:(long long)arg1;
+ (void)setPerUploadNum:(unsigned long long)arg1;
+ (void)MTBIZ_Report:(id)arg1 subName:(id)arg2 failCode:(long long)arg3 params:(id)arg4;
+ (void)writeLocalLogSubType:(id)arg1 extraParams:(id)arg2;
+ (void)logInfoWithApp:(id)arg1 type:(id)arg2 subType:(id)arg3 extraParams:(id)arg4;
+ (void)logInfoWithType:(id)arg1 subType:(id)arg2 extraParams:(id)arg3;
+ (void)writeLogWithType:(int)arg1 subType:(id)arg2 extraParams:(id)arg3;
+ (void)writeLogType:(int)arg1 subType:(id)arg2 extraParams:(id)arg3 paramsFormater:(id)arg4;
+ (void)setLogSyncMsgType:(int)arg1;
+ (void)setLogSyncInfoType:(int)arg1;
- (void)writeMonitorLogParam1:(id)arg1 param2:(id)arg2 param3:(id)arg3 paramKVMap:(id)arg4;
- (void)writeNetworkLogParam1:(id)arg1 param2:(id)arg2 param3:(id)arg3 paramKVMap:(id)arg4;
- (void)MTBIZ_Report:(id)arg1 subName:(id)arg2 failCode:(long long)arg3 params:(id)arg4;
- (void)logWithType:(int)arg1 subType:(id)arg2 extraParams:(id)arg3 paramsFormater:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
