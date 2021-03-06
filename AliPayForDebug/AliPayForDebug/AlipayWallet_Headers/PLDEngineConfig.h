//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NXEngineJSAPIHandler;

@interface PLDEngineConfig : NSObject
{
    NSString *_jsfmSource;
    NSString *_jsfmVersion;
    NSString *_jsfmPath;
    id <NXEngineJSAPIHandler> _jsAPIHandler;
}

@property(retain, nonatomic) id <NXEngineJSAPIHandler> jsAPIHandler; // @synthesize jsAPIHandler=_jsAPIHandler;
@property(copy, nonatomic) NSString *jsfmPath; // @synthesize jsfmPath=_jsfmPath;
@property(copy, nonatomic) NSString *jsfmVersion; // @synthesize jsfmVersion=_jsfmVersion;
@property(copy, nonatomic) NSString *jsfmSource; // @synthesize jsfmSource=_jsfmSource;
- (void).cxx_destruct;
- (id)jsSource;

@end

