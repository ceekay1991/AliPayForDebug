//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, TinyappJsPermissionManager;

@interface TNJSPermission : NSObject
{
    NSDictionary *_config;
    TinyappJsPermissionManager *_tinyAppServiceJSPermissionManager;
}

@property(retain, nonatomic) TinyappJsPermissionManager *tinyAppServiceJSPermissionManager; // @synthesize tinyAppServiceJSPermissionManager=_tinyAppServiceJSPermissionManager;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (_Bool)hasPermissionWithUrl:(id)arg1;
- (_Bool)eventHasPermission:(id)arg1 data:(id)arg2 url:(id)arg3;
- (_Bool)methodHasPermission:(id)arg1 data:(id)arg2 url:(id)arg3;
- (_Bool)shouldDoPermissionJudge;
- (id)initPermissionConfig:(id)arg1;

@end

