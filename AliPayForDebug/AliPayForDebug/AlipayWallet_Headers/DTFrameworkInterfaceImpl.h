//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTFrameworkInterface.h"

@class DTBootLoaderImpl, UIWindow;

@interface DTFrameworkInterfaceImpl : DTFrameworkInterface
{
    DTBootLoaderImpl *_bootLoader;
    long long _spProcessPhase;
    UIWindow *_splashScreenWindow;
}

@property(retain, nonatomic) UIWindow *splashScreenWindow; // @synthesize splashScreenWindow=_splashScreenWindow;
@property(nonatomic) long long spProcessPhase; // @synthesize spProcessPhase=_spProcessPhase;
- (void).cxx_destruct;
- (void)privacyAuthHasDissmised;
- (void)logInterceptorForPrivacyAuth;
- (void)logAntEventById:(id)arg1 param:(id)arg2;
- (void)reportSnapshotWithBiz:(id)arg1;
- (void)updateProductInfo:(id)arg1;
- (id)productTypeStirng;
- (id)productName;
- (id)productId;
- (void)makeThreadPoolSuspend:(_Bool)arg1;
- (_Bool)checkRegionChange:(id)arg1 appId:(id)arg2;
- (void)checkDowngradeApp;
- (void)cleanAllData;
- (_Bool)isUseSplashScreenForSafePay;
- (_Bool)isPreloadURLSessionEnabled;
- (void)preloadURLSession;
- (_Bool)isPreloadUIFontEnabled;
- (void)preloadUIFont;
- (void)preloadFullLinkConfig;
- (_Bool)isPreloadBadgeServiceEnabled;
- (void)preloadBadgeService;
- (void)initAntUI;
- (id)configForKey:(id)arg1;
- (void)willHandleVoIPNotification;
- (long long)appVersionCompare:(id)arg1 version:(id)arg2 number:(long long)arg3;
- (void)checkInstallationStatus;
- (long long)handleOpenURL:(id)arg1 newURL:(id *)arg2 convertForRC:(_Bool *)arg3;
- (void)onSafePayFinished;
- (_Bool)handleSafePayScheme:(id)arg1;
- (_Bool)isSafePayScheme:(id)arg1;
- (_Bool)checkSkipLauncherScheme:(id)arg1;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (long long)applicationDidEnterBackground:(id)arg1;
- (long long)applicationWillEnterForeground:(id)arg1;
- (long long)applicationWillTerminate:(id)arg1;
- (long long)applicationDidBecomeActive:(id)arg1;
- (long long)application:(id)arg1 openURL:(id)arg2 newURL:(id *)arg3 sourceApplication:(id)arg4 annotation:(id)arg5;
- (long long)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)logErrorWhenInterceptedWithParams:(id)arg1;
- (id)application:(id)arg1 serviceWillHandleURL:(id)arg2 sourceApplication:(id)arg3 isUniversalLink:(_Bool)arg4;
- (void)application:(id)arg1 handleRegionChangeWithOptions:(id)arg2;
- (void)fixHMFoundationReplace;
- (void)application:(id)arg1 afterDidFinishLaunchingWithOptions:(id)arg2;
- (long long)application:(id)arg1 handleDidFinishLaunchingWithOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (long long)application:(id)arg1 handleDidFinishLaunchingWithOptions:(id)arg2;
- (void)application:(id)arg1 beforeDidFinishLaunchingWithOptions:(id)arg2;
- (void)doDismiss;
- (void)splashScreenDidDismiss;
- (void)notifySplashScreenDismiss;
- (id)navigationBarLoadingViewClass;
- (id)defaultBackgroundColor;
- (_Bool)shouldAutoconvertSchemesForRCVersion:(id *)arg1;
- (_Bool)suspendLazyloadBandages;
- (_Bool)shouldLogStartupConsumption;
- (_Bool)shouldLogReportActive;
- (id)domainHandlerClasses;
- (id)schemeHandlerClasses;
- (id)servicesAllRegionConfiguration;
- (id)servicesAllConfiguration;
- (id)servicesMapConfiguration;
- (id)servicesConfiguration;
- (id)dylibConfiguration;
- (id)applicationsConfiguration;
- (_Bool)isRCVersion;
- (id)bootLoader;
- (id)init;
- (void)dealloc;

@end
