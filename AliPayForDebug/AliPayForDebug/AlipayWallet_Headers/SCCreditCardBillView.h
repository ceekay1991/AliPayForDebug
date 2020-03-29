//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCSimpleActionViewActionDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, UILabel, UITapGestureRecognizer;
@protocol SCCreditCardBillViewActionDelegate;

@interface SCCreditCardBillView : UIView <SCSimpleActionViewActionDelegate>
{
    NSDictionary *_data;
    id <SCCreditCardBillViewActionDelegate> _delegate;
    UIView *_titleContainer;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIView *_dataContainer;
    UIView *_actionsContainer;
    NSMutableArray *_dataLines;
    NSMutableArray *_dataViews;
    NSMutableArray *_displayDataLines;
    NSMutableArray *_displayDataViews;
    NSMutableArray *_actionLines;
    NSMutableArray *_actionViews;
    NSMutableArray *_displayActionLines;
    NSMutableArray *_displayActionViews;
    UITapGestureRecognizer *_cardTapGesture;
}

+ (struct CGSize)sizeOfTemplateDataSource:(id)arg1 viewWidth:(double)arg2;
@property(retain, nonatomic) UITapGestureRecognizer *cardTapGesture; // @synthesize cardTapGesture=_cardTapGesture;
@property(retain, nonatomic) NSMutableArray *displayActionViews; // @synthesize displayActionViews=_displayActionViews;
@property(retain, nonatomic) NSMutableArray *displayActionLines; // @synthesize displayActionLines=_displayActionLines;
@property(retain, nonatomic) NSMutableArray *actionViews; // @synthesize actionViews=_actionViews;
@property(retain, nonatomic) NSMutableArray *actionLines; // @synthesize actionLines=_actionLines;
@property(retain, nonatomic) NSMutableArray *displayDataViews; // @synthesize displayDataViews=_displayDataViews;
@property(retain, nonatomic) NSMutableArray *displayDataLines; // @synthesize displayDataLines=_displayDataLines;
@property(retain, nonatomic) NSMutableArray *dataViews; // @synthesize dataViews=_dataViews;
@property(retain, nonatomic) NSMutableArray *dataLines; // @synthesize dataLines=_dataLines;
@property(retain, nonatomic) UIView *actionsContainer; // @synthesize actionsContainer=_actionsContainer;
@property(retain, nonatomic) UIView *dataContainer; // @synthesize dataContainer=_dataContainer;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *titleContainer; // @synthesize titleContainer=_titleContainer;
@property(nonatomic) __weak id <SCCreditCardBillViewActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)simpleActionViewDidTriggerAction:(id)arg1;
- (id)createLineWithWidth:(double)arg1 hasRightGap:(_Bool)arg2;
- (void)setupActionView;
- (void)setupDataView;
- (void)setupTitleView;
- (void)layoutSubviews;
- (void)cardTapped:(id)arg1;
- (void)resetData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
