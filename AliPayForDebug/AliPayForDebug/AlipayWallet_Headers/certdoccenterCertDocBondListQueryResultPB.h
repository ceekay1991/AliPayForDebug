//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString, certdoccenterCertDocBondNewUserGuideVOPB;

@interface certdoccenterCertDocBondListQueryResultPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSArray *addedCertDocBondList; // @dynamic addedCertDocBondList;
@property(retain, nonatomic) NSArray *addibleCertDocBondList; // @dynamic addibleCertDocBondList;
@property(retain, nonatomic) certdoccenterCertDocBondNewUserGuideVOPB *certDocBondNewUserGuideVO; // @dynamic certDocBondNewUserGuideVO;
@property(retain, nonatomic) NSString *certifyUrl; // @dynamic certifyUrl;
@property(readonly) _Bool hasCertDocBondNewUserGuideVO; // @dynamic hasCertDocBondNewUserGuideVO;
@property(readonly) _Bool hasCertifyUrl; // @dynamic hasCertifyUrl;
@property(readonly) _Bool hasPageType; // @dynamic hasPageType;
@property(readonly) _Bool hasResultCode; // @dynamic hasResultCode;
@property(readonly) _Bool hasResultDesc; // @dynamic hasResultDesc;
@property(readonly) _Bool hasShowType; // @dynamic hasShowType;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(retain, nonatomic) NSString *pageType; // @dynamic pageType;
@property(retain, nonatomic) NSString *resultCode; // @dynamic resultCode;
@property(retain, nonatomic) NSString *resultDesc; // @dynamic resultDesc;
@property(nonatomic) int showType; // @dynamic showType;
@property(nonatomic) _Bool success; // @dynamic success;

@end
