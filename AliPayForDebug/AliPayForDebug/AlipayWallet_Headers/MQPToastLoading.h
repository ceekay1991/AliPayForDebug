//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQPView.h"

@interface MQPToastLoading : MQPView
{
    CDUnknownBlockType _cancelBlock;
}

@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (void).cxx_destruct;
- (void)cancelLoading:(id)arg1;
- (void)dismiss;
- (void)showWithCancelBlock:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
