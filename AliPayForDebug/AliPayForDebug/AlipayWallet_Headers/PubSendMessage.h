//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol PPSendMessageNotifyDelegate;

@interface PubSendMessage : NSObject
{
    NSMutableDictionary *_timeObjDic;
    NSMutableArray *_indexArray;
    id <PPSendMessageNotifyDelegate> _sendObj;
    long long _timeInterval;
    long long _tryCount;
}

@property(nonatomic) long long tryCount; // @synthesize tryCount=_tryCount;
@property(nonatomic) long long timeInterval; // @synthesize timeInterval=_timeInterval;
@property(nonatomic) __weak id <PPSendMessageNotifyDelegate> sendObj; // @synthesize sendObj=_sendObj;
@property(retain, nonatomic) NSMutableArray *indexArray; // @synthesize indexArray=_indexArray;
@property(retain, nonatomic) NSMutableDictionary *timeObjDic; // @synthesize timeObjDic=_timeObjDic;
- (void).cxx_destruct;
- (void)releaseSendPubMessageIndex:(id)arg1;
- (void)sendPubMessageDic:(id)arg1;
- (void)sendPubMessage:(id)arg1 index:(id)arg2;
- (id)initWith:(id)arg1;

@end
