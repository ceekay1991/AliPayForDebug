//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSError, WCSessionFile, WCSessionFileTransfer, WCSessionUserInfoTransfer;

@protocol APWCSessionProtocal <NSObject>

@optional
- (void)didReceiveFile:(WCSessionFile *)arg1;
- (void)didFinishFileTransfer:(WCSessionFileTransfer *)arg1 error:(NSError *)arg2;
- (void)didReceiveUserInfo:(NSDictionary *)arg1;
- (void)didFinishUserInfoTransfer:(WCSessionUserInfoTransfer *)arg1 error:(NSError *)arg2;
- (void)didReceiveApplicationContext:(NSDictionary *)arg1;
- (void)didReceiveMessageData:(NSData *)arg1 replyHandler:(void (^)(NSData *))arg2;
- (void)didReceiveMessageData:(NSData *)arg1;
- (void)didReceiveMessage:(NSDictionary *)arg1 replyHandler:(void (^)(NSDictionary *))arg2;
- (void)didReceiveMessage:(NSDictionary *)arg1;
- (void)sessionReachabilityDidChange;
- (void)sessionWatchStateDidChange;
@end
