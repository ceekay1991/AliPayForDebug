//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TSResponseVO : NSObject
{
    _Bool _isSuccess;
    NSString *_resultCode;
    NSString *_resultMsg;
    NSString *_followAction;
    NSDictionary *_responseParams;
}

@property(copy, nonatomic) NSDictionary *responseParams; // @synthesize responseParams=_responseParams;
@property(copy, nonatomic) NSString *followAction; // @synthesize followAction=_followAction;
@property(copy, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(copy, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
- (void).cxx_destruct;
- (id)convertToDic;
- (id)init;

@end

