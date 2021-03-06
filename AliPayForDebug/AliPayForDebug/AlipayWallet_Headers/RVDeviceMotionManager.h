//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMDeviceMotion, CMMotionManager, NSOperationQueue;

@interface RVDeviceMotionManager : NSObject
{
    CMMotionManager *_motionManager;
    NSOperationQueue *_queue;
    CMDeviceMotion *_lastDeviceMotion;
    CDUnknownBlockType _callback;
    double _interval;
}

@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) CMDeviceMotion *lastDeviceMotion; // @synthesize lastDeviceMotion=_lastDeviceMotion;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
- (void).cxx_destruct;
- (_Bool)compareMotion:(id)arg1 lastMotion:(id)arg2;
- (void)stopDeviceMotion;
- (void)startDeviceMotion;
- (void)startDeviceMotionWithInterval:(double)arg1 callback:(CDUnknownBlockType)arg2;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)dealloc;
- (id)init;

@end

