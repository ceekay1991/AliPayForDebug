//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HCInfosListViewController, NSArray, NSIndexPath;
@protocol APCommonItemProtocol;

@protocol HCInfosListViewControllerDelegate <NSObject>

@optional
- (_Bool)infosListViewController:(HCInfosListViewController *)arg1 canEditRowAtIndexPath:(NSIndexPath *)arg2;
- (NSArray *)infosListViewController:(HCInfosListViewController *)arg1 editActionsForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)infosListViewController:(HCInfosListViewController *)arg1 didSelectRow:(id <APCommonItemProtocol>)arg2;
- (void)infosListViewController:(HCInfosListViewController *)arg1 didLoadMore:(id <APCommonItemProtocol>)arg2 callBack:(void (^)(NSMutableArray *, _Bool, NSError *, long long))arg3;
@end
