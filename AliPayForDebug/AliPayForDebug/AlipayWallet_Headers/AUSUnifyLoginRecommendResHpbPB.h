//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString, PBMapStringString;

@interface AUSUnifyLoginRecommendResHpbPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *areaCode; // @dynamic areaCode;
@property(retain, nonatomic) NSArray *availableModes; // @dynamic availableModes;
@property(retain, nonatomic) PBMapStringString *extParams; // @dynamic extParams;
@property(readonly) _Bool hasAreaCode; // @dynamic hasAreaCode;
@property(readonly) _Bool hasExtParams; // @dynamic hasExtParams;
@property(readonly) _Bool hasLoginId; // @dynamic hasLoginId;
@property(readonly) _Bool hasMemo; // @dynamic hasMemo;
@property(readonly) _Bool hasRecommendMode; // @dynamic hasRecommendMode;
@property(readonly) _Bool hasResultStatus; // @dynamic hasResultStatus;
@property(readonly) _Bool hasSecurityId; // @dynamic hasSecurityId;
@property(readonly) _Bool hasUserId; // @dynamic hasUserId;
@property(retain, nonatomic) NSString *loginId; // @dynamic loginId;
@property(retain, nonatomic) NSString *memo; // @dynamic memo;
@property(retain, nonatomic) NSString *recommendMode; // @dynamic recommendMode;
@property(nonatomic) int resultStatus; // @dynamic resultStatus;
@property(retain, nonatomic) NSString *securityId; // @dynamic securityId;
@property(retain, nonatomic) NSString *userId; // @dynamic userId;

@end

