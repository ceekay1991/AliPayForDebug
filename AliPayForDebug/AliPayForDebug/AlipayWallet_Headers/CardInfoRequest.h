//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface CardInfoRequest : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *cardNo; // @dynamic cardNo;
@property(retain, nonatomic) NSString *cardType; // @dynamic cardType;
@property(readonly) _Bool hasCardNo; // @dynamic hasCardNo;
@property(readonly) _Bool hasCardType; // @dynamic hasCardType;
@property(readonly) _Bool hasLatitude; // @dynamic hasLatitude;
@property(readonly) _Bool hasLongitude; // @dynamic hasLongitude;
@property(readonly) _Bool hasModelVersion; // @dynamic hasModelVersion;
@property(readonly) _Bool hasPassId; // @dynamic hasPassId;
@property(readonly) _Bool hasScene; // @dynamic hasScene;
@property(readonly) _Bool hasSpecificScene; // @dynamic hasSpecificScene;
@property(retain, nonatomic) NSString *latitude; // @dynamic latitude;
@property(retain, nonatomic) NSString *longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *modelVersion; // @dynamic modelVersion;
@property(retain, nonatomic) NSString *passId; // @dynamic passId;
@property(retain, nonatomic) NSString *scene; // @dynamic scene;
@property(retain, nonatomic) NSString *specificScene; // @dynamic specificScene;

@end
