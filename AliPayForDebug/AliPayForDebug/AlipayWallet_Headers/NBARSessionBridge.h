//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "Ant3DManagerDelegate-Protocol.h"

@class APMLock, Ant3DCameraController, Ant3DManager, JSContext, NSLock, NSMutableArray, NSString, NSThread;

@interface NBARSessionBridge : NSObject <Ant3DManagerDelegate>
{
    _Bool _isWorldTrackingMode;
    JSContext *_jscontext;
    struct OpaqueJSValue *_arObject;
    Ant3DManager *_ant3dManager;
    Ant3DCameraController *_ant3dCamera;
    NSMutableArray *_arAnchorList;
    NSLock *_arAnchorLock;
    APMLock *_jsContextLock;
    NSThread *_jscWorkerThread;
    struct CGSize _arViewSize;
}

+ (void)releaseInstance;
+ (id)currentInstance;
+ (id)createInstance;
@property(nonatomic) struct CGSize arViewSize; // @synthesize arViewSize=_arViewSize;
@property(nonatomic) _Bool isWorldTrackingMode; // @synthesize isWorldTrackingMode=_isWorldTrackingMode;
@property(retain, nonatomic) NSThread *jscWorkerThread; // @synthesize jscWorkerThread=_jscWorkerThread;
@property(retain, nonatomic) APMLock *jsContextLock; // @synthesize jsContextLock=_jsContextLock;
@property(retain, nonatomic) NSLock *arAnchorLock; // @synthesize arAnchorLock=_arAnchorLock;
@property(retain, nonatomic) NSMutableArray *arAnchorList; // @synthesize arAnchorList=_arAnchorList;
@property(retain, nonatomic) Ant3DCameraController *ant3dCamera; // @synthesize ant3dCamera=_ant3dCamera;
@property(retain, nonatomic) Ant3DManager *ant3dManager; // @synthesize ant3dManager=_ant3dManager;
@property(nonatomic) struct OpaqueJSValue *arObject; // @synthesize arObject=_arObject;
@property(retain, nonatomic) JSContext *jscontext; // @synthesize jscontext=_jscontext;
- (void).cxx_destruct;
- (void)sendFrameToJs:(id)arg1;
- (void)manager:(id)arg1 onTrackChange:(unsigned long long)arg2;
- (void)manager:(id)arg1 didUpdateFrame:(id)arg2;
- (void)manager:(id)arg1 didUpdateAnchors:(id)arg2;
- (_Bool)stopTracking;
- (id)hitTestWithPoint:(struct CGPoint)arg1;
- (_Bool)startTrackingWithViewSize:(struct CGSize)arg1;
- (void)clearManager;
- (_Bool)ensureManagerWithMode:(id)arg1;
- (_Bool)isModeSupported:(id)arg1;
- (void)initJsApi:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
