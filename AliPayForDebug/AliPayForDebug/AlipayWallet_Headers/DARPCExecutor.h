//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DARPCExecutor : NSObject
{
}

+ (void)executeBlockOnReportQueue:(CDUnknownBlockType)arg1;
+ (void)executeBlockOnRPCQueue:(CDUnknownBlockType)arg1;
+ (void)executeReportByParams:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)executeRPCCallByRequest:(id)arg1 showLoading:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;

@end

