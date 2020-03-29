//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIInputViewAudioFeedback-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIColor;
@protocol UITextInput;

@interface AFWStockNumericKeyboardBase : UIView <UIInputViewAudioFeedback>
{
    double _keyboardHeight;
    long long _keyboardKeyCount;
    double _numericButtonLayoutWidth;
    double _numericButtonLayoutHeight;
    double _keyLineCount;
    double _keyboardBottomMargin;
    _Bool _enableRandomKeyShowOrder;
    NSArray *_fixPosKeyArray;
    UIView *_contentView;
    UIColor *_sepratorLineColor;
    UIView *_toolBarView;
    id <UITextInput> _input;
    _Bool _submitEnable;
    NSMutableArray *_buttons;
    long long _mode;
}

@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool submitEnable; // @synthesize submitEnable=_submitEnable;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
- (void).cxx_destruct;
- (void)dealloc;
- (void)createButtons;
- (void)configurerMembers;
- (void)reloadKeyBoard;
- (void)setNumKeyRandom:(_Bool)arg1;
- (void)checkInput:(id)arg1;
- (void)configurerObservers;
- (void)addSubview:(id)arg1;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (double)numericButtonLayoutWidth;
- (double)numericButtonLayoutHeight;
- (void)setupContentView:(_Bool)arg1;
- (id)createToolBarView;
- (void)createProgress;
- (id)init;
- (id)initWithMode:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool enableInputClicksWhenVisible;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
