//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol APConfigService;

@interface NBDebugAppConfig : NSObject
{
    id <APConfigService> _configService;
    NSDate *_appModeBeginTime;
}

@property(retain, nonatomic) NSDate *appModeBeginTime; // @synthesize appModeBeginTime=_appModeBeginTime;
@property(retain, nonatomic) id <APConfigService> configService; // @synthesize configService=_configService;
- (void).cxx_destruct;
- (id)stringValue:(id)arg1;
- (id)dicValue:(id)arg1;
- (double)preferExpiredTime;
- (_Bool)enablePreferApplist;
- (_Bool)enableDebugRpc;
- (_Bool)enableNebulaDebugMode;
- (id)init;

@end

