//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BSBadgeSpaceInfo, MBAssistBadgeServiceObserver, NSMutableArray, NSObject, UIScrollView;

@interface MBAssistEntranceView : UIView
{
    UIScrollView *_pannelView;
    BSBadgeSpaceInfo *_spaceInfo;
    MBAssistBadgeServiceObserver *_badgeServiceObserver;
    _Bool _showBadge;
    NSObject *_monitorViewId;
    CDUnknownBlockType _clickHandlBlock;
    NSMutableArray *_exposuredWidgetIds;
}

@property(retain, nonatomic) NSMutableArray *exposuredWidgetIds; // @synthesize exposuredWidgetIds=_exposuredWidgetIds;
@property(copy, nonatomic) CDUnknownBlockType clickHandlBlock; // @synthesize clickHandlBlock=_clickHandlBlock;
@property(nonatomic) __weak NSObject *monitorViewId; // @synthesize monitorViewId=_monitorViewId;
- (void).cxx_destruct;
- (void)dealloc;
- (void)refreshWidgetViews;
- (void)setSpaceInfo:(id)arg1;
- (void)refreshWidgets;
- (void)assistClicked:(id)arg1;
- (void)badageExposure:(id)arg1;
- (void)refreshWithItemDatas:(id)arg1;
- (id)initWithShowBadge:(_Bool)arg1;

@end

