//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AFWSeaViewBarometerSnapshotModel, UILabel;

@interface AFWSeaViewBaromerSnapshotView : UIView
{
    UILabel *_titleLable;
    UILabel *_priceLable;
    UILabel *_changeQuoLabel;
    AFWSeaViewBarometerSnapshotModel *_model;
}

- (void).cxx_destruct;
- (void)setSnapshotModel:(id)arg1;
- (id)snapshotLabel:(struct CGRect)arg1;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
