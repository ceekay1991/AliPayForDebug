//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMediaResult.h"

@class NSDictionary;

@interface XMBSourceSecuResult : XMediaResult
{
    _Bool _hasText;
    NSDictionary *_extendMap;
    NSDictionary *_result;
}

@property(copy, nonatomic) NSDictionary *result; // @synthesize result=_result;
@property(retain, nonatomic) NSDictionary *extendMap; // @synthesize extendMap=_extendMap;
@property(nonatomic) _Bool hasText; // @synthesize hasText=_hasText;
- (void).cxx_destruct;
- (void)deserialize:(id)arg1;
- (id)getJsonResult;
- (id)initWithDictionary:(id)arg1;

@end
