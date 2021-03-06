//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HCHeadViewDelegate-Protocol.h"

@class HCHeadView, NSString, UIColor, UITableView, UIView;

@interface HCListHeaderWidget : NSObject <HCHeadViewDelegate>
{
    UITableView *_tableview;
    UIColor *_bgColor;
    HCHeadView *_musicView;
    UIView *_headerViewContainer;
}

@property(retain, nonatomic) UIView *headerViewContainer; // @synthesize headerViewContainer=_headerViewContainer;
@property(retain, nonatomic) HCHeadView *musicView; // @synthesize musicView=_musicView;
- (void).cxx_destruct;
- (void)didChangeFrame:(struct CGRect)arg1 originFrame:(struct CGRect)arg2;
- (void)setTableView:(id)arg1;
- (void)refreshHeader;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

