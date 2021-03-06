//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface ScanCodeModel : NSObject <NSCoding>
{
    int _priority;
    NSString *_bizType;
    NSString *_code;
    NSString *_destUrl;
    NSString *_matchRule;
    long long _expireTime;
    unsigned long long _method;
    NSString *_primaryCode;
    NSString *_fileID;
    long long _fileCreateTime;
}

+ (id)modelWithDic:(id)arg1;
@property(nonatomic) long long fileCreateTime; // @synthesize fileCreateTime=_fileCreateTime;
@property(copy, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(copy, nonatomic) NSString *primaryCode; // @synthesize primaryCode=_primaryCode;
@property(nonatomic) unsigned long long method; // @synthesize method=_method;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(nonatomic) long long expireTime; // @synthesize expireTime=_expireTime;
@property(copy, nonatomic) NSString *matchRule; // @synthesize matchRule=_matchRule;
@property(copy, nonatomic) NSString *destUrl; // @synthesize destUrl=_destUrl;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)matchCode:(id)arg1;
- (_Bool)cacheInvalid:(long long)arg1;
- (id)description;
- (id)initWithDic:(id)arg1;
- (id)bundleId:(id)arg1;
- (id)encodedLbsInfo:(id)arg1;
- (id)extData:(id)arg1;
- (id)scanCode:(id)arg1;
- (id)stringForKeyFromExinfo:(id)arg1 key:(id)arg2;
- (id)replacePlaceholderIsFromCache:(_Bool)arg1 ScanTime:(id)arg2 exInfo:(id)arg3;
- (id)genURLIsFromCache:(_Bool)arg1 scanTime:(id)arg2 WithCodeContent:(id)arg3 exInfo:(id)arg4;
- (id)genURLIsFromCache:(_Bool)arg1 scanTime:(id)arg2 exInfo:(id)arg3;
- (id)genURLIsFromCache:(_Bool)arg1 WithCodeContent:(id)arg2;

@end

