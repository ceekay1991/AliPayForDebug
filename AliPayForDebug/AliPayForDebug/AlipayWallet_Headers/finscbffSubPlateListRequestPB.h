//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface finscbffSubPlateListRequestPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *area; // @dynamic area;
@property(readonly) _Bool hasArea; // @dynamic hasArea;
@property(readonly) _Bool hasOrderRule; // @dynamic hasOrderRule;
@property(readonly) _Bool hasSubPlateId; // @dynamic hasSubPlateId;
@property(readonly) _Bool hasSubPlateMRISymbol; // @dynamic hasSubPlateMRISymbol;
@property(nonatomic) int orderRule; // @dynamic orderRule;
@property(retain, nonatomic) NSString *subPlateId; // @dynamic subPlateId;
@property(retain, nonatomic) NSString *subPlateMRISymbol; // @dynamic subPlateMRISymbol;

@end
