//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TEXFunctor;

@interface TEXFunctorChain : NSObject
{
    NSMutableArray *_sources;
    TEXFunctor *_functor;
    _Bool _chainConstructed;
    _Bool _alreadyStarted;
    struct CGSize _outputSizeInPixels;
}

@property(nonatomic) struct CGSize outputSizeInPixels; // @synthesize outputSizeInPixels=_outputSizeInPixels;
- (void).cxx_destruct;
- (void)constructChain;
- (void)stop;
- (void)start;
- (void)setFunctor:(id)arg1;
- (void)addSource:(id)arg1;
- (id)init;

@end

