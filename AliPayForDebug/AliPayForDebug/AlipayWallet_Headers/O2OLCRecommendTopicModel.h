//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMistModel.h"

@class NSString;

@interface O2OLCRecommendTopicModel : O2OMistModel
{
    _Bool _hasMore;
    int _hasShowNumber;
    _Bool _isLoadOrLoadMore;
    NSString *_cityCode;
}

@property(nonatomic) _Bool isLoadOrLoadMore; // @synthesize isLoadOrLoadMore=_isLoadOrLoadMore;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
- (void).cxx_destruct;
- (_Bool)hasMore;
- (id)responseObjects:(id)arg1 withTemplates:(id)arg2;
- (id)templatesFromResponse:(id)arg1;
- (_Bool)loadMore;
- (void)reload;
- (void)load;
- (id)templateConfig;
- (_Bool)shouldDowngrade;
- (_Bool)raise1002Exception;
- (id)operationType;
- (id)rpcRequest;
- (SEL)selectorNameForRPCService;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (Class)RPCServiceClass;

@end
