//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "gotoneCommonResult.h"

@class NSArray, NSString;

@interface gotoneAssistSettingResult : gotoneCommonResult
{
    _Bool _reminderTypeModifyEnable;
    _Bool _showSubscribeEntrance;
    NSString *_title;
    NSString *_assistId;
    NSString *_icon;
    NSString *_desc;
    NSString *_reminderType;
    NSArray *_bizSpecialEntranceList;
}

+ (Class)bizSpecialEntranceListElementClass;
@property(retain, nonatomic) NSArray *bizSpecialEntranceList; // @synthesize bizSpecialEntranceList=_bizSpecialEntranceList;
@property(nonatomic) _Bool showSubscribeEntrance; // @synthesize showSubscribeEntrance=_showSubscribeEntrance;
@property(retain, nonatomic) NSString *reminderType; // @synthesize reminderType=_reminderType;
@property(nonatomic) _Bool reminderTypeModifyEnable; // @synthesize reminderTypeModifyEnable=_reminderTypeModifyEnable;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *assistId; // @synthesize assistId=_assistId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
