//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AFWStockConcernPlateInfoModel, UILabel;

@interface AFWStockConcernPlateInfoView : UIView
{
    UILabel *_plateLable;
    UILabel *_plateQuoLable;
    UIView *_plateBg;
    UILabel *_contentLabel;
    AFWStockConcernPlateInfoModel *_model;
    CDUnknownBlockType _plateAction;
}

@property(copy, nonatomic) CDUnknownBlockType plateAction; // @synthesize plateAction=_plateAction;
@property(retain, nonatomic) AFWStockConcernPlateInfoModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)clickAction:(id)arg1;
- (void)setContentStyle;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
