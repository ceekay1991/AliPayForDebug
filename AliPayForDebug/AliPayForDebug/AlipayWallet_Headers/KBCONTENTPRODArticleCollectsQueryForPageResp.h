//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBCONTENTPRODBaseResult.h"

@class NSArray, NSDictionary, NSString;

@interface KBCONTENTPRODArticleCollectsQueryForPageResp : KBCONTENTPRODBaseResult
{
    _Bool _hasMore;
    NSDictionary *_blockTemplates;
    NSString *_lastObjectId;
    NSArray *_collectArticles;
}

+ (Class)collectArticlesElementClass;
+ (Class)blockTemplatesElementClass;
@property(retain, nonatomic) NSArray *collectArticles; // @synthesize collectArticles=_collectArticles;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSString *lastObjectId; // @synthesize lastObjectId=_lastObjectId;
@property(retain, nonatomic) NSDictionary *blockTemplates; // @synthesize blockTemplates=_blockTemplates;
- (void).cxx_destruct;

@end

