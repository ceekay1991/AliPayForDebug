//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface LFNewBaseInfoUnfollowStyleView : UIView
{
    UIImageView *_avatarImageView;
    UIView *_avatarStrokeView;
    UILabel *_titleLabel;
    UIView *_externServicesView;
    long long _style;
}

@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak UIView *externServicesView; // @synthesize externServicesView=_externServicesView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIView *avatarStrokeView; // @synthesize avatarStrokeView=_avatarStrokeView;
@property(nonatomic) __weak UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)downloadImages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadImagesForExternServicesView:(id)arg1;
- (void)setAvatar:(id)arg1 title:(id)arg2 isCertified:(id)arg3 cateString:(id)arg4 countyUrl:(id)arg5 externIconUrlList:(id)arg6;
- (void)refreshPublicLifeInfo:(id)arg1 style:(long long)arg2;
- (void)setupConstraints;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

