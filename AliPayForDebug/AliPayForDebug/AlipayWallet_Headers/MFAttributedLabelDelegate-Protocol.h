//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MFAttributeBaseLabel, NSSet, UIEvent;

@protocol MFAttributedLabelDelegate <NSObject>

@optional
- (void)mfAttributedLabel:(MFAttributeBaseLabel *)arg1 touchesEnded:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
- (void)mfAttributedLabel:(MFAttributeBaseLabel *)arg1 touchesCancelled:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
- (void)mfAttributedLabel:(MFAttributeBaseLabel *)arg1 touchesMoved:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
- (void)mfAttributedLabel:(MFAttributeBaseLabel *)arg1 touchesBegan:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
- (void)mfAttributedLabel:(MFAttributeBaseLabel *)arg1 longPressOnLink:(id)arg2 CGRect:(struct CGRect)arg3;
- (void)mfAttributedLabel:(MFAttributeBaseLabel *)arg1 clickedOnLink:(id)arg2;
@end

