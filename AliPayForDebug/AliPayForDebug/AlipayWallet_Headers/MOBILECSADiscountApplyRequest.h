//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MOBILECSABaseRpcRequest.h"

@class NSString;

@interface MOBILECSADiscountApplyRequest : MOBILECSABaseRpcRequest
{
    NSString *_shopId;
    NSString *_itemId;
    NSString *_buryPointJsonString;
    NSString *_dtLogMonitor;
    NSString *_appId;
    NSString *_channel;
    NSString *_tableNo;
    NSString *_code;
    NSString *_bizScene;
    NSString *_srcSem;
}

@property(retain, nonatomic) NSString *srcSem; // @synthesize srcSem=_srcSem;
@property(retain, nonatomic) NSString *bizScene; // @synthesize bizScene=_bizScene;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *tableNo; // @synthesize tableNo=_tableNo;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *dtLogMonitor; // @synthesize dtLogMonitor=_dtLogMonitor;
@property(retain, nonatomic) NSString *buryPointJsonString; // @synthesize buryPointJsonString=_buryPointJsonString;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;

@end
