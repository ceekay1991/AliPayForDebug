//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCachedURLResponse, NSURLRequest;
@protocol NSURLProtocolClient;

@interface FakeNSURLProtocol : NSObject
{
    NSCachedURLResponse *_cachedResponse;
    id <NSURLProtocolClient> _client;
    NSURLRequest *_request;
}

+ (_Bool)canInitWithRequest:(id)arg1;
+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (void)removePropertyForKey:(id)arg1 inRequest:(id)arg2;
+ (id)propertyForKey:(id)arg1 inRequest:(id)arg2;
+ (void)setProperty:(id)arg1 forKey:(id)arg2 inRequest:(id)arg3;
+ (id)ownerClass;
@property(readonly, copy) NSURLRequest *request; // @synthesize request=_request;
@property(readonly, retain) id <NSURLProtocolClient> client; // @synthesize client=_client;
@property(readonly, copy) NSCachedURLResponse *cachedResponse; // @synthesize cachedResponse=_cachedResponse;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;

@end

