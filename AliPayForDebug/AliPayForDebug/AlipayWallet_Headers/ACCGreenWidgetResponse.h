//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACCBaseRPCResponseInfo, NSString;

@interface ACCGreenWidgetResponse : NSObject
{
    ACCBaseRPCResponseInfo *_baseRPCResponseInfo;
    NSString *_image;
    NSString *_actionUrl;
    NSString *_desc;
    NSString *_descColor;
}

@property(retain, nonatomic) NSString *descColor; // @synthesize descColor=_descColor;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) ACCBaseRPCResponseInfo *baseRPCResponseInfo; // @synthesize baseRPCResponseInfo=_baseRPCResponseInfo;
- (void).cxx_destruct;

@end
