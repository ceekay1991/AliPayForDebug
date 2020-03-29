//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FHTemplateStockExpandableIndexView, NSArray, UIButton, UIControl, UIImageView;
@protocol FHTemplateClickDelegate;

@interface FHTemplateStockExpandableContentView : UIView
{
    FHTemplateStockExpandableIndexView *_firstIndexView;
    FHTemplateStockExpandableIndexView *_middleIndexView;
    FHTemplateStockExpandableIndexView *_lastIndexView;
    UIImageView *_guessTrendingView;
    UIControl *_guessTrendingControl;
    UIButton *_moreButton;
    NSArray *_indexExpandList;
    double _heightForGuessTrendingView;
    id <FHTemplateClickDelegate> _clickDelegate;
}

@property(nonatomic) __weak id <FHTemplateClickDelegate> clickDelegate; // @synthesize clickDelegate=_clickDelegate;
@property(nonatomic) double heightForGuessTrendingView; // @synthesize heightForGuessTrendingView=_heightForGuessTrendingView;
@property(retain, nonatomic) NSArray *indexExpandList; // @synthesize indexExpandList=_indexExpandList;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIControl *guessTrendingControl; // @synthesize guessTrendingControl=_guessTrendingControl;
@property(retain, nonatomic) UIImageView *guessTrendingView; // @synthesize guessTrendingView=_guessTrendingView;
@property(retain, nonatomic) FHTemplateStockExpandableIndexView *lastIndexView; // @synthesize lastIndexView=_lastIndexView;
@property(retain, nonatomic) FHTemplateStockExpandableIndexView *middleIndexView; // @synthesize middleIndexView=_middleIndexView;
@property(retain, nonatomic) FHTemplateStockExpandableIndexView *firstIndexView; // @synthesize firstIndexView=_firstIndexView;
- (void).cxx_destruct;
- (id)viewsNeedExposure;
- (double)expectHeight;
- (void)layoutSubviews;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)reloadStockInfos:(id)arg1;
- (void)reloadData:(id)arg1 stockInfos:(id)arg2;
- (void)setupIndexViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
