//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class FHTemplateStockInfoView, FHTemplateStockNewsItemView, FHTemplateStockScrollViewCellModel;

@interface FHTemplateStockScrollViewCell : UIControl
{
    FHTemplateStockScrollViewCellModel *_data;
    FHTemplateStockInfoView *_stockInfoView;
    FHTemplateStockNewsItemView *_newsItemView;
}

@property(retain, nonatomic) FHTemplateStockNewsItemView *newsItemView; // @synthesize newsItemView=_newsItemView;
@property(retain, nonatomic) FHTemplateStockInfoView *stockInfoView; // @synthesize stockInfoView=_stockInfoView;
@property(retain, nonatomic) FHTemplateStockScrollViewCellModel *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)reloadData:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

