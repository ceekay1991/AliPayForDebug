//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface O2OMultiTabDataCollector : NSObject
{
    NSMutableArray *_singleTabLoadMore;
    NSMutableArray *_firstTabLoadMore;
    NSMutableArray *_otherTabLoadMore;
    NSMutableArray *_otherTabFirstLoad;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *otherTabFirstLoad; // @synthesize otherTabFirstLoad=_otherTabFirstLoad;
@property(retain, nonatomic) NSMutableArray *otherTabLoadMore; // @synthesize otherTabLoadMore=_otherTabLoadMore;
@property(retain, nonatomic) NSMutableArray *firstTabLoadMore; // @synthesize firstTabLoadMore=_firstTabLoadMore;
@property(retain, nonatomic) NSMutableArray *singleTabLoadMore; // @synthesize singleTabLoadMore=_singleTabLoadMore;
- (void).cxx_destruct;

@end
