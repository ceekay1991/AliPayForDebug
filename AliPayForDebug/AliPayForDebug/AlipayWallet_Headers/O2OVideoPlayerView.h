//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class APVideoPlayer, NSString, UIImage, UIImageView;

@interface O2OVideoPlayerView : UIView
{
    _Bool _allowToPlayVideo;
    APVideoPlayer *_playerView;
    NSString *_videoUrlStr;
    NSString *_imageUrlStr;
    UIImage *_defaultImage;
    UIImageView *_bgImageView;
}

@property(nonatomic) _Bool allowToPlayVideo; // @synthesize allowToPlayVideo=_allowToPlayVideo;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(copy, nonatomic) NSString *imageUrlStr; // @synthesize imageUrlStr=_imageUrlStr;
@property(copy, nonatomic) NSString *videoUrlStr; // @synthesize videoUrlStr=_videoUrlStr;
@property(retain, nonatomic) APVideoPlayer *playerView; // @synthesize playerView=_playerView;
- (void).cxx_destruct;
- (_Bool)allowToPlayWithUrl:(id)arg1;
- (_Bool)localCacheFileWith:(id)arg1;
- (_Bool)playIfHasCache;
- (_Bool)networkIsWifi;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)loadBgImageView;
- (_Bool)isPlaying;
- (void)pausePlay;
- (void)startPlay;
- (void)prePlay;
- (void)setConfig:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
