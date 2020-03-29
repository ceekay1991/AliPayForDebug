//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "ThemeChangeObserver-Protocol.h"

@class AFWAntPlateSectorModel, NSString, UILabel;

@interface AFWAntPlateItemView : UIButton <ThemeChangeObserver>
{
    CDUnknownBlockType _clickHandler;
    AFWAntPlateSectorModel *_model;
    UILabel *_nameLabel;
    UILabel *_leadingStockNameLabel;
    UILabel *_leadingStockPriceLabel;
}

@property(retain, nonatomic) UILabel *leadingStockPriceLabel; // @synthesize leadingStockPriceLabel=_leadingStockPriceLabel;
@property(retain, nonatomic) UILabel *leadingStockNameLabel; // @synthesize leadingStockNameLabel=_leadingStockNameLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) AFWAntPlateSectorModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType clickHandler; // @synthesize clickHandler=_clickHandler;
- (void).cxx_destruct;
- (void)nextAction:(id)arg1;
- (void)handleChangeTheme:(id)arg1;
- (void)setThemeColor;
- (void)updateItemWithModel:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
