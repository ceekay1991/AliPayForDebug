//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ARTVCMCUIceMsg : NSObject
{
    NSString *_type;
    NSDictionary *_sdpDic;
    NSDictionary *_candidateDic;
    NSDictionary *_removeCandidatesDic;
}

@property(retain, nonatomic) NSDictionary *removeCandidatesDic; // @synthesize removeCandidatesDic=_removeCandidatesDic;
@property(retain, nonatomic) NSDictionary *candidateDic; // @synthesize candidateDic=_candidateDic;
@property(retain, nonatomic) NSDictionary *sdpDic; // @synthesize sdpDic=_sdpDic;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)dictionary;

@end
