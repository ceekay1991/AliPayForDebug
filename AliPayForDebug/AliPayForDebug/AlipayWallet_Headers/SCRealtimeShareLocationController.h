//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCommonBaseViewController.h"

#import "UIActionSheetDelegate-Protocol.h"

@class APMapLocation, APMapShareLocationView, AUNoticeDialog, NSDate, NSMutableArray, NSMutableDictionary, NSString, UIButton, UILabel, UIScrollView, UIView, UIViewController;

@interface SCRealtimeShareLocationController : SCCommonBaseViewController <UIActionSheetDelegate>
{
    UIView *_coverView;
    UIView *_topBar;
    UIButton *_bottomBtn;
    UIButton *_exitBtn;
    UIButton *_hideBtn;
    NSMutableArray *_participantsArr;
    UIScrollView *_scrollView;
    NSMutableDictionary *_cachedHeadViews;
    NSMutableDictionary *_cachedMapAnnoationImage;
    long long _uploadLocFailureCount;
    UIViewController *_controllerPresentingMe;
    int _sharingStatus;
    NSString *_toUserId;
    NSString *_toUserType;
    NSString *_enterQuitHintString;
    UILabel *_hintLabel;
    UILabel *_titleLabel;
    NSDate *_lastSendUpdateRPCTime;
    APMapLocation *_scInitLocation;
    APMapShareLocationView *_mapView;
    APMapLocation *_currentLocation;
    AUNoticeDialog *_networkErrAlertView;
}

@property(nonatomic) __weak AUNoticeDialog *networkErrAlertView; // @synthesize networkErrAlertView=_networkErrAlertView;
@property(nonatomic) int sharingStatus; // @synthesize sharingStatus=_sharingStatus;
@property(retain, nonatomic) APMapLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) APMapShareLocationView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) APMapLocation *scInitLocation; // @synthesize scInitLocation=_scInitLocation;
@property(retain, nonatomic) NSDate *lastSendUpdateRPCTime; // @synthesize lastSendUpdateRPCTime=_lastSendUpdateRPCTime;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) NSString *enterQuitHintString; // @synthesize enterQuitHintString=_enterQuitHintString;
@property(retain, nonatomic) NSString *toUserType; // @synthesize toUserType=_toUserType;
@property(retain, nonatomic) NSString *toUserId; // @synthesize toUserId=_toUserId;
- (void).cxx_destruct;
- (void)updateAllMapAnnomations;
- (void)downloadUserHeadImageAsync:(id)arg1;
- (void)updateMapAnnotationOfModel:(id)arg1;
- (id)shareAnnotaionWithModel:(id)arg1;
- (void)setNeedShowHint:(id)arg1;
- (void)removeParticipants:(id)arg1 showHint:(_Bool)arg2;
- (void)addParticipants:(id)arg1 showHint:(_Bool)arg2;
- (void)updateParticipants:(id)arg1;
- (id)shareModelForUserId:(id)arg1;
- (id)captureImageOfView:(id)arg1;
- (id)createMapAnnotationImageWith:(id)arg1 userId:(id)arg2;
- (void)removeCachedMapAnnotationImageWithUserId:(id)arg1;
- (id)getCachedMapAnnotationImageWithUserId:(id)arg1;
- (id)createHeadViewWithModel:(id)arg1;
- (id)getCachedHeadViewForUserId:(id)arg1;
- (void)removeCachedHeadViewForUserId:(id)arg1;
- (id)getNickInGroupOf:(id)arg1;
- (id)selfUserId;
- (_Bool)isNetworkReachable;
- (id)getContactInfoWith:(id)arg1;
- (void)handleNetworkError;
- (void)rpcRealtimeShareCloseWith:(CDUnknownBlockType)arg1;
- (void)rpcRealtimeShareUpdateWith:(id)arg1;
- (void)rpcRealtimeShareOpen;
- (void)resumeAnimated;
- (void)hideAnimated;
- (void)forceDismiss:(CDUnknownBlockType)arg1;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onHeadImageUpdated:(id)arg1 img:(id)arg2;
- (void)onContactNotify:(id)arg1;
- (_Bool)isRealTimeSharingActive;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLBSSyncUpdateNotify:(id)arg1;
- (void)doExit;
- (void)onHide;
- (void)onExit;
- (void)onGPSLocationChanged:(id)arg1;
- (void)onHeadTap:(id)arg1;
- (void)updateTopBar;
- (void)createSubviews;
- (void)checkNeedAuthGuide;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

