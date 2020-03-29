//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BeeLottieView, CDPSpaceInfo, CDPSpaceObjectInfo, NSString;

@interface CDPBannerAttachView : UIView
{
    BeeLottieView *_lottieView;
    CDPSpaceInfo *_spaceInfo;
    CDPSpaceObjectInfo *_objectInfo;
    NSString *_lottieId;
}

@property(retain, nonatomic) NSString *lottieId; // @synthesize lottieId=_lottieId;
@property(retain, nonatomic) CDPSpaceObjectInfo *objectInfo; // @synthesize objectInfo=_objectInfo;
@property(retain, nonatomic) CDPSpaceInfo *spaceInfo; // @synthesize spaceInfo=_spaceInfo;
@property(retain, nonatomic) BeeLottieView *lottieView; // @synthesize lottieView=_lottieView;
- (void).cxx_destruct;
- (id)getViewControllerWithView:(id)arg1;
- (struct CGRect)getAttachViewwframeWithBannerFrame:(struct CGRect)arg1;
- (_Bool)canShowCDPBannerViewByCurrentBanner:(id)arg1 viewController:(id)arg2;
- (_Bool)showCDPBannerAttachView:(id)arg1;
- (void)removeCDPBannerAttachView;
- (void)cdpBannerAttachViewClicked:(id)arg1;
- (_Bool)needShowBannerAttachView:(id)arg1 objectInfo:(id)arg2;
- (void)setLottieView:(id)arg1 spaceInfo:(id)arg2 objectInfo:(id)arg3 lottieId:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end
