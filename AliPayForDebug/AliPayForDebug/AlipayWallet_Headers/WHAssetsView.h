//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WHExposureControl.h"

@class AULabel, UIView, WHAssetsItem;

@interface WHAssetsView : WHExposureControl
{
    AULabel *_titleLabel;
    AULabel *_moneyLabel;
    AULabel *_descLabel;
    UIView *_accessaryView;
    WHAssetsItem *_data;
}

+ (double)estimateHeight;
@property(retain, nonatomic) WHAssetsItem *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)updateContent;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
