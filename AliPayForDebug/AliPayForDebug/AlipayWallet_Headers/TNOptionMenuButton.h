//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, TNPageOptionMenuButtonLogic, UIColor, UIImage, UILabel;

@interface TNOptionMenuButton : UIButton
{
    long long _tnRedDot;
    UIImage *_tnImage;
    UIColor *_tnTitleColor;
    NSString *_tnTitle;
    TNPageOptionMenuButtonLogic *_responder;
    UILabel *_redDotLabel;
}

@property(retain, nonatomic) UILabel *redDotLabel; // @synthesize redDotLabel=_redDotLabel;
@property(nonatomic) __weak TNPageOptionMenuButtonLogic *responder; // @synthesize responder=_responder;
@property(retain, nonatomic) NSString *tnTitle; // @synthesize tnTitle=_tnTitle;
@property(retain, nonatomic) UIColor *tnTitleColor; // @synthesize tnTitleColor=_tnTitleColor;
@property(retain, nonatomic) UIImage *tnImage; // @synthesize tnImage=_tnImage;
@property(nonatomic) long long tnRedDot; // @synthesize tnRedDot=_tnRedDot;
- (void).cxx_destruct;
- (void)touchDown:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

