//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface UcdpCreativeInfo : NSObject
{
    int _width;
    int _height;
    NSString *_creativeCode;
    NSString *_creativeId;
    long long _reqRpcTime;
    NSString *_renderType;
    NSDictionary *_renderParams;
    NSString *_jsonResult;
    NSDictionary *_extInfoMap;
    NSString *_spmId;
    NSString *_logBizType;
    NSDictionary *_logInfo;
}

+ (Class)logInfoElementClass;
+ (Class)extInfoMapElementClass;
+ (Class)renderParamsElementClass;
@property(copy, nonatomic) NSDictionary *logInfo; // @synthesize logInfo=_logInfo;
@property(copy, nonatomic) NSString *logBizType; // @synthesize logBizType=_logBizType;
@property(copy, nonatomic) NSString *spmId; // @synthesize spmId=_spmId;
@property(copy, nonatomic) NSDictionary *extInfoMap; // @synthesize extInfoMap=_extInfoMap;
@property(copy, nonatomic) NSString *jsonResult; // @synthesize jsonResult=_jsonResult;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(copy, nonatomic) NSDictionary *renderParams; // @synthesize renderParams=_renderParams;
@property(copy, nonatomic) NSString *renderType; // @synthesize renderType=_renderType;
@property(nonatomic) long long reqRpcTime; // @synthesize reqRpcTime=_reqRpcTime;
@property(copy, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(copy, nonatomic) NSString *creativeCode; // @synthesize creativeCode=_creativeCode;
- (void).cxx_destruct;
- (_Bool)isEqualCreativeInfo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (struct CGSize)sizeForCreative;
- (id)convertToCreativeBody;

@end

