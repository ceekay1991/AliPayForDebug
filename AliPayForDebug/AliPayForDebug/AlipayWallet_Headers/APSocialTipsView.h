//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class MFAttributeLabel, NSString, SUImageView, UIButton, UIGestureRecognizer, UIPanGestureRecognizer;
@protocol APCommonItemProtocol, APSocialTipsViewDelegate;

@interface APSocialTipsView : UIView <UIGestureRecognizerDelegate>
{
    id <APSocialTipsViewDelegate> _adelegate;
    id <APCommonItemProtocol> _modelTips;
    SUImageView *_iconImgView;
    MFAttributeLabel *_titleLabel;
    MFAttributeLabel *_subLabel;
    UIButton *_actionButton;
    UIView *_contentView;
    UIButton *_ignoreButton;
    UIPanGestureRecognizer *_swipPanGes;
    UIGestureRecognizer *_iconClickGes;
    UIView *_lineView;
    struct CGPoint _touchStartPoint;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIGestureRecognizer *iconClickGes; // @synthesize iconClickGes=_iconClickGes;
@property(nonatomic) struct CGPoint touchStartPoint; // @synthesize touchStartPoint=_touchStartPoint;
@property(retain, nonatomic) UIPanGestureRecognizer *swipPanGes; // @synthesize swipPanGes=_swipPanGes;
@property(retain, nonatomic) UIButton *ignoreButton; // @synthesize ignoreButton=_ignoreButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MFAttributeLabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) MFAttributeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SUImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) id <APCommonItemProtocol> modelTips; // @synthesize modelTips=_modelTips;
@property(nonatomic) __weak id <APSocialTipsViewDelegate> adelegate; // @synthesize adelegate=_adelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateSubViewsFrame:(id)arg1 desc:(id)arg2 actionButton:(id)arg3;
- (void)refreshTips:(id)arg1 withAnimate:(_Bool)arg2;
- (void)resetContentView:(id)arg1 withAnimated:(_Bool)arg2 originXLeft:(long long)arg3;
- (void)adjustContentViewFrame:(id)arg1;
- (void)handleSwipPanGes:(id)arg1;
- (void)handleActionButton:(id)arg1;
- (void)showTipsViewWithAnimate:(_Bool)arg1;
- (void)closeTipsViewWithAnimate:(_Bool)arg1;
- (void)handleIgnoreButton:(id)arg1;
- (void)handleIconClick:(id)arg1;
- (int)attributeLabelDetectHtmlEmotion;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
