//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SecVISECertKit : NSObject
{
}

+ (id)certbox;
+ (id)certmapPlist;
+ (id)secertBox;
+ (id)exportCert:(id)arg1;
+ (_Bool)importCert:(id)arg1 keyIndex:(id)arg2 error:(id *)arg3;
+ (_Bool)saveSeCertSn:(id)arg1 keyIndex:(id)arg2;
+ (id)seCertSn:(id)arg1;
+ (_Bool)prepareSECertBox;

@end
