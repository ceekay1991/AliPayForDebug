//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQPEmbeddedViewContext-Protocol.h"

@class MQPCommonNative, NSDictionary, NSString, UIViewController;

@interface MQPCommonNativeContext : NSObject <MQPEmbeddedViewContext>
{
    MQPCommonNative *_container;
    UIViewController *_pageVC;
}

@property(nonatomic) __weak UIViewController *pageVC; // @synthesize pageVC=_pageVC;
@property(nonatomic) __weak MQPCommonNative *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)updateHeight;
@property(readonly, nonatomic) NSDictionary *extParams;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
