//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NXRLogProtocol-Protocol.h"
#import "RVKLoggerProtocol-Protocol.h"
#import "RVRLogManagerDelegate-Protocol.h"

@class NSString;
@protocol RVALocalLogDelegate, RVAMonitorDelegate;

@interface RVAMonitor : NSObject <NXRLogProtocol, RVRLogManagerDelegate, RVKLoggerProtocol>
{
    id <RVAMonitorDelegate> _delegate;
    id <RVALocalLogDelegate> _localLogDelegate;
}

+ (id)allocPrivate;
+ (id)defaultMonitor;
@property(nonatomic) __weak id <RVALocalLogDelegate> localLogDelegate; // @synthesize localLogDelegate=_localLogDelegate;
@property(nonatomic) __weak id <RVAMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)doLogWithLogId:(id)arg1 params:(id)arg2;
- (void)log:(id)arg1;
- (void)localLog:(id)arg1;
- (void)logWithLogId:(id)arg1 params:(id)arg2 target:(id)arg3;
- (void)logWithLogId:(id)arg1 params:(id)arg2;
- (id)initPrivate;
- (void)logContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

