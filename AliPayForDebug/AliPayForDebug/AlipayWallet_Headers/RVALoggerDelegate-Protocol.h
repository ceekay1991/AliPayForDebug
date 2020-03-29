//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol RVALoggerDelegate <NSObject>

@optional
- (void)behaviorWithData:(NSDictionary *)arg1 contentView:(id)arg2 callback:(void (^)(id))arg3;
- (void)behaviorWithType:(NSString *)arg1 commonDatas:(NSDictionary *)arg2 extDatas:(NSDictionary *)arg3 currentVC:(id)arg4;
- (void)performanceWithType:(NSString *)arg1 commonDatas:(NSDictionary *)arg2 properties:(NSDictionary *)arg3 stages:(NSDictionary *)arg4 events:(NSDictionary *)arg5;
- (void)errorWithType:(NSString *)arg1 code:(NSString *)arg2 msg:(NSString *)arg3 commonDatas:(NSDictionary *)arg4 extDatas:(NSDictionary *)arg5;
@end
