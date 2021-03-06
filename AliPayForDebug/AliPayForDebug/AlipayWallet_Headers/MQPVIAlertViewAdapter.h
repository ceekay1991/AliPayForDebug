//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMPAlertViewDelegate-Protocol.h"
#import "VIAlertView-Protocol.h"

@class MMPAlertViewAdapter, NSString;

@interface MQPVIAlertViewAdapter : NSObject <MMPAlertViewDelegate, VIAlertView>
{
    MMPAlertViewAdapter *_alertAdapter;
}

@property(retain, nonatomic) MMPAlertViewAdapter *alertAdapter; // @synthesize alertAdapter=_alertAdapter;
- (void).cxx_destruct;
- (void)dismiss;
- (void)mmpAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 cancelBlock:(CDUnknownBlockType)arg5 otherBlock:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

