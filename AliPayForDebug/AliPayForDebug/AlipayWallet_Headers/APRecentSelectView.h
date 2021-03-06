//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APCommonSelectView.h"

#import "APContactTableViewCellGuideHeaderDelegate-Protocol.h"
#import "APContactTableViewCellRecentDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class APRecentNavBar, NSString, UILabel, UIView;
@protocol H5WebViewInterface, PSDViewControllerProtocol;

@interface APRecentSelectView : APCommonSelectView <UIScrollViewDelegate, APContactTableViewCellRecentDelegate, APContactTableViewCellGuideHeaderDelegate>
{
    UIView<H5WebViewInterface> *H5View;
    APRecentNavBar *recentNavBar;
    id <PSDViewControllerProtocol> H5Bridge;
    double H5DisplayHeight;
    double H5ViewWholeHeight;
    _Bool OPT_Zone_CanPullBottomIntoFullScreen;
    _Bool _showingWebView;
    long long OPT_TOUCH_TYPE;
    long long action;
    UILabel *_protocolLable;
}

@property(retain, nonatomic) UILabel *protocolLable; // @synthesize protocolLable=_protocolLable;
- (void).cxx_destruct;
- (void)handleGuideHeaderClickNoInterest;
- (void)handleClickLifeTipView:(id)arg1;
- (void)dealloc;
- (void)resetNavAndAsyncSpm;
- (double)totalNavbarHeight;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)adjustFrames;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)setupTableView;
- (id)initWithFrame:(struct CGRect)arg1 superVC:(id)arg2 delegate:(id)arg3 paramDict:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

