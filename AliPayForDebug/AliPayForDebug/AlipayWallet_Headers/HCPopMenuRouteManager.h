//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CPopMenuManagerDelegate-Protocol.h"

@class CPopMenuManager, NSDictionary, NSString;
@protocol HCPopMenuRouteManagerDelegate;

@interface HCPopMenuRouteManager : NSObject <CPopMenuManagerDelegate>
{
    id <HCPopMenuRouteManagerDelegate> _delegate;
    NSDictionary *_supportHandleDic;
    CPopMenuManager *_popMenuManager;
}

@property(retain, nonatomic) CPopMenuManager *popMenuManager; // @synthesize popMenuManager=_popMenuManager;
@property(copy, nonatomic) NSDictionary *supportHandleDic; // @synthesize supportHandleDic=_supportHandleDic;
@property(nonatomic) __weak id <HCPopMenuRouteManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)popMenuManager:(id)arg1 didSelectAtIndex:(unsigned long long)arg2 withPopMenuItem:(id)arg3;
- (void)markCardWithPopMenuItem:(id)arg1 withOperation:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)registMenuItem:(id)arg1 name:(id)arg2;
- (void)showPopMenuInView:(id)arg1 atPoint:(struct CGPoint)arg2 withCCard:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

