//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ARTVCParamsProtocol-Protocol.h"

@class NSString;

@interface ARTVCRoomInfomation : NSObject <ARTVCParamsProtocol>
{
    NSString *_roomId;
    NSString *_rtoken;
}

@property(copy, nonatomic) NSString *rtoken; // @synthesize rtoken=_rtoken;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

