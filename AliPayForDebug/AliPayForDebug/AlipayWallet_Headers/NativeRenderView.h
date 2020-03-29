//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;
@protocol VideoPlayerViewDelegate;

@interface NativeRenderView : UIView
{
    NSString *_fillMode;
    id <VideoPlayerViewDelegate> _delegate;
}

+ (Class)layerClass;
@property(nonatomic) __weak id <VideoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *fillMode; // @synthesize fillMode=_fillMode;
- (void).cxx_destruct;
- (void)willAppear;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)initLayer;
- (void)setVideoPlayer:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
