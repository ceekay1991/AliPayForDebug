//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SPMExposureLogItem : NSObject
{
    NSString *_seedID;
    NSString *_rid;
    NSObject *_vc;
    NSDictionary *_params;
    NSString *_exposureKey;
}

@property(retain, nonatomic) NSString *exposureKey; // @synthesize exposureKey=_exposureKey;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) __weak NSObject *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) NSString *rid; // @synthesize rid=_rid;
@property(retain, nonatomic) NSString *seedID; // @synthesize seedID=_seedID;
- (void).cxx_destruct;

@end
