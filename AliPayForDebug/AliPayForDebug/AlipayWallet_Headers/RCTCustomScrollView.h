//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "AURefreshViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, TNPullLoadingView;

@interface RCTCustomScrollView : UIScrollView <UIGestureRecognizerDelegate, AURefreshViewDelegate>
{
    _Bool _centerContent;
    _Bool _retryCreateRefreshControl;
    _Bool _pinchGestureEnabled;
    TNPullLoadingView *_tnRefreshControl;
}

@property(nonatomic) _Bool pinchGestureEnabled; // @synthesize pinchGestureEnabled=_pinchGestureEnabled;
@property(nonatomic) _Bool retryCreateRefreshControl; // @synthesize retryCreateRefreshControl=_retryCreateRefreshControl;
@property(retain, nonatomic) TNPullLoadingView *tnRefreshControl; // @synthesize tnRefreshControl=_tnRefreshControl;
@property(nonatomic) _Bool centerContent; // @synthesize centerContent=_centerContent;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)auRefreshViewDidFinishAnimation:(id)arg1;
- (void)auRefreshViewDidTriggerloading:(id)arg1;
- (void)setRctRefreshControl:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)handleCustomPan:(id)arg1;
- (_Bool)_shouldDisableScrollInteraction;
- (id)contentView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

