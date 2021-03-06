//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSLock, NSString, NSTimer;

@interface SMSignatureItem : NSObject
{
    _Bool _inprogress;
    NSString *_signature;
    NSDate *_expiredDate;
    NSTimer *_refreshTimer;
    double _fetchTimeCost;
    NSLock *_lock;
}

@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool inprogress; // @synthesize inprogress=_inprogress;
@property(nonatomic) double fetchTimeCost; // @synthesize fetchTimeCost=_fetchTimeCost;
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(retain, nonatomic) NSDate *expiredDate; // @synthesize expiredDate=_expiredDate;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
- (void).cxx_destruct;
- (_Bool)valid;
- (id)init;

@end

