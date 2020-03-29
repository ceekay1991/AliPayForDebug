//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CKFalconEventListener-Protocol.h"
#import "CTTopBannerGeneralComponentProtocol-Protocol.h"
#import "CardSDKExplorseDelegate-Protocol.h"

@class CSTableViewDelegate, CardSDK, NSArray, NSString, UIButton, UITableView;
@protocol CTTopBannerGeneralComponentLayoutDelegate, CTTopBannerGeneralComponentSessionDelegate;

@interface CTTopBannerGeneralComponent : UIView <CKFalconEventListener, CardSDKExplorseDelegate, CTTopBannerGeneralComponentProtocol>
{
    id <CTTopBannerGeneralComponentSessionDelegate> sessionDelegate;
    id <CTTopBannerGeneralComponentLayoutDelegate> layoutDelegate;
    NSString *_sessionId;
    NSString *_sessionType;
    NSString *_groupBizType;
    UIButton *_closeBtn;
    UIButton *_viewAllBtn;
    NSArray *_dataRes;
    CardSDK *_cardsdkEngine;
    UITableView *_tableView;
    CSTableViewDelegate *_tableviewDelegate;
}

@property(retain, nonatomic) CSTableViewDelegate *tableviewDelegate; // @synthesize tableviewDelegate=_tableviewDelegate;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CardSDK *cardsdkEngine; // @synthesize cardsdkEngine=_cardsdkEngine;
@property(retain, nonatomic) NSArray *dataRes; // @synthesize dataRes=_dataRes;
@property(retain, nonatomic) UIButton *viewAllBtn; // @synthesize viewAllBtn=_viewAllBtn;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) NSString *groupBizType; // @synthesize groupBizType=_groupBizType;
@property(retain, nonatomic) NSString *sessionType; // @synthesize sessionType=_sessionType;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) __weak id <CTTopBannerGeneralComponentLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate;
@property(nonatomic) __weak id <CTTopBannerGeneralComponentSessionDelegate> sessionDelegate; // @synthesize sessionDelegate;
- (void).cxx_destruct;
- (void)topBannerComponentFullScreenmMode;
- (void)setFrame:(struct CGRect)arg1;
- (void)closeBtnTaped:(id)arg1;
- (void)viewAllBtnBtnTaped:(id)arg1;
- (void)topBannerDidClose;
- (void)formatBeforeFullScreen;
- (void)formatBeforeHalfScreen;
- (void)layoutSubviews;
- (void)refreshComponentWithData:(id)arg1;
- (void)setupUI;
- (void)analysisParamsWithDict:(id)arg1;
- (void)onEvent:(id)arg1 instance:(id)arg2;
- (void)explorseCard:(id)arg1 indexPath:(id)arg2;
- (void)initCardSdkEngine;
- (id)initWithFrame:(struct CGRect)arg1 viewParams:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
