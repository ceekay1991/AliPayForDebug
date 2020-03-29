//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface TaskBoxTaskInstance : NSObject
{
    NSDictionary *_taskFlow;
    NSString *_taskId;
    NSString *_taskData;
    NSDictionary *_taskDataMap;
    NSArray *_taskStateList;
    NSString *_taskStateKey;
    NSString *_taskCurrentState;
}

@property(readonly, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;
- (void)dealloc;
- (void)commitCurrentState:(id)arg1;
- (void)deactive;
- (void)changeState:(id)arg1 args:(id)arg2;
- (void)active;
- (id)queryScriptList:(id)arg1;
- (void)parseTask;
- (id)initWithTaskFlow:(id)arg1;

@end
