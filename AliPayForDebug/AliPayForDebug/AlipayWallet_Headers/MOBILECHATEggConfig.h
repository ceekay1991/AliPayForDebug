//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface MOBILECHATEggConfig : NSObject
{
    NSString *_eggId;
    NSString *_eggName;
    NSString *_resourceId;
    NSDate *_startTime;
    NSDate *_expireTime;
    NSString *_tag;
    NSString *_keyword;
    NSString *_type;
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSDate *expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(retain, nonatomic) NSString *eggName; // @synthesize eggName=_eggName;
@property(retain, nonatomic) NSString *eggId; // @synthesize eggId=_eggId;
- (void).cxx_destruct;
- (id)description;

@end

