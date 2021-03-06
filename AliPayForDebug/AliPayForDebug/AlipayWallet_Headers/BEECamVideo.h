//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface BEECamVideo : NSObject
{
    _Bool _isCliped;
    NSString *_url;
    unsigned long long _size;
    long long _duration;
    UIImage *_firstFrameImage;
    long long _clipFromTime;
    long long _clipToTime;
    struct CGSize _dimensions;
}

@property(nonatomic) long long clipToTime; // @synthesize clipToTime=_clipToTime;
@property(nonatomic) long long clipFromTime; // @synthesize clipFromTime=_clipFromTime;
@property(nonatomic) _Bool isCliped; // @synthesize isCliped=_isCliped;
@property(nonatomic) struct CGSize dimensions; // @synthesize dimensions=_dimensions;
@property(retain, nonatomic) UIImage *firstFrameImage; // @synthesize firstFrameImage=_firstFrameImage;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

