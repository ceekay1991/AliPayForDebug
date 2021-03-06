//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APScanDelegate-Protocol.h"

@class APScanViewController, NSString;
@protocol SWScanViewControllerDelegate;

@interface SWScanController : NSObject <APScanDelegate>
{
    id <SWScanViewControllerDelegate> _scanDelegate;
    APScanViewController *_scanViewController;
}

@property(retain, nonatomic) APScanViewController *scanViewController; // @synthesize scanViewController=_scanViewController;
@property(nonatomic) __weak id <SWScanViewControllerDelegate> scanDelegate; // @synthesize scanDelegate=_scanDelegate;
- (void).cxx_destruct;
- (id)parseParamFromCode:(id)arg1;
- (id)parseParamFromUrl:(id)arg1;
- (void)exitScan;
- (void)didFind:(id)arg1;
- (id)launchScanViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

