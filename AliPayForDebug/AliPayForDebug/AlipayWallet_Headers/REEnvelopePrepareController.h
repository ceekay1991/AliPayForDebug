//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "REBaseResultViewController.h"

#import "REAuthViewControllerDelegate-Protocol.h"
#import "REErrorViewDelegate-Protocol.h"
#import "RERouterDelegate-Protocol.h"

@class NSDictionary, NSString, REEnvelopePrepareView;

@interface REEnvelopePrepareController : REBaseResultViewController <REAuthViewControllerDelegate, RERouterDelegate, REErrorViewDelegate>
{
    _Bool _needRequest;
    _Bool _goDetail;
    _Bool _fromPrepareDataManager;
    _Bool _openDirect;
    NSString *_crowdNo;
    NSString *_outId;
    NSString *_iGuess;
    NSString *_signValue;
    NSDictionary *_options;
    REEnvelopePrepareView *_prepareView;
}

@property(retain, nonatomic) REEnvelopePrepareView *prepareView; // @synthesize prepareView=_prepareView;
@property(nonatomic) _Bool openDirect; // @synthesize openDirect=_openDirect;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(nonatomic) _Bool fromPrepareDataManager; // @synthesize fromPrepareDataManager=_fromPrepareDataManager;
@property(nonatomic) _Bool goDetail; // @synthesize goDetail=_goDetail;
@property(retain, nonatomic) NSString *signValue; // @synthesize signValue=_signValue;
@property(retain, nonatomic) NSString *iGuess; // @synthesize iGuess=_iGuess;
@property(retain, nonatomic) NSString *outId; // @synthesize outId=_outId;
@property(retain, nonatomic) NSString *crowdNo; // @synthesize crowdNo=_crowdNo;
@property(nonatomic) _Bool needRequest; // @synthesize needRequest=_needRequest;
- (void).cxx_destruct;
- (void)onAuthenticationCancelled:(id)arg1;
- (void)onAuthenticationSuccess:(id)arg1;
- (void)didClickedErrorViewButton:(id)arg1;
- (void)envelopeClicked;
- (void)handleAuth;
- (void)gotoUserCertify;
- (void)gotoSentDetail;
- (void)gotoEnvelopeResultController:(id)arg1 orCrowdNum:(id)arg2 animated:(_Bool)arg3;
- (void)lookUpFriendsDetail:(id)arg1;
- (void)unpackRPC;
- (void)requestData;
- (void)displayViewWithResult:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDataResult:(id)arg1;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
