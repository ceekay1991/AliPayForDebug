//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface AUDeviceInfo : NSObject
{
    NSTimer *_delayTimer;
}

+ (id)deviceInfo;
+ (id)deviceInfoWithoutAsyncData;
+ (void)deviceInfoWithBlock:(CDUnknownBlockType)arg1;
+ (void)refreshDeviceInfo;
+ (void)delayRefreshDeviceInfo;
+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *delayTimer; // @synthesize delayTimer=_delayTimer;
- (void).cxx_destruct;
- (void)refreshDeviceInfo;
- (void)delayRefreshDeviceInfo;

@end

