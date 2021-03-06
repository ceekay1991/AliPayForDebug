//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class APChatAudioControl, NSError, NSString;

@protocol APChatAudioControlDelegate <NSObject>

@optional
- (void)audioRecordControlUpdateTime:(APChatAudioControl *)arg1 withSeconds:(long long)arg2;
- (void)audioRecordControl:(APChatAudioControl *)arg1 receivedError:(NSError *)arg2;
- (void)audioRecordControl:(APChatAudioControl *)arg1 audioControlState:(int)arg2;
- (void)audioRecordControl:(APChatAudioControl *)arg1 recordMessage:(NSString *)arg2 cloudId:(NSString *)arg3;
- (void)audioRecordControl:(APChatAudioControl *)arg1 recordMessage:(NSString *)arg2;
@end

