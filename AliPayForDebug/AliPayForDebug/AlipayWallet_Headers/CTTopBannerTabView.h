//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSDictionary, NSMutableArray, mobilechatStageTabPB;

@interface CTTopBannerTabView : UIView
{
    mobilechatStageTabPB *_data;
    NSArray *_bannerList;
    NSDictionary *_params;
    NSMutableArray *_bannerViews;
}

@property(retain, nonatomic) NSMutableArray *bannerViews; // @synthesize bannerViews=_bannerViews;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSArray *bannerList; // @synthesize bannerList=_bannerList;
@property(retain, nonatomic) mobilechatStageTabPB *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)tabViewDidClose;
- (void)tabViewDidDisappear;
- (void)tabViewDidAppear;
- (id)createViewWithData:(id)arg1 params:(id)arg2;
- (void)adjustFrames;
- (void)reloadData;
- (id)initWithData:(id)arg1 params:(id)arg2;

@end

