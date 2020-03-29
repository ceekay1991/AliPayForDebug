//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MQPEmbeddedViewProtocol-Protocol.h"

@class GO2OExchangeRateModel, NSString;

@interface GO2OExchangeRateView : UIView <MQPEmbeddedViewProtocol>
{
    GO2OExchangeRateModel *_model;
}

@property(retain, nonatomic) GO2OExchangeRateModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (double)viewHeight;
- (void)handleInteractiveViewClick:(id)arg1;
- (void)handleClick:(id)arg1;
- (id)rateLabelWithLocalAmount:(id)arg1 localCurrency:(id)arg2 foreignAmount:(id)arg3 foreignCurrency:(id)arg4 prefix:(id)arg5;
- (id)titleLabelWithText:(id)arg1 top:(double)arg2;
- (void)initSubviews;
- (id)initWithData:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
