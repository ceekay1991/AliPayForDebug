//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class OSPGuideMaskInnerView;

@interface OSPGuideMaskView : UIView
{
    _Bool _isHorizontalScreen;
    _Bool _needBlurEffect;
    OSPGuideMaskInnerView *_maskInnerView;
}

@property(nonatomic) _Bool needBlurEffect; // @synthesize needBlurEffect=_needBlurEffect;
@property(nonatomic) _Bool isHorizontalScreen; // @synthesize isHorizontalScreen=_isHorizontalScreen;
@property(retain, nonatomic) OSPGuideMaskInnerView *maskInnerView; // @synthesize maskInnerView=_maskInnerView;
- (void).cxx_destruct;
- (void)createEffectView;
- (void)layoutSubviews;
- (void)reloadDataWithParam:(id)arg1;
- (id)initWithMaskParam:(id)arg1 frame:(struct CGRect)arg2;

@end
