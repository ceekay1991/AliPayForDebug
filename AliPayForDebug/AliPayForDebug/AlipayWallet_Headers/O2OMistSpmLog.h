//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIViewController;

@interface O2OMistSpmLog : NSObject
{
    NSString *_actionId;
    NSArray *_extParams;
    NSString *_seed;
    NSString *_bizType;
    NSString *_appId;
    NSString *_ucId;
    NSString *_pos;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
- (void)write;
- (void)mergeWrite;
- (id)initWithDictionary:(id)arg1 item:(id)arg2 defaultActionId:(id)arg3;

@end

