//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface SwitchInfoRespPb : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSArray *deleteKeys; // @dynamic deleteKeys;
@property(readonly) _Bool hasIncrement; // @dynamic hasIncrement;
@property(readonly) _Bool hasProductId; // @dynamic hasProductId;
@property(readonly) _Bool hasResponseTime; // @dynamic hasResponseTime;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(nonatomic) _Bool increment; // @dynamic increment;
@property(retain, nonatomic) NSString *productId; // @dynamic productId;
@property(retain, nonatomic) NSString *responseTime; // @dynamic responseTime;
@property(nonatomic) _Bool success; // @dynamic success;
@property(retain, nonatomic) NSArray *switches; // @dynamic switches;

@end

