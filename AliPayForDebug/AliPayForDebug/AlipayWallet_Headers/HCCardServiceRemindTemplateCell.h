//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HCCardViewBaseTableViewCell.h"

#import "HCCardTemplate-Protocol.h"

@class AUButton, AULabel, NSMutableArray, NSString, SUImageView, UIView;
@protocol CSCard, MFWidgetPluginProtocol;

@interface HCCardServiceRemindTemplateCell : HCCardViewBaseTableViewCell <HCCardTemplate>
{
    id <CSCard> _card;
    UIView *_backView;
    UIView *_separatorView;
    UIView<MFWidgetPluginProtocol> *_logoView;
    UIView *_bodyView;
    AULabel *_badgeLabel;
    UIView *_badgeView;
    SUImageView *_optionImageView;
    AUButton *_backButton;
    NSMutableArray *_messageBoxes;
    struct UIEdgeInsets _insets;
}

+ (struct CGSize)templateSize:(id)arg1;
+ (id)createTemplate:(id)arg1;
@property(retain, nonatomic) NSMutableArray *messageBoxes; // @synthesize messageBoxes=_messageBoxes;
@property(retain, nonatomic) AUButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) SUImageView *optionImageView; // @synthesize optionImageView=_optionImageView;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) AULabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(retain, nonatomic) UIView *bodyView; // @synthesize bodyView=_bodyView;
@property(retain, nonatomic) UIView<MFWidgetPluginProtocol> *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(retain, nonatomic) id <CSCard> card; // @synthesize card=_card;
- (void).cxx_destruct;
- (void)onClickBackButton;
- (void)layoutInset:(struct UIEdgeInsets)arg1;
- (void)reloadCard:(id)arg1;
- (double)bodyHeight;
- (double)bodyWidth;
- (_Bool)isBadgeViewHidden;
- (_Bool)isBadgeLabelHidden;
- (id)cardInfo;
- (void)layoutFrame;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

