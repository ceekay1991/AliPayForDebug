//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFWStockBaseModel.h"

@class NSString;

@interface AFWStockMarketTrendRelatedModel : AFWStockBaseModel
{
    int _priceChangeState;
    NSString *_name;
    NSString *_symbol;
    NSString *_priceChangePercent;
    NSString *_actionUrl;
}

+ (id)modelWithfinscbffRelateItemPB:(id)arg1;
@property(readonly, copy, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(readonly, nonatomic) int priceChangeState; // @synthesize priceChangeState=_priceChangeState;
@property(readonly, copy, nonatomic) NSString *priceChangePercent; // @synthesize priceChangePercent=_priceChangePercent;
@property(readonly, copy, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithfinscbffRelateItemPB:(id)arg1;

@end
