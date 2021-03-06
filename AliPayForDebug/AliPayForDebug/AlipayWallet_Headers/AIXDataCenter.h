//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APCustomStorage, NSMutableDictionary;

@interface AIXDataCenter : NSObject
{
    NSMutableDictionary *_sqlDBProxyMap;
    NSMutableDictionary *_ptsDBproxyMap;
    APCustomStorage *_storage;
}

@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) NSMutableDictionary *ptsDBproxyMap; // @synthesize ptsDBproxyMap=_ptsDBproxyMap;
@property(retain, nonatomic) NSMutableDictionary *sqlDBProxyMap; // @synthesize sqlDBProxyMap=_sqlDBProxyMap;
- (void).cxx_destruct;
- (id)ptsdbProxyByName:(id)arg1 tableName:(id)arg2;
- (id)dbProxyByName:(id)arg1 tableName:(id)arg2;
- (id)excuteSQL:(id)arg1;
- (_Bool)saveCustomData:(id)arg1 extraInfo1:(id)arg2 extraInfo2:(id)arg3 sceneCode:(id)arg4 forKey:(id)arg5;
- (_Bool)saveCustomData:(id)arg1 forKey:(id)arg2 withSceneCode:(id)arg3;
- (void)dbPreload;
- (id)init;

@end

