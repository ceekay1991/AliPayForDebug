//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APEdgeSync : NSObject
{
}

+ (id)sharedInstance;
- (void)parseSyncUpdate:(id)arg1;
- (void)parseSyncJsonInfo:(id)arg1;
- (void)processSyncInfo:(id)arg1;
- (void)handleSingleNotification:(id)arg1;
- (void)handleGlobalNotification:(id)arg1;
- (void)handleResourceNotification:(id)arg1;
- (void)handleConfigNotification:(id)arg1;
- (void)registerSync;
- (id)init;

@end
