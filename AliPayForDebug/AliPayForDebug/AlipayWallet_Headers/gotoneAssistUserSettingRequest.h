//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface gotoneAssistUserSettingRequest : NSObject
{
    NSString *_settingType;
    NSString *_settingValue;
    NSString *_assistId;
}

@property(retain, nonatomic) NSString *assistId; // @synthesize assistId=_assistId;
@property(retain, nonatomic) NSString *settingValue; // @synthesize settingValue=_settingValue;
@property(retain, nonatomic) NSString *settingType; // @synthesize settingType=_settingType;
- (void).cxx_destruct;

@end

