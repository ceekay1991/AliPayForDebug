//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASLogoutService-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class AUDialogBaseView, LogoutCTUResultModel, NSString;

@interface ASLogoutServiceImpl : NSObject <UIActionSheetDelegate, ASLogoutService>
{
    _Bool _abFlowNew;
    LogoutCTUResultModel *_ctuResultModel;
    NSString *_isDisturbTimeExpired;
    NSString *_rpcResult;
    AUDialogBaseView *_logoutRejectDialog;
}

@property(retain, nonatomic) AUDialogBaseView *logoutRejectDialog; // @synthesize logoutRejectDialog=_logoutRejectDialog;
@property(copy, nonatomic) NSString *rpcResult; // @synthesize rpcResult=_rpcResult;
@property(copy, nonatomic) NSString *isDisturbTimeExpired; // @synthesize isDisturbTimeExpired=_isDisturbTimeExpired;
@property(nonatomic) _Bool abFlowNew; // @synthesize abFlowNew=_abFlowNew;
@property(retain, nonatomic) LogoutCTUResultModel *ctuResultModel; // @synthesize ctuResultModel=_ctuResultModel;
- (void).cxx_destruct;
- (void)spmNoNeedSafeInsurenceCancelClicked;
- (void)spmNoNeedSafeInsurenceLogoutClicked;
- (void)spmNoNeedSafeInsurenceChangeAccountClicked;
- (void)spmNoNeedSafeInsurence;
- (void)spmNeedBuySafeInsurenceCancelClicked;
- (void)spmNeedBuySafeInsurenceOpenClicked;
- (void)spmNeedBuySafeInsurenceLogoutClicked;
- (void)spmNeedBuySafeInsurence;
- (void)spmUTCOpenGestureCancelClicked;
- (void)spmUTCOpenGestureLogoutClick;
- (void)spmUTCOpenGestureClicked;
- (void)spmUTCOpenGesture;
- (void)spmActionSheetExposure;
- (void)spmActionSheetCancelClicked;
- (void)spmActionSheetLogoutClicked;
- (void)spmChangeAccountLogin;
- (void)monitorLogoutClickGestureGuideClick;
- (void)monitorSwitch:(id)arg1;
- (void)monitorLogout:(_Bool)arg1;
- (void)monitorChangeAccount;
- (void)monitorLogoutBtnClicked;
- (void)onDeviceLockLogoutNotification:(id)arg1;
- (void)showLogoutGuide;
- (_Bool)shouldShowUnlockGuide;
- (void)startLogoutAction;
- (void)updateLogoutTrustLoginToken:(id)arg1 andExpirationTime:(long long)arg2;
- (void)logoutAfterSupplementPwd:(_Bool)arg1 isLoginIdEmpty:(_Bool)arg2;
- (void)logoutAction;
- (void)logoutClicked;
- (void)getCTUSafetyType;
- (void)openAccountSafeInsurance;
- (void)gestureGuideClicked;
- (void)changeAccountClicked;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showLogoutIn:(id)arg1;
- (void)arouseLoginView;
- (void)logoutWith:(id)arg1;
- (void)logout;
- (void)handleRegionChange:(id)arg1;
- (_Bool)serviceShouldTerminate:(id)arg1;
- (void)willDestroy;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

