//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDFeatureProtocol-Protocol.h"

@class IDRule, NSMutableDictionary, NSString;
@protocol IDContextProtocol;

@interface IDBaseFeature : NSObject <IDFeatureProtocol>
{
    _Bool _isFromCache;
    NSString *_strategyName;
    NSString *_featureContent;
    NSString *_featureId;
    id <IDContextProtocol> _context;
    IDRule *_rule;
    CDUnknownBlockType _completionHandler;
    NSString *_logSecondParam;
    NSString *_originalType;
    NSMutableDictionary *_logExtParams;
}

@property(retain, nonatomic) NSMutableDictionary *logExtParams; // @synthesize logExtParams=_logExtParams;
@property(copy, nonatomic) NSString *originalType; // @synthesize originalType=_originalType;
@property(copy, nonatomic) NSString *logSecondParam; // @synthesize logSecondParam=_logSecondParam;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) __weak IDRule *rule; // @synthesize rule=_rule;
@property(nonatomic) __weak id <IDContextProtocol> context; // @synthesize context=_context;
@property(nonatomic) _Bool isFromCache; // @synthesize isFromCache=_isFromCache;
@property(copy, nonatomic) NSString *featureId; // @synthesize featureId=_featureId;
@property(copy, nonatomic) NSString *featureContent; // @synthesize featureContent=_featureContent;
@property(copy, nonatomic) NSString *strategyName; // @synthesize strategyName=_strategyName;
- (void).cxx_destruct;
- (void)doExecuteOnCompletion:(CDUnknownBlockType)arg1;
- (void)executeFeatureOnCompletion:(CDUnknownBlockType)arg1;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

