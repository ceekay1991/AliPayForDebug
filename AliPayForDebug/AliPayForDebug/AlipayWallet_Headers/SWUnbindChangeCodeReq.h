//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SWUnbindChangeCodeReq : NSObject
{
    NSString *_bizType;
    NSDictionary *_changeCodeInfo;
}

@property(retain, nonatomic) NSDictionary *changeCodeInfo; // @synthesize changeCodeInfo=_changeCodeInfo;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
- (void).cxx_destruct;

@end

