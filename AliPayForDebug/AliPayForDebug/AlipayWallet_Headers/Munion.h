//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface Munion : NSObject
{
    NSString *_eurl;
    NSString *_cna;
    NSString *_referer;
    NSString *_accept;
    NSString *_localinfo;
    long long _type;
    _Bool _ismall;
    NSString *_cacheUrl;
    long long _cacheTime;
    _Bool _invaild;
    NSString *_clickId;
    NSString *_id;
    NSString *_aliTrackId;
    NSString *_e;
    NSString *_unid;
    NSString *_user_id;
    _Bool _isClearData;
}

+ (id)handleAdUrlForClickId:(id)arg1 etype:(id)arg2;
+ (id)handleAdUrlForClickId:(id)arg1;
+ (id)handleAdUrl:(id)arg1 isOpenPage:(_Bool)arg2;
+ (id)handleAdUrl:(id)arg1;
+ (id)parsePidFromIfs:(id)arg1;
+ (void)createIfsCommitter:(id)arg1 namespace:(id)arg2 pid:(id)arg3 ignoreDuplication:(_Bool)arg4 args:(id)arg5;
+ (void)createIfsCommitter:(id)arg1 namespace:(id)arg2 pid:(id)arg3 args:(id)arg4;
+ (void)createIfsCommitter:(id)arg1 namespace:(id)arg2;
+ (void)createIfsCommitter:(id)arg1;
+ (id)shared;
- (void).cxx_destruct;

@end

