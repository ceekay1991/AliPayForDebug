//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMistListItem.h"

@class NSString;

@interface O2OLCRecommendTopicItem : O2OMistListItem
{
    NSString *_themeId;
    NSString *_title;
    NSString *_desc;
    long long _participantsNumber;
    NSString *_promoCode;
}

@property(copy, nonatomic) NSString *promoCode; // @synthesize promoCode=_promoCode;
@property(nonatomic) long long participantsNumber; // @synthesize participantsNumber=_participantsNumber;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *themeId; // @synthesize themeId=_themeId;
- (void).cxx_destruct;

@end

