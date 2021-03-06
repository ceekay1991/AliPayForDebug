//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSString;
@protocol VZHTTPRequestDelegate, VZHTTPResponseDataCacheInterface;

@protocol VZHTTPRequestInterface <NSObject>
@property(readonly, nonatomic) NSError *responseError;
@property(readonly, nonatomic) id responseObject;
@property(readonly, nonatomic) NSString *responseString;
@property(nonatomic) __weak id <VZHTTPRequestDelegate> delegate;
@property(nonatomic) _Bool ignoreCachePolicy;
@property(retain, nonatomic) NSString *cachedKey;
@property(nonatomic) struct responseConfig responseConfig;
@property(nonatomic) struct requestConfig requestConfig;
@property(retain, nonatomic) NSDictionary *headerParams;
@property(retain, nonatomic) NSDictionary *queries;
@property(retain, nonatomic) NSString *requestURL;
- (id <VZHTTPResponseDataCacheInterface>)globalCache;
- (void)cancel;
- (void)load;
- (void)addHeaderParams:(NSDictionary *)arg1;
- (void)addQueries:(NSDictionary *)arg1;
- (void)initWithBaseURL:(NSString *)arg1 RequestConfig:(struct requestConfig)arg2 ResponseConfig:(struct responseConfig)arg3;
@end

