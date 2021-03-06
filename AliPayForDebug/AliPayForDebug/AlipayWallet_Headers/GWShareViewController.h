//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWResultBaseViewController.h"

@class GWShareManager, NSDictionary, UILabel;

@interface GWShareViewController : GWResultBaseViewController
{
    _Bool _enableBack;
    NSDictionary *_shareOptions;
    GWShareManager *_shareManager;
    UILabel *_noteLabel;
    NSDictionary *_spmParam;
}

@property(retain, nonatomic) NSDictionary *spmParam; // @synthesize spmParam=_spmParam;
@property(nonatomic) _Bool enableBack; // @synthesize enableBack=_enableBack;
@property(retain, nonatomic) UILabel *noteLabel; // @synthesize noteLabel=_noteLabel;
@property(retain, nonatomic) GWShareManager *shareManager; // @synthesize shareManager=_shareManager;
@property(retain, nonatomic) NSDictionary *shareOptions; // @synthesize shareOptions=_shareOptions;
- (void).cxx_destruct;
- (id)buttonWithImageName:(id)arg1 title:(id)arg2 action:(SEL)arg3;
- (void)didTappedShareToDingDingButton;
- (void)didTappedShareToTencentButton;
- (void)didTappedShareToFriendButton;
- (void)didTappedNavRightBarItem;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithShareOptions:(id)arg1;

@end

