//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ACCNotifySyncModel : NSObject
{
    NSString *_type;
    NSString *_title;
    NSString *_desc;
    NSString *_bgImage;
    NSString *_actionUrl;
    NSString *_actionButton;
}

@property(retain, nonatomic) NSString *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *bgImage; // @synthesize bgImage=_bgImage;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
