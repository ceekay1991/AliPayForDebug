//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface APShareStoreObject : NSObject <NSCoding>
{
    NSString *_storeName;
    NSString *_storeScore;
    NSString *_storePrice;
    NSString *_storeAddress;
    NSString *_wepageUrl;
    NSString *_extend;
}

@property(retain, nonatomic) NSString *extend; // @synthesize extend=_extend;
@property(retain, nonatomic) NSString *wepageUrl; // @synthesize wepageUrl=_wepageUrl;
@property(retain, nonatomic) NSString *storeAddress; // @synthesize storeAddress=_storeAddress;
@property(retain, nonatomic) NSString *storePrice; // @synthesize storePrice=_storePrice;
@property(retain, nonatomic) NSString *storeScore; // @synthesize storeScore=_storeScore;
@property(retain, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
