//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol LogAppendDispatcher;

@interface ATLogAppendDispatcher : NSObject
{
    id <LogAppendDispatcher> _dispatcher;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <LogAppendDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
- (void).cxx_destruct;
- (void)unregisterAppenderDispatcher;
- (id)getAppendDispatcher;
- (void)registerAppendDispatcher:(id)arg1;

@end

