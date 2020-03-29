//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALULoginContainerController, ALULoginNewcomerViewController, NSNotificationCenter, NSString, NSURL, UINavigationController, UIViewController, aluAppInfo, aluLoginBaseViewController;
@protocol aluLoginDelegate, aluMiscellaneousInfoDelegate, aluUIAppearanceDelegate;

@interface aluSDKInternal : NSObject
{
    _Bool _isTaobaoGateWayUnited;
    int _umidAppkeyIndex;
    int _defaultGateway;
    ALULoginContainerController *_loginContainer;
    ALULoginNewcomerViewController *_newcomerController;
    id <aluLoginDelegate> _loginDelegate;
    id <aluUIAppearanceDelegate> _appearanceDelegate;
    id <aluMiscellaneousInfoDelegate> _miscDelegate;
    NSString *_appID;
    NSString *_appKey;
    aluAppInfo *_appInfo;
    NSString *_ssoKeyChainPrefix;
    NSString *_ssoTtid;
    NSString *_deviceId;
    NSString *_umidAppkey;
    long long _gatewayEnviroment;
    UINavigationController *_navigationController;
    NSURL *_monitorPointUploadUrl;
    NSURL *_taobaoUnitedGatewayUrl;
    NSNotificationCenter *_notificaitonCenter;
    NSURL *_alipayGatway_custom;
    aluLoginBaseViewController *_loginVC;
    UIViewController *_presentingController;
}

+ (id)sharedInstance;
@property(nonatomic) __weak UIViewController *presentingController; // @synthesize presentingController=_presentingController;
@property(retain, nonatomic) aluLoginBaseViewController *loginVC; // @synthesize loginVC=_loginVC;
@property(retain, nonatomic) NSURL *alipayGatway_custom; // @synthesize alipayGatway_custom=_alipayGatway_custom;
@property(retain, nonatomic) NSNotificationCenter *notificaitonCenter; // @synthesize notificaitonCenter=_notificaitonCenter;
@property(retain, nonatomic) NSURL *taobaoUnitedGatewayUrl; // @synthesize taobaoUnitedGatewayUrl=_taobaoUnitedGatewayUrl;
@property(nonatomic) _Bool isTaobaoGateWayUnited; // @synthesize isTaobaoGateWayUnited=_isTaobaoGateWayUnited;
@property(readonly, nonatomic) NSURL *monitorPointUploadUrl; // @synthesize monitorPointUploadUrl=_monitorPointUploadUrl;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) long long gatewayEnviroment; // @synthesize gatewayEnviroment=_gatewayEnviroment;
@property(nonatomic) int defaultGateway; // @synthesize defaultGateway=_defaultGateway;
@property(nonatomic) int umidAppkeyIndex; // @synthesize umidAppkeyIndex=_umidAppkeyIndex;
@property(retain, nonatomic) NSString *umidAppkey; // @synthesize umidAppkey=_umidAppkey;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSString *ssoTtid; // @synthesize ssoTtid=_ssoTtid;
@property(retain, nonatomic) NSString *ssoKeyChainPrefix; // @synthesize ssoKeyChainPrefix=_ssoKeyChainPrefix;
@property(retain, nonatomic) aluAppInfo *appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(nonatomic) __weak id <aluMiscellaneousInfoDelegate> miscDelegate; // @synthesize miscDelegate=_miscDelegate;
@property(nonatomic) __weak id <aluUIAppearanceDelegate> appearanceDelegate; // @synthesize appearanceDelegate=_appearanceDelegate;
@property(nonatomic) __weak id <aluLoginDelegate> loginDelegate; // @synthesize loginDelegate=_loginDelegate;
@property(retain, nonatomic) ALULoginNewcomerViewController *newcomerController; // @synthesize newcomerController=_newcomerController;
@property(retain, nonatomic) ALULoginContainerController *loginContainer; // @synthesize loginContainer=_loginContainer;
- (void).cxx_destruct;
- (void)postAccountDeleteNotification:(id)arg1;
- (void)removeAccountDeleteObserver:(id)arg1;
- (void)addAccountDeleteObserver:(id)arg1 selector:(SEL)arg2;
- (void)removeRegisterObserver:(id)arg1;
- (void)addRegisterObserver:(id)arg1 selector:(SEL)arg2;
- (void)postLoginNotification:(id)arg1;
- (void)removeLoginObserver:(id)arg1;
- (void)addLoginObserver:(id)arg1 selector:(SEL)arg2;
- (void)dismissLoginViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissLoginViewControllerAnimated:(_Bool)arg1;
- (id)passwordLoginAsync:(id)arg1 extraInfo:(id)arg2 loginType:(int)arg3 context:(id)arg4 rootNavController:(CDUnknownBlockType)arg5 loginPagePresented:(CDUnknownBlockType)arg6 callback:(CDUnknownBlockType)arg7;
- (void)openSecurityCenterWithParams:(id)arg1 presentVC:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)mobileNo2ndUseGuideWithResult:(id)arg1 presentVC:(id)arg2 before:(CDUnknownBlockType)arg3 callback:(CDUnknownBlockType)arg4;
- (void)supplyLoginPwdWithScene:(id)arg1 loginId:(id)arg2 presentVC:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)setCustomGateway:(id)arg1;
@property(readonly, nonatomic) NSURL *deviceInfoGateway;
@property(readonly, nonatomic) NSURL *alipayGatway;
- (void)rsaKeyAsync:(CDUnknownBlockType)arg1;
- (id)init;

@end
