//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSIndexPath, NSString, UITableView, UITableViewCell, UIView;

@protocol CSCustomCellMaintainer
- (UIView *)realContentViewForCell:(UITableViewCell *)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg1 cellForRowAtIndexPath:(NSIndexPath *)arg2 reuseIdentifier:(NSString *)arg3;
@end

