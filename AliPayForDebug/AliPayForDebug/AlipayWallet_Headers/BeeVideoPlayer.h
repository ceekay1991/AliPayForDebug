//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APVideoPlayerDelegate-Protocol.h"
#import "IBeeVideoPlayer-Protocol.h"

@class APVideoPlayer, NSArray, NSDictionary, NSString, UIImage, UIImageView;
@protocol BeeVideoPlayerDelegate;

@interface BeeVideoPlayer : NSObject <APVideoPlayerDelegate, IBeeVideoPlayer>
{
    _Bool _isAutoPlay;
    double _playbackRate;
    _Bool _isStarted;
    id <BeeVideoPlayerDelegate> _delegate;
    long long _state;
    APVideoPlayer *_apPlayer;
    NSString *_url;
}

@property(nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) APVideoPlayer *apPlayer; // @synthesize apPlayer=_apPlayer;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <BeeVideoPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)BEEStateFromAPState:(unsigned long long)arg1;
- (struct CGPoint)getVideoPointWithPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (void)videoPlayer:(id)arg1 loadedTime:(double)arg2;
- (void)videoPlayerDidReadyToPlay:(id)arg1;
- (void)videoPlayerStateChangedTo:(unsigned long long)arg1 oldStatus:(unsigned long long)arg2;
- (void)videoPlayerDidFinishToEnd:(id)arg1;
- (void)videoPlayer:(id)arg1 playedCurrentTime:(double)arg2;
- (void)videoPlayerDidStartToPlay:(id)arg1;
- (void)videoPlayer:(id)arg1 failedWithError:(id)arg2;
- (void)setLiveMaxCache:(float)arg1;
- (void)setLiveMinCache:(float)arg1;
@property(copy, nonatomic) NSString *displayQuality;
@property(copy, nonatomic) NSString *quality;
@property(readonly, copy, nonatomic) NSArray *allQualityList;
- (void)captureVideoWithSize:(struct CGSize)arg1;
@property(readonly, copy, nonatomic) NSDictionary *logInfo;
@property(readonly, nonatomic) long long videoStorageSize;
@property(readonly, nonatomic) struct CGSize videoSize;
@property(nonatomic) double playbackRate;
@property(readonly, nonatomic) _Bool isCached;
- (void)seekEnd;
- (void)seekToTime:(double)arg1;
- (void)setVideoUrl:(id)arg1 withBusiness:(id)arg2 andExtraInfo:(id)arg3;
- (void)setVideoUrl:(id)arg1 withBusiness:(id)arg2;
@property(nonatomic) long long currentInterfaceOrientation;
@property(readonly, nonatomic) UIImageView *thumbnailView;
@property(nonatomic) double durationWatchedInterval;
@property(readonly, nonatomic) double currentPosition;
- (void)layoutViewWithBounds:(struct CGRect)arg1 isRotate:(_Bool)arg2 andIsFullScreen:(_Bool)arg3;
@property(nonatomic) unsigned long long renderEffect;
@property(retain, nonatomic) UIImage *placeholder;
@property(nonatomic) _Bool isFillScreen;
- (_Bool)isPlayFromCache;
@property(nonatomic) _Bool isMuted;
@property(nonatomic) _Bool isAutoReplay;
@property(nonatomic) _Bool isAutoPlay;
@property(nonatomic) long long videoType;
- (id)displayView;
- (void)stop;
- (void)pause;
- (void)play;
- (void)resume;
- (void)interrupt;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

