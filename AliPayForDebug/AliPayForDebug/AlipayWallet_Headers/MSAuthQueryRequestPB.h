//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface MSAuthQueryRequestPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(readonly) _Bool hasPageNum; // @dynamic hasPageNum;
@property(readonly) _Bool hasPageSize; // @dynamic hasPageSize;
@property(readonly) _Bool hasScope; // @dynamic hasScope;
@property(nonatomic) int pageNum; // @dynamic pageNum;
@property(nonatomic) int pageSize; // @dynamic pageSize;
@property(retain, nonatomic) NSArray *preciseExcludedScopes; // @dynamic preciseExcludedScopes;
@property(retain, nonatomic) NSArray *preciseIncludedScopes; // @dynamic preciseIncludedScopes;
@property(retain, nonatomic) NSString *scope; // @dynamic scope;
@property(retain, nonatomic) NSArray *vagueExcludedScopes; // @dynamic vagueExcludedScopes;
@property(retain, nonatomic) NSArray *vagueIncludedScopes; // @dynamic vagueIncludedScopes;

@end

