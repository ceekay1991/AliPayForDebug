//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALPViewController.h"

#import "APSKLaunchpadDelegate-Protocol.h"
#import "BEEPhotoBrowserDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class ALPPassShareManager, ALPVoucherAuxiliaryView, ALPVoucherBrandView, ALPVoucherDetailModel, ALPVoucherKeyInfoView, ALPVoucherNoteInfoView, ALPVoucherOperationView, ALPVoucherWishView, APSKLaunchpad, AUCustomNavigationBar, AUNetErrorView, KABAOPRODPassShareInfo, NSString, UIColor, UIImageView, UIImageViewAligned, UIScrollView, VoucherInfoNew;

@interface ALPVoucherDetailViewController : ALPViewController <UIScrollViewDelegate, UIActionSheetDelegate, APSKLaunchpadDelegate, BEEPhotoBrowserDelegate>
{
    _Bool _isFirstAppear;
    _Bool _isQueryLocationing;
    VoucherInfoNew *_voucherInfo;
    ALPVoucherDetailModel *_detailModel;
    ALPVoucherBrandView *_brandView;
    ALPVoucherKeyInfoView *_keyInfoView;
    ALPVoucherNoteInfoView *_noteInfoView;
    ALPVoucherOperationView *_operationView;
    ALPVoucherAuxiliaryView *_auxiliaryView;
    ALPVoucherWishView *_wishView;
    UIImageView *_shareInfoView;
    UIImageViewAligned *_pictureView;
    UIImageView *_bannerView;
    AUNetErrorView *_emptyView;
    AUNetErrorView *_errorView;
    UIScrollView *_container;
    UIImageView *_background;
    AUCustomNavigationBar *_navigationView;
    APSKLaunchpad *_launchpad;
    KABAOPRODPassShareInfo *_shareInfo;
    ALPPassShareManager *_shareManager;
    UIColor *_themeColor;
}

@property(nonatomic) _Bool isQueryLocationing; // @synthesize isQueryLocationing=_isQueryLocationing;
@property(nonatomic) _Bool isFirstAppear; // @synthesize isFirstAppear=_isFirstAppear;
@property(retain, nonatomic) UIColor *themeColor; // @synthesize themeColor=_themeColor;
@property(retain, nonatomic) ALPPassShareManager *shareManager; // @synthesize shareManager=_shareManager;
@property(retain, nonatomic) KABAOPRODPassShareInfo *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) APSKLaunchpad *launchpad; // @synthesize launchpad=_launchpad;
@property(retain, nonatomic) AUCustomNavigationBar *navigationView; // @synthesize navigationView=_navigationView;
@property(retain, nonatomic) UIImageView *background; // @synthesize background=_background;
@property(retain, nonatomic) UIScrollView *container; // @synthesize container=_container;
@property(retain, nonatomic) AUNetErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) AUNetErrorView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UIImageView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UIImageViewAligned *pictureView; // @synthesize pictureView=_pictureView;
@property(retain, nonatomic) UIImageView *shareInfoView; // @synthesize shareInfoView=_shareInfoView;
@property(retain, nonatomic) ALPVoucherWishView *wishView; // @synthesize wishView=_wishView;
@property(retain, nonatomic) ALPVoucherAuxiliaryView *auxiliaryView; // @synthesize auxiliaryView=_auxiliaryView;
@property(retain, nonatomic) ALPVoucherOperationView *operationView; // @synthesize operationView=_operationView;
@property(retain, nonatomic) ALPVoucherNoteInfoView *noteInfoView; // @synthesize noteInfoView=_noteInfoView;
@property(retain, nonatomic) ALPVoucherKeyInfoView *keyInfoView; // @synthesize keyInfoView=_keyInfoView;
@property(retain, nonatomic) ALPVoucherBrandView *brandView; // @synthesize brandView=_brandView;
@property(retain, nonatomic) ALPVoucherDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(retain, nonatomic) VoucherInfoNew *voucherInfo; // @synthesize voucherInfo=_voucherInfo;
- (void).cxx_destruct;
- (void)prepareH5App:(_Bool)arg1 url:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)imageForZoomAnimationInPhotoBrowser:(id)arg1 atIndex:(long long)arg2;
- (id)photoBrowser:(id)arg1 thumbPhotoAtIndex:(unsigned long long)arg2;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (void)resetDefaultNavi:(id)arg1;
- (void)changeThemeColor;
- (void)updateBackgroundImage;
- (void)updateBannerView;
- (void)updateWishView;
- (void)updateShareInfoView;
- (void)updateAuxiliaryView;
- (void)updatePictureView;
- (void)updateNoteInfoView;
- (void)showAlertVerify:(id)arg1;
- (void)updateOperationView;
- (void)updateKeyInfoView;
- (void)updateBrandView;
- (void)updateWithVoucherInfo:(_Bool)arg1;
- (void)updateWithVoucherInfo;
- (void)updateNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)writeOffVoucherWithDoneBlock:(CDUnknownBlockType)arg1;
- (void)cancelShareAllVoucher;
- (void)shareAllVoucher;
- (void)sharingLaunchpadDidCancel:(id)arg1;
- (void)sharingLaunchpad:(id)arg1 didSelectChannel:(id)arg2;
- (void)showSharePanel;
- (void)onRightNavItemClicked;
- (void)shareVoucher;
- (void)presentPassFailResult:(id)arg1;
- (void)presentPassSuccess:(id)arg1;
- (void)presentVoucher;
- (void)deleteVoucher;
- (void)onDeleteVoucherAction;
- (void)showConfirmPage:(_Bool)arg1;
- (id)getConfirmData:(_Bool)arg1;
- (void)writeOffFinished:(id)arg1;
- (void)browserPicture;
- (void)writeLog:(id)arg1;
- (void)showPopoverActionSheet;
- (void)addRightBarButtomForInfo:(id)arg1;
- (void)queryLocation;
- (void)hideErrorView;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showModel:(id)arg1;
- (void)showEmpty:(id)arg1;
- (void)didLoadModel:(id)arg1;
- (void)showLoading:(id)arg1;
- (long long)customStatusBarStytle;
- (id)customNavigationBar;
- (_Bool)autohideNavigationBar;
- (_Bool)canWriteExposure;
- (id)pageParams;
- (id)pageSpm;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 params:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

