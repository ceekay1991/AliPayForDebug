//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ARScanCouponModel : NSObject
{
    _Bool _shouldShowPocket;
    _Bool _shouldShowLifeFollow;
    _Bool _lifeFollowChecked;
    unsigned long long _type;
    NSString *_titleImagePath;
    NSString *_titleText;
    NSString *_contentImagePath;
    NSString *_contentText;
    NSString *_buttonText;
    NSString *_backgroundImageName;
    NSString *_lifeFollowTitle;
}

@property(retain, nonatomic) NSString *lifeFollowTitle; // @synthesize lifeFollowTitle=_lifeFollowTitle;
@property(nonatomic) _Bool lifeFollowChecked; // @synthesize lifeFollowChecked=_lifeFollowChecked;
@property(nonatomic) _Bool shouldShowLifeFollow; // @synthesize shouldShowLifeFollow=_shouldShowLifeFollow;
@property(retain, nonatomic) NSString *backgroundImageName; // @synthesize backgroundImageName=_backgroundImageName;
@property(retain, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(retain, nonatomic) NSString *contentText; // @synthesize contentText=_contentText;
@property(retain, nonatomic) NSString *contentImagePath; // @synthesize contentImagePath=_contentImagePath;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) NSString *titleImagePath; // @synthesize titleImagePath=_titleImagePath;
@property(nonatomic) _Bool shouldShowPocket; // @synthesize shouldShowPocket=_shouldShowPocket;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

