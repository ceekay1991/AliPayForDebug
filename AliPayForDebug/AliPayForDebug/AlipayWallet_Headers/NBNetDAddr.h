//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NBNetDAddr : NSObject
{
    _Bool _isHttp;
    NSString *_host;
    long long _port;
}

@property(nonatomic) long long port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) _Bool isHttp; // @synthesize isHttp=_isHttp;
- (void).cxx_destruct;

@end

