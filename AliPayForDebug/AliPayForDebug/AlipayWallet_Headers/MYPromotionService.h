//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MYPromotionViewControllerDelegate-Protocol.h"

@class MYPromotionUnfoundClassClub, NSMutableDictionary, NSString;

@interface MYPromotionService : NSObject <MYPromotionViewControllerDelegate>
{
    NSMutableDictionary *_promotionVCForTypeDic;
    MYPromotionUnfoundClassClub *_unfoundClassClub;
    NSMutableDictionary *_webviewCache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *webviewCache; // @synthesize webviewCache=_webviewCache;
@property(retain, nonatomic) MYPromotionUnfoundClassClub *unfoundClassClub; // @synthesize unfoundClassClub=_unfoundClassClub;
@property(retain, nonatomic) NSMutableDictionary *promotionVCForTypeDic; // @synthesize promotionVCForTypeDic=_promotionVCForTypeDic;
- (void).cxx_destruct;
- (_Bool)cacheDisplayedWebview;
- (double)webviewCacheTime;
- (id)webviewCachePages;
- (_Bool)enableWebViewCache;
- (id)webviewCacheConfig;
- (void)removeWebviewCacheForKey:(id)arg1;
- (void)updateWebviewCacheWithKey:(id)arg1 value:(id)arg2;
- (id)promotionViewControllerForConfigModel:(id)arg1;
- (void)registerType:(id)arg1 promotionViewControllerName:(id)arg2;
- (void)promotionFeedback:(id)arg1;
- (void)promotionControllerWillHide:(id)arg1;
- (void)promotionControllerDidHide:(id)arg1;
- (void)promotionControllerDidDisplay:(id)arg1;
- (void)showPromotionWithConfig:(id)arg1 closePreviousIfNotDisplay:(_Bool)arg2;
- (void)showPromotionWithConfig:(id)arg1;
- (void)showPromotionIfNeeded;
- (void)showConfig:(id)arg1 onController:(id)arg2 closePreviousIfNotDisplay:(_Bool)arg3;
- (void)didReceiveShowEvent:(id)arg1;
- (void)promotionShouldStart:(id)arg1;
- (void)promotionConfigChanged:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)stop;
- (void)startWithConfigProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

