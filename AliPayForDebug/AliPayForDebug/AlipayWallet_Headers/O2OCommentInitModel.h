//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OHTTPModel.h"

@class NSArray, NSDictionary, NSString;

@interface O2OCommentInitModel : O2OHTTPModel
{
    _Bool _isFivePointSystem;
    _Bool _shareOrderAmount;
    NSString *_tradeNo;
    NSString *_shopId;
    NSString *_itemId;
    NSString *_orderBizType;
    NSString *_bizId;
    NSString *_channel;
    NSString *_craftsmanPositionId;
    NSString *_shopName;
    NSString *_shopLogo;
    NSDictionary *_placeholders;
    NSArray *_itemInfoList;
    NSString *_shareOrderAmountTip;
    NSArray *_commentTagInfos;
    NSArray *_subScoreLabels;
    NSArray *_recommendDishs;
    NSArray *_shopTags;
    NSString *_resBizId;
    NSString *_resOrderBizType;
    NSArray *_craftsmanInfos;
    NSDictionary *_context;
}

@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(retain, nonatomic) NSArray *craftsmanInfos; // @synthesize craftsmanInfos=_craftsmanInfos;
@property(retain, nonatomic) NSString *resOrderBizType; // @synthesize resOrderBizType=_resOrderBizType;
@property(retain, nonatomic) NSString *resBizId; // @synthesize resBizId=_resBizId;
@property(retain, nonatomic) NSArray *shopTags; // @synthesize shopTags=_shopTags;
@property(retain, nonatomic) NSArray *recommendDishs; // @synthesize recommendDishs=_recommendDishs;
@property(retain, nonatomic) NSArray *subScoreLabels; // @synthesize subScoreLabels=_subScoreLabels;
@property(retain, nonatomic) NSArray *commentTagInfos; // @synthesize commentTagInfos=_commentTagInfos;
@property(retain, nonatomic) NSString *shareOrderAmountTip; // @synthesize shareOrderAmountTip=_shareOrderAmountTip;
@property(nonatomic) _Bool shareOrderAmount; // @synthesize shareOrderAmount=_shareOrderAmount;
@property(retain, nonatomic) NSArray *itemInfoList; // @synthesize itemInfoList=_itemInfoList;
@property(retain, nonatomic) NSDictionary *placeholders; // @synthesize placeholders=_placeholders;
@property(retain, nonatomic) NSString *shopLogo; // @synthesize shopLogo=_shopLogo;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(nonatomic) _Bool isFivePointSystem; // @synthesize isFivePointSystem=_isFivePointSystem;
@property(retain, nonatomic) NSString *craftsmanPositionId; // @synthesize craftsmanPositionId=_craftsmanPositionId;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(retain, nonatomic) NSString *orderBizType; // @synthesize orderBizType=_orderBizType;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSString *tradeNo; // @synthesize tradeNo=_tradeNo;
- (void).cxx_destruct;
- (_Bool)isModelLoading;
- (_Bool)parseResponse:(id)arg1;
- (id)operationType;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (_Bool)raise1002Exception;
- (id)rpcRequest;

@end

