//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AULoadingIndicatorView, NSString, UIImageView, UILabel;

@interface AFTPVideoLineUpDetailView : UIView
{
    NSString *_infoDesc;
    UIImageView *_waitTimeImageView;
    UILabel *_infoLabel;
    UILabel *_subInfoLabel;
    AULoadingIndicatorView *_loadingView;
}

@property(retain, nonatomic) AULoadingIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UILabel *subInfoLabel; // @synthesize subInfoLabel=_subInfoLabel;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UIImageView *waitTimeImageView; // @synthesize waitTimeImageView=_waitTimeImageView;
@property(retain, nonatomic) NSString *infoDesc; // @synthesize infoDesc=_infoDesc;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setLineUpText:(id)arg1 lineUpKey:(id)arg2;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

