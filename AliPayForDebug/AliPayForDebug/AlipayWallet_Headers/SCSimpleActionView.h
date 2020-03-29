//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSString, UIImageView, UILabel;
@protocol SCSimpleActionViewActionDelegate;

@interface SCSimpleActionView : UIView
{
    id <SCSimpleActionViewActionDelegate> _delegate;
    NSString *_title;
    NSDictionary *_associatedData;
    UILabel *_titleLabel;
    UIImageView *_arrow;
}

@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSDictionary *associatedData; // @synthesize associatedData=_associatedData;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <SCSimpleActionViewActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)action:(id)arg1;
- (void)reloadView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
