//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "Biz024CardEventHandler-Protocol.h"

@class CBGoodsRecommendDataManager, NSString;

@interface Biz024CardEvent : NSObject <Biz024CardEventHandler>
{
    CBGoodsRecommendDataManager *_dataManager;
}

@property(retain, nonatomic) CBGoodsRecommendDataManager *dataManager; // @synthesize dataManager=_dataManager;
- (void).cxx_destruct;
- (void)do_action_jump:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)do_action_event_select:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)do_action_event_unselect:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)do_Item_event:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)do_X_event:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteHomeCardWithCardId:(id)arg1;
- (void)updateHomeCard:(id)arg1;
- (id)syncInfo:(id)arg1;
- (id)bridgeViewModel2templatedata:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

