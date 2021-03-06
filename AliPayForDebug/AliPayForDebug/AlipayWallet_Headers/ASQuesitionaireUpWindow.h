//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import "H5ServiceDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AUILoadingIndicatorView, NSString, PSDPluginConfig, UIImageView, UILabel, UIView;
@protocol H5WebViewInterface;

@interface ASQuesitionaireUpWindow : UIWindow <UIGestureRecognizerDelegate, H5ServiceDelegate>
{
    UIImageView *_closeButton;
    NSString *_webURL;
    CDUnknownBlockType _callback;
    AUILoadingIndicatorView *_loadView;
    UIView<H5WebViewInterface> *_webView;
    UIView *_backView;
    UILabel *_loadLabel;
    PSDPluginConfig *_plugin;
    NSString *_spaceId;
}

@property(retain, nonatomic) NSString *spaceId; // @synthesize spaceId=_spaceId;
@property(retain, nonatomic) PSDPluginConfig *plugin; // @synthesize plugin=_plugin;
@property(retain, nonatomic) UILabel *loadLabel; // @synthesize loadLabel=_loadLabel;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIView<H5WebViewInterface> *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) AUILoadingIndicatorView *loadView; // @synthesize loadView=_loadView;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSString *webURL; // @synthesize webURL=_webURL;
@property(retain, nonatomic) UIImageView *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)closeWebWindow;
- (void)show;
- (void)loadWebView;
- (id)initWihtUrl:(id)arg1 withSpaceId:(id)arg2 closeCallBack:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

