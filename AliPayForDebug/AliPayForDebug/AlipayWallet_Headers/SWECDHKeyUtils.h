//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ECkeyPairs;

@interface SWECDHKeyUtils : NSObject
{
    ECkeyPairs *_eckeyPairs;
}

@property(retain, nonatomic) ECkeyPairs *eckeyPairs; // @synthesize eckeyPairs=_eckeyPairs;
- (void).cxx_destruct;
- (struct ec_key_st *)privateKeyFromPEM:(id)arg1;
- (struct ec_key_st *)publicKeyFromPEM:(id)arg1;
- (id)getShareKeyFromPeerPubPem:(id)arg1 privatePem:(id)arg2 length:(int)arg3;
- (struct ec_key_st *)createNewKeyWithCurve:(int)arg1;
- (id)getPem:(struct ec_key_st *)arg1 voidType:(int)arg2;
- (void)generatekeyPairs;

@end
