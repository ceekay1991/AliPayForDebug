//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface MOBILEBILLPayHelperMenuPB : APDPBGeneratedMessage <NSCoding>
{
}

+ (CDStruct_af61540b *)_fieldInfos;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *actionParam; // @dynamic actionParam;
@property(retain, nonatomic) NSString *actionType; // @dynamic actionType;
@property(readonly) _Bool hasActionParam; // @dynamic hasActionParam;
@property(readonly) _Bool hasActionType; // @dynamic hasActionType;
@property(readonly) _Bool hasMenuKey; // @dynamic hasMenuKey;
@property(readonly) _Bool hasName; // @dynamic hasName;
@property(retain, nonatomic) NSString *menuKey; // @dynamic menuKey;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSArray *subMenu; // @dynamic subMenu;

@end
