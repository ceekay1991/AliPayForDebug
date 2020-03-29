//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UIImageView, UILabel;

@interface LFNewFollowView : UIView
{
    UIView *_contentView;
    UILabel *_titleLabel;
    UIImageView *_leftIconView;
    UIImageView *_rightIconView;
    CAGradientLayer *_gradientLayer;
}

@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) __weak UIImageView *rightIconView; // @synthesize rightIconView=_rightIconView;
@property(nonatomic) __weak UIImageView *leftIconView; // @synthesize leftIconView=_leftIconView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1 needShowActivity:(_Bool)arg2;
- (void)setupConstraints;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
