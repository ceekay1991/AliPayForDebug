//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UAUtil : NSObject
{
}

+ (void)ua_subThreadResult:(id)arg1 success:(_Bool)arg2 toMainThread:(CDUnknownBlockType)arg3;
+ (void)ua_subThreadResult:(id)arg1 toMainThread:(CDUnknownBlockType)arg2;
+ (id)deviceIPAddressWithInterfaceName:(id)arg1;
+ (long long)ua_reachable;
+ (id)ua_AESCryptWithType:(long long)arg1 srcString:(id)arg2 key:(id)arg3;
+ (id)ua_serviceCarrierInfo;
+ (unsigned long long)ua_simCardCount;
+ (_Bool)ua_simExist;
+ (void)ua_debugWithMessage:(id)arg1;
+ (id)ua_convertToJSONString:(id)arg1;
+ (id)ua_convertToDictionary:(id)arg1;
+ (id)ua_baseHMACSHA1WithKey:(id)arg1 sourceString:(id)arg2;
+ (id)ua_timeStamp;
+ (id)ua_uuid;
+ (_Bool)ua_cellularUsable;
+ (id)ua_md5:(id)arg1;

@end
