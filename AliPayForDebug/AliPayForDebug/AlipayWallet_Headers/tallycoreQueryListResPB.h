//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString, tallycorePagingConditionPB;

@interface tallycoreQueryListResPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *billByMonthJumpUrl; // @dynamic billByMonthJumpUrl;
@property(retain, nonatomic) NSArray *billListItems; // @dynamic billListItems;
@property(nonatomic) int code; // @dynamic code;
@property(retain, nonatomic) NSString *consumeVersion; // @dynamic consumeVersion;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSString *followAction; // @dynamic followAction;
@property(readonly) _Bool hasBillByMonthJumpUrl; // @dynamic hasBillByMonthJumpUrl;
@property(readonly) _Bool hasCode; // @dynamic hasCode;
@property(readonly) _Bool hasConsumeVersion; // @dynamic hasConsumeVersion;
@property(readonly) _Bool hasDesc; // @dynamic hasDesc;
@property(readonly) _Bool hasFollowAction; // @dynamic hasFollowAction;
@property(readonly) _Bool hasNextQueryPageType; // @dynamic hasNextQueryPageType;
@property(readonly) _Bool hasPaging; // @dynamic hasPaging;
@property(readonly) _Bool hasPb_hasMore; // @dynamic hasPb_hasMore;
@property(readonly) _Bool hasSucc; // @dynamic hasSucc;
@property(readonly) _Bool hasTimeRangeTip; // @dynamic hasTimeRangeTip;
@property(retain, nonatomic) NSString *nextQueryPageType; // @dynamic nextQueryPageType;
@property(retain, nonatomic) tallycorePagingConditionPB *paging; // @dynamic paging;
@property(nonatomic) _Bool pb_hasMore; // @dynamic pb_hasMore;
@property(nonatomic) _Bool succ; // @dynamic succ;
@property(retain, nonatomic) NSString *timeRangeTip; // @dynamic timeRangeTip;

@end

