//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GO2OADPopupView;

@protocol GO2OADPopupViewDelegate <NSObject>

@optional
- (void)popupViewDidClose:(GO2OADPopupView *)arg1;
- (void)popupViewDidClickButton:(GO2OADPopupView *)arg1;
- (void)popupViewDidClickImage:(GO2OADPopupView *)arg1;
- (void)popupViewWillShow:(GO2OADPopupView *)arg1;
@end
