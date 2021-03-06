//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class APMediaMessage, APShareExtInfo, DTViewController, NSArray, NSDate, NSDictionary, NSError, NSString;

@protocol APShareServicePluginDelegate <NSObject>

@optional
- (NSError *)sendTimeLineFeed:(NSDictionary *)arg1 extendInfo:(NSDictionary *)arg2;
- (DTViewController *)shareToCombinedMultiVCWithParams:(NSDictionary *)arg1 sendCallback:(void (^)(NSDictionary *, _Bool))arg2 cancelCallback:(void (^)(NSDictionary *))arg3;
- (void)createGroupWithAddFriend:(_Bool)arg1 recordMessage:(_Bool)arg2 extendStr:(NSString *)arg3;
- (DTViewController *)shareToStrangerGroupVCWithParams:(NSDictionary *)arg1 strangerCallback:(void (^)(NSDictionary *, _Bool))arg2 sendCallback:(void (^)(NSDictionary *, _Bool))arg3 cancelCallback:(void (^)(NSDictionary *))arg4;
- (NSString *)convertDateToString:(NSDate *)arg1 format:(NSString *)arg2;
- (void)sendMultiContactMsgWithUserIds:(NSArray *)arg1 groupId:(NSString *)arg2 source:(NSString *)arg3 addFriend:(_Bool)arg4 message:(APMediaMessage *)arg5 extInfo:(APShareExtInfo *)arg6 callback:(void (^)(_Bool))arg7;
- (void)sendShareMessage:(APMediaMessage *)arg1 params:(NSDictionary *)arg2 extInfo:(APShareExtInfo *)arg3 callback:(void (^)(_Bool))arg4;
- (DTViewController *)shareToVCWithParams:(NSDictionary *)arg1 sendCallback:(void (^)(NSDictionary *, _Bool))arg2 cancelCallback:(void (^)(NSDictionary *))arg3;
@end

