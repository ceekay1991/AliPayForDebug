//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVAPluginBase.h"

@interface RVPPlugin4TabBar : RVAPluginBase
{
}

- (void)setTabBar:(id)arg1 lineColor:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)colorWithHexString:(id)arg1;
- (void)setTabBar:(id)arg1 borderStyle:(id)arg2;
- (void)setTabBarItem:(id)arg1 text:(id)arg2 icon:(id)arg3 activeIcon:(id)arg4 scale:(float)arg5 activeScale:(float)arg6 vc:(id)arg7 callback:(CDUnknownBlockType)arg8;
- (void)setTabBarStyle:(id)arg1 selectedColor:(id)arg2 backgroundColor:(id)arg3 borderStyle:(id)arg4 vc:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)setBadgeValue:(id)arg1 index:(id)arg2 vc:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)addJSApis;
- (void)parseTabBarDict:(id)arg1 launchParams:(id)arg2 curSession:(id)arg3 finished:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;
- (void)handleEvent:(id)arg1;
- (void)pluginDidLoad;

@end
