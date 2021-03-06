//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACCAMapConfig, ACCAMapLineResponse, NSString;

@interface ACCAMapButtonData : NSObject
{
    _Bool _greyRightTitle;
    _Bool _showScubscribe;
    _Bool _hasScubscribed;
    NSString *_cardType;
    NSString *_icon;
    NSString *_leftTitle;
    NSString *_leftTitleTag;
    NSString *_leftDesc;
    NSString *_rightTitle;
    NSString *_rightDesc;
    NSString *_action;
    unsigned long long _btnType;
    ACCAMapLineResponse *_lineResponse;
    ACCAMapConfig *_config;
}

@property(retain, nonatomic) ACCAMapConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) ACCAMapLineResponse *lineResponse; // @synthesize lineResponse=_lineResponse;
@property(nonatomic) _Bool hasScubscribed; // @synthesize hasScubscribed=_hasScubscribed;
@property(nonatomic) _Bool showScubscribe; // @synthesize showScubscribe=_showScubscribe;
@property(nonatomic) unsigned long long btnType; // @synthesize btnType=_btnType;
@property(nonatomic) _Bool greyRightTitle; // @synthesize greyRightTitle=_greyRightTitle;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *rightDesc; // @synthesize rightDesc=_rightDesc;
@property(retain, nonatomic) NSString *rightTitle; // @synthesize rightTitle=_rightTitle;
@property(retain, nonatomic) NSString *leftDesc; // @synthesize leftDesc=_leftDesc;
@property(retain, nonatomic) NSString *leftTitleTag; // @synthesize leftTitleTag=_leftTitleTag;
@property(retain, nonatomic) NSString *leftTitle; // @synthesize leftTitle=_leftTitle;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
- (void).cxx_destruct;

@end

