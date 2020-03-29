//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HCUserPreferences, NSLock, NSString;

@interface HCUser : NSObject
{
    NSLock *_lock;
    HCUserPreferences *_preferences;
    NSString *_currentUserID;
}

+ (id)shared;
@property(copy, nonatomic) NSString *currentUserID; // @synthesize currentUserID=_currentUserID;
@property(retain, nonatomic) HCUserPreferences *preferences; // @synthesize preferences=_preferences;
- (void).cxx_destruct;
- (void)cleanPreferences;
- (id)init;

@end
