//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BeeLottiePlayer, NSString, UIImageView;

@interface TFHomeATAnimationView : UIView
{
    _Bool _isLottieAvailable;
    UIImageView *_imgViewBackup;
    NSString *_lottieDjangoId;
    NSString *_backupImageDjangoId;
    BeeLottiePlayer *_lotPlayer;
}

@property(retain, nonatomic) BeeLottiePlayer *lotPlayer; // @synthesize lotPlayer=_lotPlayer;
@property(nonatomic) _Bool isLottieAvailable; // @synthesize isLottieAvailable=_isLottieAvailable;
@property(copy, nonatomic) NSString *backupImageDjangoId; // @synthesize backupImageDjangoId=_backupImageDjangoId;
@property(copy, nonatomic) NSString *lottieDjangoId; // @synthesize lottieDjangoId=_lottieDjangoId;
@property(retain, nonatomic) UIImageView *imgViewBackup; // @synthesize imgViewBackup=_imgViewBackup;
- (void).cxx_destruct;
- (void)loadLottieFirstFrame;
- (void)loadBackUpImage:(id)arg1;
- (void)lottieViewPlay:(id)arg1 isPlayFirstFrame:(_Bool)arg2;
- (id)genLottiePlayerParams;
- (void)updateFrame;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)stopAnimation;
- (void)playAnimation;
- (void)configWithLottieDjangoId:(id)arg1 backupImageDjangoId:(id)arg2 isLottieAvailable:(_Bool)arg3;

@end
