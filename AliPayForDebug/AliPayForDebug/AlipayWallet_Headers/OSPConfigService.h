//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTRpcAsyncCaller, NSDictionary, NSString;

@interface OSPConfigService : NSObject
{
    _Bool _isReceivedLoginEvent;
    NSString *_preChannelPromoDesc;
    DTRpcAsyncCaller *_switchPBCaller;
    DTRpcAsyncCaller *_channelPBCaller;
    DTRpcAsyncCaller *_changeChannelCaller;
    NSDictionary *_configInfo;
}

+ (_Bool)hasBus;
+ (void)syncBusCodeOpenStatus:(_Bool)arg1;
+ (id)userConfig;
+ (id)encodeConfigPB:(id)arg1 userId:(id)arg2;
+ (id)encodeChannelConfigPB:(id)arg1 userId:(id)arg2;
+ (id)getConfigString:(id)arg1;
+ (void)saveUserConfig:(id)arg1 config:(id)arg2;
+ (id)readUserConfigByUserId:(id)arg1;
+ (void)runInGlobalQueue:(CDUnknownBlockType)arg1;
+ (id)userId;
@property(retain, nonatomic) NSDictionary *configInfo; // @synthesize configInfo=_configInfo;
@property(retain, nonatomic) DTRpcAsyncCaller *changeChannelCaller; // @synthesize changeChannelCaller=_changeChannelCaller;
@property(retain, nonatomic) DTRpcAsyncCaller *channelPBCaller; // @synthesize channelPBCaller=_channelPBCaller;
@property(retain, nonatomic) DTRpcAsyncCaller *switchPBCaller; // @synthesize switchPBCaller=_switchPBCaller;
@property(copy, nonatomic) NSString *preChannelPromoDesc; // @synthesize preChannelPromoDesc=_preChannelPromoDesc;
@property(nonatomic) _Bool isReceivedLoginEvent; // @synthesize isReceivedLoginEvent=_isReceivedLoginEvent;
- (void).cxx_destruct;
- (void)changeChannelPriority:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)modifyPopChannelSwitch:(_Bool)arg1;
- (void)modifyBusSwitch:(id)arg1;
- (id)getUserConfig;
- (void)handleExtInfo:(id)arg1;
- (void)querySwitchPB;
- (void)queryOspPayChannelPB:(CDUnknownBlockType)arg1;
- (void)forceInsertUserConfigToMemory:(id)arg1 config:(id)arg2;
- (void)insertUserConfigToMemory:(id)arg1 config:(id)arg2;
- (void)removeUserConfig;
- (void)loadIfNotExistedUserConfig;
- (void)loadUserConfig;
- (id)init;

@end

