//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVAPluginBase.h"

@class RVKSession;

@interface RVPlugin4TinyAppPerformance : RVAPluginBase
{
    RVKSession *_currentSession;
}

@property(nonatomic) __weak RVKSession *currentSession; // @synthesize currentSession=_currentSession;
- (void).cxx_destruct;
- (void)sendAppLaunchData:(id)arg1;
- (void)handleEvent:(id)arg1;
- (void)observerResignActive:(id)arg1;
- (void)dealloc;
- (void)pluginDidLoad;

@end

