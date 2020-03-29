//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class APSKPreInfoStyle, APSKShareOption, UIImage, UIImageView, UILabel;
@protocol TASKInfoViewDataSource;

@interface APSKPreInfoView : UIView
{
    _Bool _snapShotImage;
    _Bool _showSearchTip;
    APSKShareOption *_shareOption;
    id <TASKInfoViewDataSource> _dataSource;
    unsigned long long _loadingState;
    APSKPreInfoStyle *_style;
    UIImageView *_bgImageView;
    UIView *_infoView;
    UIView *_headerInfoView;
    UIImageView *_iconView;
    UIImageView *_avatarView;
    UIImageView *_qrCodeView;
    UIImageView *_qrImageView;
    UILabel *_infoTitle;
    UILabel *_infoContent;
    UILabel *_infoDesc;
    UILabel *_qrTipLabel;
    UIView *_searchView;
    UILabel *_searchTipLabel;
    unsigned long long _bgImageType;
    unsigned long long _qrCodeImageType;
}

@property(nonatomic) unsigned long long qrCodeImageType; // @synthesize qrCodeImageType=_qrCodeImageType;
@property(nonatomic) unsigned long long bgImageType; // @synthesize bgImageType=_bgImageType;
@property(retain, nonatomic) UILabel *searchTipLabel; // @synthesize searchTipLabel=_searchTipLabel;
@property(retain, nonatomic) UIView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) UILabel *qrTipLabel; // @synthesize qrTipLabel=_qrTipLabel;
@property(retain, nonatomic) UILabel *infoDesc; // @synthesize infoDesc=_infoDesc;
@property(retain, nonatomic) UILabel *infoContent; // @synthesize infoContent=_infoContent;
@property(retain, nonatomic) UILabel *infoTitle; // @synthesize infoTitle=_infoTitle;
@property(retain, nonatomic) UIImageView *qrImageView; // @synthesize qrImageView=_qrImageView;
@property(retain, nonatomic) UIImageView *qrCodeView; // @synthesize qrCodeView=_qrCodeView;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *headerInfoView; // @synthesize headerInfoView=_headerInfoView;
@property(retain, nonatomic) UIView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) APSKPreInfoStyle *style; // @synthesize style=_style;
@property(nonatomic) unsigned long long loadingState; // @synthesize loadingState=_loadingState;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)getBGImage;
@property(retain, nonatomic) UIImage *image;
- (void)getIcon:(CDUnknownBlockType)arg1;
- (void)setQrCodeImage:(id)arg1;
- (_Bool)waitToSetQRCode;
- (void)setupVerticalViews;
- (void)setupLandscapeViews;
- (void)setupBgImageViewWithPlaceholderBgView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 shareOption:(id)arg2 style:(id)arg3 placeholderBgView:(id)arg4 dataSource:(id)arg5;

@end
