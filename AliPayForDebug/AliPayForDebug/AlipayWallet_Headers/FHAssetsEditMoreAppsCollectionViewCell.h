//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FHAssetsEditWhiteBackgroundCollectionViewCell.h"

@class UIImageView, UILabel, UIView;

@interface FHAssetsEditMoreAppsCollectionViewCell : FHAssetsEditWhiteBackgroundCollectionViewCell
{
    UIView *_separatorView;
    UILabel *_moreAppsLabel;
    UIImageView *_indicatorImageView;
    long long _indicatorType;
}

+ (double)cellHeightIsEditing:(_Bool)arg1;
@property(nonatomic) long long indicatorType; // @synthesize indicatorType=_indicatorType;
@property(retain, nonatomic) UIImageView *indicatorImageView; // @synthesize indicatorImageView=_indicatorImageView;
@property(retain, nonatomic) UILabel *moreAppsLabel; // @synthesize moreAppsLabel=_moreAppsLabel;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
- (void).cxx_destruct;
- (void)updateIndicatorType:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end
