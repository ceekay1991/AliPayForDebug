//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVKJSApiRequestBase.h"

@class NSArray, NSNumber, NSString;

@interface RVPJSApiReqActionSheet : RVKJSApiRequestBase
{
    NSString *_title;
    NSArray *_btns;
    NSString *_cancelBtn;
    NSNumber *_destructiveBtnIndex;
    NSArray *_badges;
}

@property(retain, nonatomic) NSArray *badges; // @synthesize badges=_badges;
@property(retain, nonatomic) NSNumber *destructiveBtnIndex; // @synthesize destructiveBtnIndex=_destructiveBtnIndex;
@property(retain, nonatomic) NSString *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) NSArray *btns; // @synthesize btns=_btns;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
