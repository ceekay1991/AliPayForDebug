//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class WordGiftFlowVO;

@interface GWDetailReceiverCell : UIView
{
    WordGiftFlowVO *_giftFlowVO;
    CDUnknownBlockType _avartarHandler;
}

@property(copy, nonatomic) CDUnknownBlockType avartarHandler; // @synthesize avartarHandler=_avartarHandler;
@property(readonly, nonatomic) WordGiftFlowVO *giftFlowVO; // @synthesize giftFlowVO=_giftFlowVO;
- (void).cxx_destruct;
- (void)didTappedPortrait;
- (id)initWithFrame:(struct CGRect)arg1 template:(id)arg2 contentView:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 template:(id)arg2 text:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 template:(id)arg2 flowModel:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 template:(id)arg2;

@end
