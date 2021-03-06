//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class O2OTabView;
@protocol O2OAlbumTabViewDelegate;

@interface O2OAlbumTabView : UIView
{
    double ButtonHeight;
    _Bool _isSelectedTag;
    id <O2OAlbumTabViewDelegate> _delegate;
    O2OTabView *_tagView;
    O2OTabView *_filterView;
}

@property(nonatomic) _Bool isSelectedTag; // @synthesize isSelectedTag=_isSelectedTag;
@property(retain, nonatomic) O2OTabView *filterView; // @synthesize filterView=_filterView;
@property(retain, nonatomic) O2OTabView *tagView; // @synthesize tagView=_tagView;
@property(nonatomic) __weak id <O2OAlbumTabViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectedFilterTab;
- (void)selectedTipTab;
- (void)resetStauts;
- (void)bindTap:(id)arg1 action:(SEL)arg2;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

