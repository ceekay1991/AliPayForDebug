//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LifeCardViewController.h"

#import "AUDialogDelegate-Protocol.h"
#import "LFInfoViewDelegate-Protocol.h"
#import "LFMenuViewDelegate-Protocol.h"
#import "PSDPluginProtocol-Protocol.h"
#import "PromotionCenterDelegate-Protocol.h"

@class APExceptionView, AUButton, AUCustomNavigationBar, AUNoticeDialog, CCard, CDPSpaceView, LFHomeCardMonitor, LFHomeVipComponentView, LFInfoView, LFMenuView, LifeHomeFollowJumpContext, LifeHomeResult, NSMutableArray, NSNumber, NSString;

@interface LifeHomeViewController : LifeCardViewController <PSDPluginProtocol, LFInfoViewDelegate, AUDialogDelegate, LFMenuViewDelegate, PromotionCenterDelegate>
{
    _Bool _hasCache;
    _Bool _isUpgrade;
    _Bool _hasGotoUrl;
    _Bool _isMenuLoading;
    _Bool _isRefreshing;
    _Bool _isViewAppear;
    _Bool _isWhiteNavigationBar;
    _Bool _isNeedFollowToUse;
    _Bool _hasShowFollowToUse;
    _Bool _hasGotoUrlAfterFollow;
    _Bool _followExposured;
    _Bool _shouldShowFollowBanner;
    _Bool _shouldReportCellDuration;
    _Bool _needCover;
    _Bool _alreadyDisplayMoreCard;
    AUButton *_settingBtn;
    LifeHomeResult *_homeInfo;
    NSString *_extArgs;
    NSString *_gotoUrl;
    NSString *_memo;
    LifeHomeFollowJumpContext *_followJumpContext;
    AUCustomNavigationBar *_navigationView;
    LFInfoView *_infoView;
    APExceptionView *_networkErrorView;
    AUNoticeDialog *_alertView;
    LFMenuView *_menuView;
    long long _lastMenuFinishLoading;
    LFHomeCardMonitor *_homeCardMonitor;
    long long _startTime;
    long long _endTime;
    NSMutableArray *_refreshingInsertNoti;
    NSMutableArray *_refreshingDeleteNoti;
    NSNumber *_rpcResultIsFollow;
    double _lastClickTime;
    LFHomeVipComponentView *_componentView;
    CCard *_findMoreCard;
    NSString *_spaceCode;
    CDPSpaceView *_spaceView;
}

@property(retain, nonatomic) CDPSpaceView *spaceView; // @synthesize spaceView=_spaceView;
@property(retain, nonatomic) NSString *spaceCode; // @synthesize spaceCode=_spaceCode;
@property(retain, nonatomic) CCard *findMoreCard; // @synthesize findMoreCard=_findMoreCard;
@property(nonatomic) _Bool alreadyDisplayMoreCard; // @synthesize alreadyDisplayMoreCard=_alreadyDisplayMoreCard;
@property(nonatomic) _Bool needCover; // @synthesize needCover=_needCover;
@property(retain, nonatomic) LFHomeVipComponentView *componentView; // @synthesize componentView=_componentView;
@property(nonatomic) _Bool shouldReportCellDuration; // @synthesize shouldReportCellDuration=_shouldReportCellDuration;
@property(nonatomic) double lastClickTime; // @synthesize lastClickTime=_lastClickTime;
@property(nonatomic) _Bool shouldShowFollowBanner; // @synthesize shouldShowFollowBanner=_shouldShowFollowBanner;
@property(retain, nonatomic) NSNumber *rpcResultIsFollow; // @synthesize rpcResultIsFollow=_rpcResultIsFollow;
@property(nonatomic) _Bool followExposured; // @synthesize followExposured=_followExposured;
@property(retain, nonatomic) NSMutableArray *refreshingDeleteNoti; // @synthesize refreshingDeleteNoti=_refreshingDeleteNoti;
@property(retain, nonatomic) NSMutableArray *refreshingInsertNoti; // @synthesize refreshingInsertNoti=_refreshingInsertNoti;
@property(nonatomic) _Bool hasGotoUrlAfterFollow; // @synthesize hasGotoUrlAfterFollow=_hasGotoUrlAfterFollow;
@property(nonatomic) _Bool hasShowFollowToUse; // @synthesize hasShowFollowToUse=_hasShowFollowToUse;
@property(nonatomic) _Bool isNeedFollowToUse; // @synthesize isNeedFollowToUse=_isNeedFollowToUse;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) LFHomeCardMonitor *homeCardMonitor; // @synthesize homeCardMonitor=_homeCardMonitor;
@property(nonatomic) _Bool isWhiteNavigationBar; // @synthesize isWhiteNavigationBar=_isWhiteNavigationBar;
@property(nonatomic) _Bool isViewAppear; // @synthesize isViewAppear=_isViewAppear;
@property(nonatomic) _Bool isRefreshing; // @synthesize isRefreshing=_isRefreshing;
@property(nonatomic) long long lastMenuFinishLoading; // @synthesize lastMenuFinishLoading=_lastMenuFinishLoading;
@property(nonatomic) _Bool isMenuLoading; // @synthesize isMenuLoading=_isMenuLoading;
@property(retain, nonatomic) LFMenuView *menuView; // @synthesize menuView=_menuView;
@property(retain, nonatomic) AUNoticeDialog *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) APExceptionView *networkErrorView; // @synthesize networkErrorView=_networkErrorView;
@property(retain, nonatomic) LFInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) AUCustomNavigationBar *navigationView; // @synthesize navigationView=_navigationView;
@property(retain, nonatomic) LifeHomeFollowJumpContext *followJumpContext; // @synthesize followJumpContext=_followJumpContext;
@property(nonatomic) _Bool hasGotoUrl; // @synthesize hasGotoUrl=_hasGotoUrl;
@property(nonatomic) _Bool isUpgrade; // @synthesize isUpgrade=_isUpgrade;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *gotoUrl; // @synthesize gotoUrl=_gotoUrl;
@property(retain, nonatomic) NSString *extArgs; // @synthesize extArgs=_extArgs;
@property(retain, nonatomic) LifeHomeResult *homeInfo; // @synthesize homeInfo=_homeInfo;
@property(nonatomic) _Bool hasCache; // @synthesize hasCache=_hasCache;
@property(retain, nonatomic) AUButton *settingBtn; // @synthesize settingBtn=_settingBtn;
- (void).cxx_destruct;
- (void)headClicked;
- (void)publicFollowed;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)locationClicked;
- (void)settingClicked;
- (void)onNetworkErrorView;
- (id)networkErrorView:(long long)arg1;
- (void)addComponent:(CDUnknownBlockType)arg1;
- (void)reportLocation;
- (void)clearUnread;
- (double)getAnnouncementViewHeight;
- (id)promotionBizInfo;
- (void)handleBack;
- (void)refreshNavigationBar:(double)arg1 forceSet:(_Bool)arg2;
- (void)updateNavigationBarItems;
- (id)addNavigationView;
- (void)setStatusBarStyle:(_Bool)arg1;
- (long long)customStatusBarStytle;
- (_Bool)autohideNavigationBar;
- (void)updateConnectBadge:(id)arg1;
- (void)refreshMenuView;
- (void)refreshComponentView;
- (void)removeComponentView;
- (void)refreshTitle;
- (void)refreshHomeView;
- (void)initUI;
- (void)chatSettigsChangeSubscribeState:(id)arg1;
- (void)lifeTemplateDetailVcWillDisappear:(id)arg1;
- (void)onRemoveFollow:(id)arg1;
- (void)onModifyFollow:(id)arg1;
- (void)menuRPCLoading:(id)arg1;
- (void)homecardDelete:(id)arg1;
- (void)doInsertScrollAnimation;
- (void)homecardInsert:(id)arg1;
- (void)resetExtendView:(id)arg1;
- (void)onEnterForeground:(id)arg1;
- (void)onEnterBackground:(id)arg1;
- (void)promotionViewDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)setPromotionObserverWithSpaceCode:(id)arg1;
- (void)addObserverNotifications;
- (_Bool)openRouterCenterURLString:(id)arg1 params:(id)arg2 context:(id)arg3;
- (void)gotoChat;
- (void)infoViewHeightChanged;
- (void)dialogView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)checkLoadMore;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)handleWithHoldingPayActionEvent:(id)arg1;
- (void)handleEvent:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)pageMonitorEndLog;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)displayFollowDialog;
- (void)jump2GotoUrl;
- (id)initWithOptions:(id)arg1;
- (_Bool)isShowMessageList;
- (void)updateLastClickTime;
- (void)saveHasPullHistory:(id)arg1;
- (_Bool)hasPullHistory:(id)arg1;
- (_Bool)isFollow:(id)arg1;
- (void)checkHasMore:(id)arg1;
- (void)updateBox:(id)arg1 lastestModel:(id)arg2;
- (void)updateServiceBox:(id)arg1 lastestModel:(id)arg2;
- (void)updateMessageList:(id)arg1;
- (id)getLastBoardCastMessage;
- (void)loadMoreHomeCard:(id)arg1 andExt:(id)arg2;
- (void)handleSyncNotification;
- (void)homeInfoRPCWithBoardcastList:(id)arg1 syncList:(id)arg2 originCardList:(id)arg3 queryHisMessage:(_Bool)arg4 isFirstEnter:(_Bool)arg5;
- (void)homeInfoRPCWithBoardcastList:(id)arg1 syncList:(id)arg2 originCardList:(id)arg3 queryHisMessage:(_Bool)arg4;
- (void)handleCardList:(id)arg1 actionList:(id)arg2 hisMessageList:(id)arg3 originCardList:(id)arg4 isCacheData:(_Bool)arg5 isRefresh:(_Bool)arg6 needCover:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;
- (void)getCacheDataAndRPCRequest;
- (void)startLoading;
- (void)handleMFWidgetEvent:(id)arg1;
- (void)handleCommOp:(id)arg1 indexSub:(long long)arg2;
- (void)handlePraiseOp:(id)arg1 indexSub:(long long)arg2;
- (id)indexOfCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly) Class superclass;

@end

