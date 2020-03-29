//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, TNBridgeInternal;

@interface TinyBridge : NSObject
{
    TNBridgeInternal *_bridge;
    _Bool _isJSLoaded;
    CDUnknownBlockType _completionBlock;
    NSMapTable *_rootViews;
}

- (void).cxx_destruct;
- (id)getBridgeInternal;
- (void)didInitializeModule:(id)arg1;
- (void)javaScriptDidFailToLoad:(id)arg1;
- (void)javaScriptDidLoad:(id)arg1;
- (void)javaScriptWillStartLoading:(id)arg1;
- (void)removeNotificationWithBridge:(id)arg1;
- (void)setupNotificationWithBridge:(id)arg1;
- (_Bool)isBridgeLoading;
- (_Bool)isBridgeLoaded;
- (_Bool)isMarkToReload;
- (void)makeBridgeCurrent;
- (id)_rootViewWithPagePath:(id)arg1;
- (id)renderPage:(id)arg1 withInitialProperties:(id)arg2;
- (void)unload;
- (void)reloadWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)loadAppBundleData:(id)arg1 tinyApp:(id)arg2;
- (_Bool)loadBundle:(id)arg1 tinyApp:(id)arg2;
- (void)injectLaunchOptions;
- (id)init;
- (void)dealloc;

@end
