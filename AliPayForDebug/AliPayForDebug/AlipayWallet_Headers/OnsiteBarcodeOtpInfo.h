//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OnsiteBarcodeOtpInfo : NSObject
{
    _Bool _isNewLink;
    _Bool _isOffLine;
    NSString *_code;
    NSString *_model;
    NSString *_batchId;
    long long _currentTime;
    long long _expiryTime;
}

@property(nonatomic) long long expiryTime; // @synthesize expiryTime=_expiryTime;
@property(nonatomic) long long currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) _Bool isOffLine; // @synthesize isOffLine=_isOffLine;
@property(retain, nonatomic) NSString *batchId; // @synthesize batchId=_batchId;
@property(nonatomic) _Bool isNewLink; // @synthesize isNewLink=_isNewLink;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
