//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface ARTVCROOMGetSignRespPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(nonatomic) int code; // @dynamic code;
@property(readonly) _Bool hasCode; // @dynamic hasCode;
@property(readonly) _Bool hasMsg; // @dynamic hasMsg;
@property(readonly) _Bool hasRequestId; // @dynamic hasRequestId;
@property(readonly) _Bool hasSign; // @dynamic hasSign;
@property(readonly) _Bool hasTimeout; // @dynamic hasTimeout;
@property(retain, nonatomic) NSString *msg; // @dynamic msg;
@property(nonatomic) long long requestId; // @dynamic requestId;
@property(retain, nonatomic) NSString *sign; // @dynamic sign;
@property(nonatomic) int timeout; // @dynamic timeout;

@end

