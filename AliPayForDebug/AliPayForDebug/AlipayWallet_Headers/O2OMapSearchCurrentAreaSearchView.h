//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AULoadingIndicatorView, UILabel;

@interface O2OMapSearchCurrentAreaSearchView : UIView
{
    int _sentinel;
    unsigned long long _state;
    CDUnknownBlockType _onClickWhenNormal;
    UILabel *_textLabel;
    AULoadingIndicatorView *_indicator;
}

@property(nonatomic) int sentinel; // @synthesize sentinel=_sentinel;
@property(retain, nonatomic) AULoadingIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(copy, nonatomic) CDUnknownBlockType onClickWhenNormal; // @synthesize onClickWhenNormal=_onClickWhenNormal;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)showFinishHint;
- (void)showAnimation:(CDUnknownBlockType)arg1;
- (void)beginLoading;
- (void)resetToNormal;
- (void)hide;
- (void)reset;
- (void)onClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
