//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AUAntRefreshLottieView, UIScrollView;
@protocol AURefreshViewDelegate;

@interface AURefreshView : UIView
{
    double _lastOffset;
    unsigned long long _viewType;
    struct CGPoint _originOffset;
    CDUnknownBlockType _completion;
    _Bool _changeTypeWhenReady;
    AUAntRefreshLottieView *_antLottieView;
    _Bool _audioPlaying;
    _Bool _scrollToTop;
    _Bool _animationComplete;
    _Bool _isVisible;
    unsigned long long _state;
    id <AURefreshViewDelegate> _delegate;
    UIScrollView *_scrollView;
    CDUnknownBlockType _refreshBlock;
    struct UIEdgeInsets _originEdgeInset;
}

@property(copy, nonatomic) CDUnknownBlockType refreshBlock; // @synthesize refreshBlock=_refreshBlock;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(nonatomic) _Bool animationComplete; // @synthesize animationComplete=_animationComplete;
@property(nonatomic) _Bool scrollToTop; // @synthesize scrollToTop=_scrollToTop;
@property(nonatomic) _Bool audioPlaying; // @synthesize audioPlaying=_audioPlaying;
@property(nonatomic) struct UIEdgeInsets originEdgeInset; // @synthesize originEdgeInset=_originEdgeInset;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(nonatomic) __weak id <AURefreshViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopAnimating;
- (void)dispenseAnimationByState;
- (void)startAnimation:(id)arg1;
- (void)animationFinished;
- (void)performResetScrollView;
- (void)checkResetContentOffsetY;
- (void)resetScrollView;
- (void)resetScrollViewposition;
- (id)animationCurrentFrame;
- (void)autoPullRefreshScrollView:(id)arg1;
- (void)auRefreshScrollViewDidFinishedLoading:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)auRefreshScrollViewDidFinishedLoading:(id)arg1;
- (void)scrollHandler;
- (void)auRefreshScrollViewDidEndDecelerating:(id)arg1;
- (void)auRefreshScrollViewDidEndDragging:(id)arg1;
- (void)auRefreshScrollViewDidScroll:(id)arg1;
- (void)auRefreshScrollViewWillBeginDragging:(id)arg1;
- (void)beginDraggingStateUpdate:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (void)setupLabelForeColor:(id)arg1;
- (void)setupLabelText:(id)arg1;
- (void)changeType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSuperView:(id)arg1 type:(unsigned long long)arg2 bizType:(id)arg3;

@end

