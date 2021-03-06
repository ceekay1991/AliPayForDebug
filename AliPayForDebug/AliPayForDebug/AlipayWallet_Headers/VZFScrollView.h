//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "VZFAppearProtocol-Protocol.h"
#import "VZFNodeBackingViewInterface-Protocol.h"

@class NSMutableArray, NSString, VZFAppearListenerManager;

@interface VZFScrollView : UIScrollView <VZFNodeBackingViewInterface, VZFAppearProtocol>
{
    int _scrollDirection;
    NSMutableArray *_visibleViews;
    struct CGPoint _prevScrollTo;
    double _prevScrollTop;
    double _prevScrollLeft;
    _Bool _prevIsLeftInThreshold;
    _Bool _prevIsRightInThreshold;
    _Bool _prevIsTopInThreshold;
    _Bool _prevIsBottomInThreshold;
    VZFAppearListenerManager *_appearManager;
    double _upperThreshold;
    double _lowerThreshold;
    CDUnknownBlockType _onScroll;
    CDUnknownBlockType _onScrollToUpper;
    CDUnknownBlockType _onScrollToLower;
}

@property(copy, nonatomic) CDUnknownBlockType onScrollToLower; // @synthesize onScrollToLower=_onScrollToLower;
@property(copy, nonatomic) CDUnknownBlockType onScrollToUpper; // @synthesize onScrollToUpper=_onScrollToUpper;
@property(copy, nonatomic) CDUnknownBlockType onScroll; // @synthesize onScroll=_onScroll;
@property(nonatomic) double lowerThreshold; // @synthesize lowerThreshold=_lowerThreshold;
@property(nonatomic) double upperThreshold; // @synthesize upperThreshold=_upperThreshold;
- (void).cxx_destruct;
@property(readonly, nonatomic) VZFAppearListenerManager *appearListeners;
@property(readonly, nonatomic) unsigned long long appearViewType;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)updateVisibleViews;
- (void)startUpdateVisibleViews;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)vz_applyNodeAttributes:(id)arg1;
- (void)resetState;
- (void)didLeaveReusePool;
- (void)willEnterReusePool;
- (void)prepareForReuse;
- (void)dead;
- (void)born;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) struct CGPoint vzScrollOffset;

@end

