//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ANXOfflineDataInfo, NSString;

@interface ANXBusCardDataListItem : NSObject
{
    ANXOfflineDataInfo *_offlineDataInfo;
    NSString *_cardNo;
    NSString *_cardType;
    long long _timestamp;
}

@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSString *cardNo; // @synthesize cardNo=_cardNo;
@property(retain, nonatomic) ANXOfflineDataInfo *offlineDataInfo; // @synthesize offlineDataInfo=_offlineDataInfo;
- (void).cxx_destruct;

@end

