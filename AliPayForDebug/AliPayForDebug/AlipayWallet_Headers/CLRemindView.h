//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AUButton, COMQueryCommunityResp, NSString, UIActivityIndicatorView, UILabel;
@protocol CLRemindViewDelegate;

@interface CLRemindView : UIView
{
    UILabel *_noticeLabel;
    NSString *_noticeStr;
    COMQueryCommunityResp *_resultInfo;
    NSString *_btnTitle;
    UIActivityIndicatorView *_indicatorView;
    UILabel *_titleLabel;
    UIView *_lineView;
    id <CLRemindViewDelegate> _delegate;
    AUButton *_joinButton;
}

@property(retain, nonatomic) AUButton *joinButton; // @synthesize joinButton=_joinButton;
@property(nonatomic) __weak id <CLRemindViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopIndicator;
- (void)startIndicator;
- (void)joinAction;
- (void)layoutSubviews;
- (void)resizeSelf;
- (void)setComunityInfo:(id)arg1;
- (id)fontForText:(id)arg1;
- (id)initWithWidth:(double)arg1;

@end

