//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GO2OSearchTagsView, O2OCommonSearchRecordItem;

@protocol GO2OSearchTagsViewDelegate <NSObject>
- (void)searchTagsViewDidClickActionButton:(GO2OSearchTagsView *)arg1;
- (void)searchTagsView:(GO2OSearchTagsView *)arg1 didSelectTag:(O2OCommonSearchRecordItem *)arg2 index:(long long)arg3;
@end

