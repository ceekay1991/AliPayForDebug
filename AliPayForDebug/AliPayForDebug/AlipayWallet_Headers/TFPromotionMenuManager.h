//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PromotionCenterDelegate-Protocol.h"

@class NSArray, NSString;
@protocol TFPromotionMenuManagerDelegate;

@interface TFPromotionMenuManager : NSObject <PromotionCenterDelegate>
{
    NSArray *_menus;
    id <TFPromotionMenuManagerDelegate> _delegate;
    NSString *_spaceCode;
}

@property(copy, nonatomic) NSString *spaceCode; // @synthesize spaceCode=_spaceCode;
@property(nonatomic) __weak id <TFPromotionMenuManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *menus; // @synthesize menus=_menus;
- (void).cxx_destruct;
- (void)promotionDataDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (id)convertSpaceInfoToMenu:(id)arg1;
- (void)dealloc;
- (void)registerObserver;
- (void)loadCacheData;
- (void)feedbackClickWithMenu:(id)arg1;
- (void)feedbackShowWithMenu:(id)arg1;
- (void)checkMenu;
- (id)initWithMenuSpaceCode:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

