//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface LLMsgEntry : NSObject <NSCoding>
{
    NSString *_msgKey;
    NSString *_msgCreateTime;
    NSString *_linkToken;
    NSString *_appId;
}

@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *linkToken; // @synthesize linkToken=_linkToken;
@property(retain, nonatomic) NSString *msgCreateTime; // @synthesize msgCreateTime=_msgCreateTime;
@property(retain, nonatomic) NSString *msgKey; // @synthesize msgKey=_msgKey;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

