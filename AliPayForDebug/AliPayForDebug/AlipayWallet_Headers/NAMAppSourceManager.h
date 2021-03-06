//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NAMAppSourceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_appInfoQueue;
    NSObject<OS_dispatch_queue> *_appPackageQueue;
    NSMutableDictionary *_appInfoSource;
    NSMutableDictionary *_appPackageSource;
}

@property(retain, nonatomic) NSMutableDictionary *appPackageSource; // @synthesize appPackageSource=_appPackageSource;
@property(retain, nonatomic) NSMutableDictionary *appInfoSource; // @synthesize appInfoSource=_appInfoSource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *appPackageQueue; // @synthesize appPackageQueue=_appPackageQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *appInfoQueue; // @synthesize appInfoQueue=_appInfoQueue;
- (void).cxx_destruct;
- (unsigned long long)appPackageSource:(id)arg1 version:(id)arg2;
- (unsigned long long)appInfoSource:(id)arg1 version:(id)arg2;
- (void)setAppsPackageSource:(id)arg1 source:(unsigned long long)arg2;
- (void)setAppPackageSource:(id)arg1 version:(id)arg2 source:(unsigned long long)arg3;
- (void)setAppsInfoSource:(id)arg1 source:(unsigned long long)arg2;
- (void)setAppInfoSource:(id)arg1 version:(id)arg2 source:(unsigned long long)arg3;
- (id)init;

@end

