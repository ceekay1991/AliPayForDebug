//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NBComponent.h"

#import "PromotionCenterDelegate-Protocol.h"

@class NSDictionary, NSString, UIView;

@interface CDPComponent : NBComponent <PromotionCenterDelegate>
{
    _Bool _immediately;
    UIView *_contentSpaceView;
    UIView *_spaceView;
    NSDictionary *_config;
    NSString *_spaceCode;
    NSDictionary *_extInfo;
}

@property(nonatomic) _Bool immediately; // @synthesize immediately=_immediately;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *spaceCode; // @synthesize spaceCode=_spaceCode;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property(retain, nonatomic) UIView *spaceView; // @synthesize spaceView=_spaceView;
@property(retain, nonatomic) UIView *contentSpaceView; // @synthesize contentSpaceView=_contentSpaceView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)componentReceiveMessage:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)componentDataDidChangeWithData:(id)arg1;
- (id)contentView;
- (void)componentCachedShow;
- (void)removeOldSpaceViews;
- (void)updateSpaceViews:(id)arg1;
- (void)promotionViewDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)renderCdpSpaceView;
- (id)initWithConfig:(id)arg1 messageDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
