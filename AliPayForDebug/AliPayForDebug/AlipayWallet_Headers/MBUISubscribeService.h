//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MBSubscribeAlertView, NSLock, NSMutableArray;

@interface MBUISubscribeService : NSObject
{
    NSMutableArray *_messages;
    NSLock *_messagesLock;
    NSLock *_handMessageLock;
    MBSubscribeAlertView *_alertView;
}

@property(retain, nonatomic) MBSubscribeAlertView *alertView; // @synthesize alertView=_alertView;
- (void).cxx_destruct;
- (void)requestUIComponentFinished:(id)arg1 message:(id)arg2;
- (void)tryShowErrorToastAndCallBack:(id)arg1 resultCode:(long long)arg2 resultDesc:(id)arg3;
- (void)callBack:(id)arg1 resultCode:(long long)arg2 resultDesc:(id)arg3;
- (void)handleMessage:(id)arg1;
- (void)tryHandleMessage;
- (_Bool)subscribe:(id)arg1 silent:(_Bool)arg2 complate:(CDUnknownBlockType)arg3;
- (id)init;

@end

