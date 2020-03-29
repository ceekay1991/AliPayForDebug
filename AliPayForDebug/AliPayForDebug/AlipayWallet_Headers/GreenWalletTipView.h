//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ACCTipViewData, UIButton, UIImageView, UILabel;

@interface GreenWalletTipView : UIView
{
    UIImageView *_iconImageView;
    ACCTipViewData *_data;
    UILabel *_titleLabel;
    UIImageView *_descImageView;
    UILabel *_descLabel;
    UIButton *_actionButton;
    UIButton *_refreshButton;
    CDUnknownBlockType _clickCallBack;
    CDUnknownBlockType _refreshClickCallBack;
}

@property(copy, nonatomic) CDUnknownBlockType refreshClickCallBack; // @synthesize refreshClickCallBack=_refreshClickCallBack;
@property(copy, nonatomic) CDUnknownBlockType clickCallBack; // @synthesize clickCallBack=_clickCallBack;
@property(retain, nonatomic) UIButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *descImageView; // @synthesize descImageView=_descImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) ACCTipViewData *data; // @synthesize data=_data;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)refreshButtonPressed:(id)arg1;
- (void)click:(id)arg1;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1 data:(id)arg2 clickCallBack:(CDUnknownBlockType)arg3 refreshCallBack:(CDUnknownBlockType)arg4;

@end
