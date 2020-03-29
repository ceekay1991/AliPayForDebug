//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DTLongLinkBusiness : NSObject
{
}

+ (_Bool)unRegisterCallbackWithBizInner:(id)arg1 appName:(id)arg2;
+ (_Bool)unRegisterCallbackWithBiz:(id)arg1 appName:(id)arg2;
+ (long long)registerBizCallbackInner:(id)arg1 biz:(id)arg2 appName:(id)arg3;
+ (long long)registerBizCallback:(id)arg1 biz:(id)arg2 appName:(id)arg3;
+ (void)reportBizRequestWithBiz:(id)arg1 key:(id)arg2 version:(id)arg3 timestamp:(long long)arg4 appName:(id)arg5;
+ (void)reportBizRequestWithBiz:(id)arg1 key:(id)arg2 version:(id)arg3 timestamp:(long long)arg4;
+ (void)cancelSendSyncMsg:(id)arg1;
+ (id)sendSyncMsg:(id)arg1 needCallback:(_Bool)arg2;
+ (_Bool)registerSendBiz:(id)arg1 callback:(id)arg2 appName:(id)arg3;
+ (_Bool)registerSendBiz:(id)arg1 callback:(id)arg2;
+ (id)sendSyncMsgNeedCallback:(id)arg1;
+ (id)sendSyncMsg:(id)arg1;
+ (_Bool)unRegisterNotificationWithBizInner:(id)arg1;
+ (_Bool)unRegisterNotificationWithBiz:(id)arg1;
+ (_Bool)hasRegisterNotificationWithBizInner:(id)arg1;
+ (_Bool)hasRegisterNotificationWithBiz:(id)arg1;
+ (long long)connectStatus;
+ (_Bool)isSyncAvailable;
+ (long long)querySyncNetType:(id)arg1;
+ (id)getBizSkey:(id)arg1;
+ (void)refreshSkey:(id)arg1 sKey:(id)arg2;
+ (void)totalRefreshBiz:(id)arg1;
+ (void)reportMsgHandled:(id)arg1;
+ (void)responseMessageNotify:(id)arg1;
+ (void)unRegisterBizStopSync:(id)arg1;
+ (void)registerBizAndSync:(id)arg1 syncBizType:(long long)arg2;
+ (void)registerBizAndSync:(id)arg1;
+ (void)registerBiz:(id)arg1;
+ (void)sendMessage:(id)arg1 biz:(id)arg2;
+ (id)longLinkNotifyUserInfoKey;
+ (id)longLinkNotifyWithAppId:(id)arg1;

@end
