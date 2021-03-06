//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol APDirectoryWatcherDelegate;

@interface APDirectoryWatcher : NSObject
{
    id <APDirectoryWatcherDelegate> delegate;
    int dirFD;
    int kq;
    struct __CFFileDescriptor *dirKQRef;
    _Bool _valid;
    NSString *_watchPath;
}

+ (id)watchFolderWithPath:(id)arg1 delegate:(id)arg2;
+ (id)directoryWatcherThread;
+ (void)directoryWatcherThreadEntryPoint:(id)arg1;
@property _Bool valid; // @synthesize valid=_valid;
@property(copy, nonatomic) NSString *watchPath; // @synthesize watchPath=_watchPath;
@property(nonatomic) __weak id <APDirectoryWatcherDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (_Bool)startMonitoringDirectory:(id)arg1;
- (void)kqueueFired;

@end

