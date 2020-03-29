//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface GO2OCommonBizRequest : NSObject
{
    NSString *_pageType;
    NSString *_pageRequest;
    double _latitude;
    double _longitude;
    NSString *_chInfo;
    NSString *_systemType;
    NSString *_templateType;
    NSString *_templateParams;
    NSDictionary *_blockMd5s;
    NSString *_userAgent;
}

+ (Class)blockMd5sElementClass;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) NSDictionary *blockMd5s; // @synthesize blockMd5s=_blockMd5s;
@property(retain, nonatomic) NSString *templateParams; // @synthesize templateParams=_templateParams;
@property(retain, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) NSString *systemType; // @synthesize systemType=_systemType;
@property(copy, nonatomic) NSString *chInfo; // @synthesize chInfo=_chInfo;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *pageRequest; // @synthesize pageRequest=_pageRequest;
@property(copy, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
- (void).cxx_destruct;

@end
