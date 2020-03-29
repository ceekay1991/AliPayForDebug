//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

#import "NSCoding-Protocol.h"

@class NSArray, NSString, PBMapStringString, WEALTHFundProfitChartInfoPB, WEALTHIncomeTipPB, WEALTHPasswordTokenCreatorPB;

@interface WEALTHFundHomeInfoV99ResultPB : APDPBGeneratedMessage <NSCoding>
{
}

+ (CDStruct_af61540b *)_fieldInfos;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSArray *assetManages; // @dynamic assetManages;
@property(retain, nonatomic) NSString *availableAmount; // @dynamic availableAmount;
@property(retain, nonatomic) PBMapStringString *extraInfo; // @dynamic extraInfo;
@property(retain, nonatomic) NSString *followAction; // @dynamic followAction;
@property(retain, nonatomic) NSString *formToken; // @dynamic formToken;
@property(retain, nonatomic) WEALTHFundProfitChartInfoPB *fundProfitChartInfo; // @dynamic fundProfitChartInfo;
@property(readonly) _Bool hasAvailableAmount; // @dynamic hasAvailableAmount;
@property(readonly) _Bool hasExtraInfo; // @dynamic hasExtraInfo;
@property(readonly) _Bool hasFollowAction; // @dynamic hasFollowAction;
@property(readonly) _Bool hasFormToken; // @dynamic hasFormToken;
@property(readonly) _Bool hasFundProfitChartInfo; // @dynamic hasFundProfitChartInfo;
@property(readonly) _Bool hasIncomeTip; // @dynamic hasIncomeTip;
@property(readonly) _Bool hasPasswordTokenCreator; // @dynamic hasPasswordTokenCreator;
@property(readonly) _Bool hasPreviousProfit; // @dynamic hasPreviousProfit;
@property(readonly) _Bool hasResultCode; // @dynamic hasResultCode;
@property(readonly) _Bool hasResultDesc; // @dynamic hasResultDesc;
@property(readonly) _Bool hasResultView; // @dynamic hasResultView;
@property(readonly) _Bool hasSecurityVerifyId; // @dynamic hasSecurityVerifyId;
@property(readonly) _Bool hasShowType; // @dynamic hasShowType;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(readonly) _Bool hasTotalAmount; // @dynamic hasTotalAmount;
@property(readonly) _Bool hasTotalAmoutHidden; // @dynamic hasTotalAmoutHidden;
@property(readonly) _Bool hasTotalFreezeAmount; // @dynamic hasTotalFreezeAmount;
@property(readonly) _Bool hasTotalProfit; // @dynamic hasTotalProfit;
@property(readonly) _Bool hasUnitYieldRate; // @dynamic hasUnitYieldRate;
@property(readonly) _Bool hasWeekRate; // @dynamic hasWeekRate;
@property(retain, nonatomic) WEALTHIncomeTipPB *incomeTip; // @dynamic incomeTip;
@property(retain, nonatomic) NSArray *menuItemList; // @dynamic menuItemList;
@property(retain, nonatomic) WEALTHPasswordTokenCreatorPB *passwordTokenCreator; // @dynamic passwordTokenCreator;
@property(retain, nonatomic) NSString *previousProfit; // @dynamic previousProfit;
@property(retain, nonatomic) NSString *resultCode; // @dynamic resultCode;
@property(retain, nonatomic) NSString *resultDesc; // @dynamic resultDesc;
@property(retain, nonatomic) NSString *resultView; // @dynamic resultView;
@property(retain, nonatomic) NSString *securityVerifyId; // @dynamic securityVerifyId;
@property(nonatomic) int showType; // @dynamic showType;
@property(nonatomic) _Bool success; // @dynamic success;
@property(retain, nonatomic) NSString *totalAmount; // @dynamic totalAmount;
@property(nonatomic) _Bool totalAmoutHidden; // @dynamic totalAmoutHidden;
@property(retain, nonatomic) NSString *totalFreezeAmount; // @dynamic totalFreezeAmount;
@property(retain, nonatomic) NSString *totalProfit; // @dynamic totalProfit;
@property(retain, nonatomic) NSString *unitYieldRate; // @dynamic unitYieldRate;
@property(retain, nonatomic) NSString *weekRate; // @dynamic weekRate;

@end
