//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MFFunnyImageSearchResp : NSObject
{
    int _resultCount;
    NSString *_resultStatus;
    NSString *_memo;
    NSString *_query;
    NSArray *_resultArray;
}

+ (Class)resultArrayElementClass;
@property(retain, nonatomic) NSArray *resultArray; // @synthesize resultArray=_resultArray;
@property(nonatomic) int resultCount; // @synthesize resultCount=_resultCount;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *resultStatus; // @synthesize resultStatus=_resultStatus;
- (void).cxx_destruct;

@end

