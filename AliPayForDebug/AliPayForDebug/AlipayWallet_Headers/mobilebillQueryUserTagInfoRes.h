//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface mobilebillQueryUserTagInfoRes : NSObject
{
    _Bool _succ;
    int _code;
    NSString *_desc;
    NSArray *_userBillTagInfoList;
}

+ (Class)userBillTagInfoListElementClass;
@property(retain, nonatomic) NSArray *userBillTagInfoList; // @synthesize userBillTagInfoList=_userBillTagInfoList;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) int code; // @synthesize code=_code;
@property(nonatomic) _Bool succ; // @synthesize succ=_succ;
- (void).cxx_destruct;

@end
