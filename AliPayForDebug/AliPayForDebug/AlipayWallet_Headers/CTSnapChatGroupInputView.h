//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTGroupInputView.h"

@class UIButton;

@interface CTSnapChatGroupInputView : CTGroupInputView
{
    UIButton *_voiceBtn;
    UIButton *_picVideoEntryBtn;
    UIButton *_exitSnapChatBtn;
}

+ (id)makeExitSnapChatButtonWith:(struct CGRect)arg1;
+ (id)makePicVideoEntryButtonWith:(struct CGRect)arg1;
@property(retain, nonatomic) UIButton *exitSnapChatBtn; // @synthesize exitSnapChatBtn=_exitSnapChatBtn;
@property(retain, nonatomic) UIButton *picVideoEntryBtn; // @synthesize picVideoEntryBtn=_picVideoEntryBtn;
- (void).cxx_destruct;
- (void)onExitSnapChatTapped:(id)arg1;
- (void)onSnapChatPicTapped:(id)arg1;
- (void)setupUI;
- (id)record;
- (id)collectViewInfos;

@end
