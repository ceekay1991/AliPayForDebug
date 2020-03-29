//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface O2OMapSearchShopsContainerTitleView : UIView
{
    UILabel *_titleLabel;
    UIView *_bottomLine;
    CDUnknownBlockType _onTouchesBegin;
    CDUnknownBlockType _onTouchesMoved;
    CDUnknownBlockType _onTouchesEnded;
    CDUnknownBlockType _onTouchesCancelled;
}

@property(copy, nonatomic) CDUnknownBlockType onTouchesCancelled; // @synthesize onTouchesCancelled=_onTouchesCancelled;
@property(copy, nonatomic) CDUnknownBlockType onTouchesEnded; // @synthesize onTouchesEnded=_onTouchesEnded;
@property(copy, nonatomic) CDUnknownBlockType onTouchesMoved; // @synthesize onTouchesMoved=_onTouchesMoved;
@property(copy, nonatomic) CDUnknownBlockType onTouchesBegin; // @synthesize onTouchesBegin=_onTouchesBegin;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
