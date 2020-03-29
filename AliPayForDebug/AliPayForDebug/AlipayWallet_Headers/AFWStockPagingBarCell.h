//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIColor, UIFont, UILabel;

@interface AFWStockPagingBarCell : UIView
{
    _Bool _isSelected;
    _Bool _isEnabled;
    long long _index;
    UIView *_contentView;
    UIView *_backgroundView;
    UIView *_selectedBackgroundView;
    UILabel *_titleLabel;
    UIColor *_titleColor;
    UIColor *_selectedTitleColor;
    UIColor *_disabledTitleColor;
    UIColor *_disabledSelectedTitleColor;
    UIFont *_titleFont;
    UIFont *_selectedTitleFont;
    CDUnknownBlockType _onSelected;
    UIButton *_selectionButton;
}

@property(retain, nonatomic) UIButton *selectionButton; // @synthesize selectionButton=_selectionButton;
@property(copy, nonatomic) CDUnknownBlockType onSelected; // @synthesize onSelected=_onSelected;
@property(retain, nonatomic) UIFont *selectedTitleFont; // @synthesize selectedTitleFont=_selectedTitleFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *disabledSelectedTitleColor; // @synthesize disabledSelectedTitleColor=_disabledSelectedTitleColor;
@property(retain, nonatomic) UIColor *disabledTitleColor; // @synthesize disabledTitleColor=_disabledTitleColor;
@property(retain, nonatomic) UIColor *selectedTitleColor; // @synthesize selectedTitleColor=_selectedTitleColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *selectedBackgroundView; // @synthesize selectedBackgroundView=_selectedBackgroundView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(readonly, nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(readonly, nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void).cxx_destruct;
- (void)updateTitleStyle;
- (void)onSelectBtnClicked;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;

@end
