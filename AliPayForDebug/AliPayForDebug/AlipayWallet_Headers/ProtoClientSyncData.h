//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface ProtoClientSyncData : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasBizType;
    _Bool _hasCmk;
    _Bool _hasBizId;
    _Bool _hasPayload;
    _Bool _hasBinaryPayload;
    _Bool _hasBizName;
    _Bool _hasPrincipalIdType;
    _Bool _hasPrincipalId;
    _Bool _hasAppName;
    int _bizType;
    int _principalIdType;
    NSString *_cmk;
    NSString *_bizId;
    NSString *_payload;
    NSData *_binaryPayload;
    NSString *_bizName;
    NSString *_principalId;
    NSString *_appName;
    NSMutableArray *_extInfo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *principalId; // @synthesize principalId=_principalId;
@property(nonatomic) int principalIdType; // @synthesize principalIdType=_principalIdType;
@property(retain, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
@property(retain, nonatomic) NSData *binaryPayload; // @synthesize binaryPayload=_binaryPayload;
@property(retain, nonatomic) NSString *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(retain, nonatomic) NSString *cmk; // @synthesize cmk=_cmk;
@property(nonatomic) int bizType; // @synthesize bizType=_bizType;
@property(readonly) _Bool hasAppName; // @synthesize hasAppName=_hasAppName;
@property(readonly) _Bool hasPrincipalId; // @synthesize hasPrincipalId=_hasPrincipalId;
@property(readonly) _Bool hasPrincipalIdType; // @synthesize hasPrincipalIdType=_hasPrincipalIdType;
@property(readonly) _Bool hasBizName; // @synthesize hasBizName=_hasBizName;
@property(readonly) _Bool hasBinaryPayload; // @synthesize hasBinaryPayload=_hasBinaryPayload;
@property(readonly) _Bool hasPayload; // @synthesize hasPayload=_hasPayload;
@property(readonly) _Bool hasBizId; // @synthesize hasBizId=_hasBizId;
@property(readonly) _Bool hasCmk; // @synthesize hasCmk=_hasCmk;
@property(readonly) _Bool hasBizType; // @synthesize hasBizType=_hasBizType;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addExtInfo:(id)arg1;
- (void)setExtInfoArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

