//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBUYERRequestData.h"

@class MBUYERClientInfo, NSString;

@interface MBUYERPaymentRequest : MBUYERRequestData
{
    int _quantity;
    NSString *_sign;
    NSString *_partnerId;
    NSString *_shopId;
    NSString *_bizProduct;
    NSString *_itemId;
    NSString *_campId;
    NSString *_sourceFrom;
    NSString *_consultiveId;
    NSString *_remainderAmount;
    MBUYERClientInfo *_clientInfo;
}

@property(retain, nonatomic) MBUYERClientInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain, nonatomic) NSString *remainderAmount; // @synthesize remainderAmount=_remainderAmount;
@property(retain, nonatomic) NSString *consultiveId; // @synthesize consultiveId=_consultiveId;
@property(retain, nonatomic) NSString *sourceFrom; // @synthesize sourceFrom=_sourceFrom;
@property(nonatomic) int quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) NSString *campId; // @synthesize campId=_campId;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *bizProduct; // @synthesize bizProduct=_bizProduct;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSString *partnerId; // @synthesize partnerId=_partnerId;
@property(retain, nonatomic) NSString *sign; // @synthesize sign=_sign;
- (void).cxx_destruct;

@end

