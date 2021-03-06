//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager;
@protocol APBGyrometerDelegate;

@interface APBGyrometerService : NSObject
{
    _Bool _isRunning;
    id <APBGyrometerDelegate> _delegate;
    double _currentAngle;
    CMMotionManager *_motionManager;
}

@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(nonatomic) double currentAngle; // @synthesize currentAngle=_currentAngle;
@property(nonatomic) __weak id <APBGyrometerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (id)init;

@end

