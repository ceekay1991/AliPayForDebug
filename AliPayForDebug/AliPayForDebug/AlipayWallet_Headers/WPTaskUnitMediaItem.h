//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class APVideoInfo, NSString, UIImage, UIImageView;

@interface WPTaskUnitMediaItem : UIView
{
    long long _type;
    UIImage *_sourceImage;
    APVideoInfo *_sourceVideo;
    NSString *_cloudId;
    CDUnknownBlockType _eventCallback;
    UIImageView *_displayView;
}

@property(retain, nonatomic) UIImageView *displayView; // @synthesize displayView=_displayView;
@property(copy, nonatomic) CDUnknownBlockType eventCallback; // @synthesize eventCallback=_eventCallback;
@property(retain, nonatomic) NSString *cloudId; // @synthesize cloudId=_cloudId;
@property(retain, nonatomic) APVideoInfo *sourceVideo; // @synthesize sourceVideo=_sourceVideo;
@property(retain, nonatomic) UIImage *sourceImage; // @synthesize sourceImage=_sourceImage;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)uploadImage:(CDUnknownBlockType)arg1;
- (void)uploadVideo:(CDUnknownBlockType)arg1;
- (void)uploadWithCompletion:(CDUnknownBlockType)arg1;
- (void)setupDeleteButton;
- (void)setupPlusImage;
- (void)setupThumbImage:(id)arg1;
- (void)onRemoveItem:(id)arg1;
- (void)onTouch:(id)arg1;
- (void)setup;
- (void)setMediaItemEventCallBack:(CDUnknownBlockType)arg1;
- (id)initWithType:(long long)arg1 andWidth:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

