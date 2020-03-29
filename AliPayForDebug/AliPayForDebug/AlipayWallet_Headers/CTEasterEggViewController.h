//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTMessageBaseViewController.h"

@class APSocialEmojiRainMgr, NSString;

@interface CTEasterEggViewController : CTMessageBaseViewController
{
    long long _dataCount;
    _Bool _viewDidAppear;
    APSocialEmojiRainMgr *_emojiRainMgr;
    NSString *_emojiRainTrigger;
    NSString *_emojiTag;
}

@property(retain, nonatomic) NSString *emojiTag; // @synthesize emojiTag=_emojiTag;
@property(retain, nonatomic) NSString *emojiRainTrigger; // @synthesize emojiRainTrigger=_emojiRainTrigger;
@property(retain, nonatomic) APSocialEmojiRainMgr *emojiRainMgr; // @synthesize emojiRainMgr=_emojiRainMgr;
- (void).cxx_destruct;
- (void)dismissEgg;
- (void)checkEggResults:(id)arg1 includeSelf:(_Bool)arg2 isFristTime:(_Bool)arg3;
- (void)reciveGifPreviewTapNot:(id)arg1;
- (_Bool)shouldShowEmotionPreview;
- (void)groupViewDidChanage:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillDestroy;
- (void)viewDidAppear:(_Bool)arg1;
- (void)resumeWithOptions:(id)arg1 isResume:(_Bool)arg2;
- (void)setupUI;
- (void)viewDidLoad;
- (void)removeNotification;
- (void)setupNotify;

@end
