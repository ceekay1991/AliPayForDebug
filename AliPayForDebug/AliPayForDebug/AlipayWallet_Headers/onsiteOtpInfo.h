//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface onsiteOtpInfo : NSObject <NSCoding>
{
    int _interval;
    NSString *_seed;
    double _timeDiff;
    NSMutableDictionary *_indexMap;
}

@property(retain) NSMutableDictionary *indexMap; // @synthesize indexMap=_indexMap;
@property(nonatomic) int interval; // @synthesize interval=_interval;
@property(nonatomic) double timeDiff; // @synthesize timeDiff=_timeDiff;
@property(retain) NSString *seed; // @synthesize seed=_seed;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

