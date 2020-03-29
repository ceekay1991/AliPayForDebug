//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class AUPopTipView, AUV2PopTipView, BSBadgeInfo, BSBadgeView, HAppCellModel, HBadgeMarkView, HDynamicInfoLottieView, HImageView, HTimeLimitLottieView, NSDictionary, NSString, UIImageView, UILabel, UITapGestureRecognizer;
@protocol HAppCellViewDelegate;

@interface HAppCellView : UIView <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_tapGesture;
    UIImageView *_placeHView;
    UIView *_newAddedTagView;
    _Bool _quickShowImage;
    _Bool _newStyle;
    _Bool _largeIcon;
    _Bool _sensitiveTouch;
    _Bool _canScaleFontSize;
    _Bool _forcedLayoutUsingDoubleLine;
    id <HAppCellViewDelegate> _delegate;
    UILabel *_titleLabel;
    HImageView *_imageView;
    HBadgeMarkView *_badgeMarkView;
    BSBadgeView *_badgeView;
    UILabel *_bottomTextLabel;
    HAppCellModel *_dataModel;
    BSBadgeInfo *_badgeInfo;
    HDynamicInfoLottieView *_dynamicInfoLottieView;
    HTimeLimitLottieView *_timeLimitLottieView;
    long long _postion;
    NSString *_sectionCode;
    NSString *_bizMarkAppId;
    AUPopTipView *_popTipView;
    AUV2PopTipView *_v2PopTipView;
    NSDictionary *_bizExtInfo;
}

@property(copy, nonatomic) NSDictionary *bizExtInfo; // @synthesize bizExtInfo=_bizExtInfo;
@property(nonatomic, getter=isForcedLayoutUsingDoubleLine) _Bool forcedLayoutUsingDoubleLine; // @synthesize forcedLayoutUsingDoubleLine=_forcedLayoutUsingDoubleLine;
@property(nonatomic) _Bool canScaleFontSize; // @synthesize canScaleFontSize=_canScaleFontSize;
@property(nonatomic) __weak AUV2PopTipView *v2PopTipView; // @synthesize v2PopTipView=_v2PopTipView;
@property(nonatomic) __weak AUPopTipView *popTipView; // @synthesize popTipView=_popTipView;
@property(retain, nonatomic) NSString *bizMarkAppId; // @synthesize bizMarkAppId=_bizMarkAppId;
@property(nonatomic) _Bool sensitiveTouch; // @synthesize sensitiveTouch=_sensitiveTouch;
@property(retain, nonatomic) NSString *sectionCode; // @synthesize sectionCode=_sectionCode;
@property(nonatomic) long long postion; // @synthesize postion=_postion;
@property(retain, nonatomic) HTimeLimitLottieView *timeLimitLottieView; // @synthesize timeLimitLottieView=_timeLimitLottieView;
@property(retain, nonatomic) HDynamicInfoLottieView *dynamicInfoLottieView; // @synthesize dynamicInfoLottieView=_dynamicInfoLottieView;
@property(retain, nonatomic) BSBadgeInfo *badgeInfo; // @synthesize badgeInfo=_badgeInfo;
@property(retain, nonatomic) HAppCellModel *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) UILabel *bottomTextLabel; // @synthesize bottomTextLabel=_bottomTextLabel;
@property(readonly, nonatomic) BSBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(readonly, nonatomic) HBadgeMarkView *badgeMarkView; // @synthesize badgeMarkView=_badgeMarkView;
@property(retain, nonatomic) HImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic, getter=isLargeIcon) _Bool largeIcon; // @synthesize largeIcon=_largeIcon;
@property(nonatomic, getter=isNewStyle) _Bool newStyle; // @synthesize newStyle=_newStyle;
@property(nonatomic) _Bool quickShowImage; // @synthesize quickShowImage=_quickShowImage;
@property(nonatomic) __weak id <HAppCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)clearV2PopTipView;
- (void)clearTimeLimitLottieView;
- (void)tapGestureHandel:(id)arg1;
- (void)playDelAnimation:(CDUnknownBlockType)arg1;
- (void)setBottomText:(id)arg1;
- (void)setBizMarkText:(id)arg1;
- (void)stopTimeLimitAnimation;
- (void)startTimeLimitAnimation;
- (void)showTimeLimit;
- (double)newAddedTagPadding;
- (double)newAddedTagWidth;
- (void)showNewAddedTag;
- (_Bool)newAddedTagNeedChangePosition;
- (void)loadBizMark;
- (void)loadImage;
- (void)preforReuse;
- (double)iconGap;
- (double)appIconSize;
- (double)fontSizeByScaleFontSize:(double)arg1;
- (id)titleLabelFont;
- (id)bottomTextLabelFont;
- (double)titleLabelMargin;
- (long long)linesForLabel:(id)arg1;
- (id)labelForCalculation;
- (double)titleLabelHeight;
- (double)bottomTextHeight;
- (double)contentHeight;
- (_Bool)isDoubleLined;
- (struct CGRect)firstLetterFrameInLabel:(id)arg1;
- (void)layoutSubviews;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
