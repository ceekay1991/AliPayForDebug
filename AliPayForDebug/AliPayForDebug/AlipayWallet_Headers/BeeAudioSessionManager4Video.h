//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APMAudioSessionManagerDelegate-Protocol.h"
#import "IBeeAudioSessionManager-Protocol.h"

@class NSString;

@interface BeeAudioSessionManager4Video : NSObject <APMAudioSessionManagerDelegate, IBeeAudioSessionManager>
{
    _Bool _enable;
    _Bool _isActive;
    long long _requestCount;
}

+ (id)sharedManager;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) long long requestCount; // @synthesize requestCount=_requestCount;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
- (void)realHandleActive;
- (void)resignActive;
- (void)requestActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
