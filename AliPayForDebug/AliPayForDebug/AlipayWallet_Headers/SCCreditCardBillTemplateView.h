//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCCreditCardBillViewActionDelegate-Protocol.h"
#import "SCTipsCardBannerViewDelegate-Protocol.h"
#import "SCTipsCardTitleViewDelegate-Protocol.h"

@class NSDictionary, NSString, SCCreditCardBillView, SCTipsCardBannerView, SCTipsCardTitleView;

@interface SCCreditCardBillTemplateView : UIView <SCCreditCardBillViewActionDelegate, SCTipsCardBannerViewDelegate, SCTipsCardTitleViewDelegate>
{
    NSDictionary *_data;
    SCTipsCardTitleView *_titleView;
    SCCreditCardBillView *_billView;
    SCTipsCardBannerView *_bannerView;
    UIView *_titleBottomLineView;
    UIView *_actionsBottomLineView;
}

+ (struct CGSize)sizeOfTemplateDataSource:(id)arg1 viewWidth:(double)arg2;
@property(retain, nonatomic) UIView *actionsBottomLineView; // @synthesize actionsBottomLineView=_actionsBottomLineView;
@property(retain, nonatomic) UIView *titleBottomLineView; // @synthesize titleBottomLineView=_titleBottomLineView;
@property(retain, nonatomic) SCTipsCardBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) SCCreditCardBillView *billView; // @synthesize billView=_billView;
@property(retain, nonatomic) SCTipsCardTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)tipsTitleDidClick:(id)arg1 hiChatItem:(id)arg2;
- (void)bannerViewOpenUrl:(id)arg1 url:(id)arg2;
- (void)creditCardBillViewDidTriggerCardTapInView:(id)arg1 url:(id)arg2;
- (void)creditCardBillViewDidTriggerActionInView:(id)arg1 url:(id)arg2 index:(unsigned long long)arg3;
- (void)layoutSubviews;
- (void)bindData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

