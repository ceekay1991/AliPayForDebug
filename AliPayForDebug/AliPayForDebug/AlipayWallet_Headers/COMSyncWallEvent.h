//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class COMCommunityMember, NSArray, NSString;

@interface COMSyncWallEvent : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *communityId; // @dynamic communityId;
@property(retain, nonatomic) COMCommunityMember *communityMember; // @dynamic communityMember;
@property(retain, nonatomic) NSArray *events; // @dynamic events;
@property(readonly) _Bool hasCommunityId; // @dynamic hasCommunityId;
@property(readonly) _Bool hasCommunityMember; // @dynamic hasCommunityMember;
@property(readonly) _Bool hasTotalOnline; // @dynamic hasTotalOnline;
@property(readonly) _Bool hasType; // @dynamic hasType;
@property(nonatomic) long long totalOnline; // @dynamic totalOnline;
@property(nonatomic) int type; // @dynamic type;

@end

