//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AUScalingModel, AUV2FlowLayout, AUV2SegmentConfig, NSArray, NSString, UIView;
@protocol AUV2SegmentDelegate;

@interface AUV2Segment : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    NSArray *_dataList;
    UIView *_shadowView;
    AUV2FlowLayout *_layout;
    long long _layoutType;
    double _offset;
    double _originHeight;
    double _constHeight;
    UIView *_barView;
    UIView *_bottomLine;
    long long _highlightedItemIndexOnNearBy;
    AUScalingModel *_scalingModel;
    unsigned long long _preSelectedItemIndex;
    _Bool _ignoreMovement;
    long long _segmentType;
    id <AUV2SegmentDelegate> _clickDelegate;
    long long _selectedItemIndex;
    AUV2SegmentConfig *_config;
}

@property(retain, nonatomic) AUV2SegmentConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) AUScalingModel *scalingModel; // @synthesize scalingModel=_scalingModel;
@property(nonatomic) long long selectedItemIndex; // @synthesize selectedItemIndex=_selectedItemIndex;
@property(nonatomic) __weak id <AUV2SegmentDelegate> clickDelegate; // @synthesize clickDelegate=_clickDelegate;
@property(readonly, nonatomic) long long segmentType; // @synthesize segmentType=_segmentType;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)layoutSubviews;
- (void)changeBarViewOffsetX:(double)arg1;
- (double)currentCenterXForItemIndex:(long long)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)loadData:(id)arg1;
- (_Bool)isAvgMode;
- (double)changeFrameHeight:(double)arg1;
- (void)layoutBarView:(id)arg1;
- (void)selectedItemIndex:(long long)arg1 callDelegate:(_Bool)arg2;
- (void)selectAtItem:(long long)arg1;
- (void)deselectAtItem:(long long)arg1;
- (void)collectionScrollable:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithType:(long long)arg1 layoutType:(long long)arg2 config:(CDUnknownBlockType)arg3;
- (id)initWithType:(long long)arg1 layoutType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

