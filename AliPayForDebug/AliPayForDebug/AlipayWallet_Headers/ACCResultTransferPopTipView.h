//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface ACCResultTransferPopTipView : UIView
{
    NSString *_title;
    NSString *_imageUrl;
    UILabel *_labelTitle;
    UIImageView *_imageLeft;
    struct CGPoint _origin;
}

@property(retain, nonatomic) UIImageView *imageLeft; // @synthesize imageLeft=_imageLeft;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
- (void).cxx_destruct;
- (void)createBorder;
- (void)createSubviews;
- (id)initWithOrigin:(struct CGPoint)arg1 title:(id)arg2 imageUrl:(id)arg3;

@end

