//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ARTVCMCUBasicResponse.h"

@class ARTVCMCURoomExtraInfoInResponse, ARTVCRoomConfiguration, NSString;

@interface ARTVCMCUJoinRoomResponse : ARTVCMCUBasicResponse
{
    NSString *_sessionId;
    ARTVCRoomConfiguration *_config;
    ARTVCMCURoomExtraInfoInResponse *_extra;
}

@property(retain, nonatomic) ARTVCMCURoomExtraInfoInResponse *extra; // @synthesize extra=_extra;
@property(retain, nonatomic) ARTVCRoomConfiguration *config; // @synthesize config=_config;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (id)initWithJsonDictionary:(id)arg1;

@end

