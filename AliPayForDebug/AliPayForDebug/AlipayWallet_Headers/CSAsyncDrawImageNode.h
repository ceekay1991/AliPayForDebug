//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSNode.h"

@class NSString;

@interface CSAsyncDrawImageNode : CSNode
{
    NSString *_placeHolder;
    NSString *_imageSrc;
    long long _contentMode;
    NSString *_business;
    NSString *_bizType;
}

@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *business; // @synthesize business=_business;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(copy, nonatomic) NSString *imageSrc; // @synthesize imageSrc=_imageSrc;
@property(copy, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
- (void).cxx_destruct;
- (id)init;

@end
