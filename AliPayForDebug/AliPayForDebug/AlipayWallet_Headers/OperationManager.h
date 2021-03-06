//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface OperationManager : NSObject
{
    NSOperationQueue *_queue;
    struct __CFDictionary *_operationToContextMap;
}

+ (id)secondaryManager;
+ (id)sharedManager;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_queue;
- (void)operationDidFinish:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addOperation:(id)arg1 finishedTarget:(id)arg2 action:(SEL)arg3 cancelAction:(SEL)arg4 waitUntilDone:(_Bool)arg5;
- (void)addOperation:(id)arg1 finishedTarget:(id)arg2 action:(SEL)arg3 waitUntilDone:(_Bool)arg4;
- (void)addOperation:(id)arg1 finishedTarget:(id)arg2 action:(SEL)arg3;
- (void)cancelAllOperations;
- (void)addOperation:(id)arg1;
- (void)dealloc;
- (id)init;

@end

