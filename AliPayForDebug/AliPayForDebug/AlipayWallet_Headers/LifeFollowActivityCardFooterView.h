//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface LifeFollowActivityCardFooterView : UIView
{
    UIImageView *_visitIconView;
    UILabel *_visitCountLabel;
    UILabel *_timeLabel;
}

@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *visitCountLabel; // @synthesize visitCountLabel=_visitCountLabel;
@property(retain, nonatomic) UIImageView *visitIconView; // @synthesize visitIconView=_visitIconView;
- (void).cxx_destruct;
- (id)visitCountWithHTML:(id)arg1;
- (void)updateViewWithDict:(id)arg1;
- (id)createLabel;
- (id)init;

@end
