//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class H5JSCBridge;

@interface H5JSCRemoteDebugerAgent : NSObject
{
    H5JSCBridge *_bridge;
}

@property(nonatomic) __weak H5JSCBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)callJsapiAsyncWithCallInfo:(id)arg1;
- (id)initWithBridge:(id)arg1;

@end
