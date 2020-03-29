//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPaddingViewDelegate-Protocol.h"

@class CAGradientLayer, FBDocument, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;

@interface FBView : NSObject <FBPaddingViewDelegate>
{
    NSString *_bizid;
    _Bool hasAltAttr;
    UITapGestureRecognizer *_tapGes;
    struct fb_node *_node;
    float _transition;
    FBDocument *_doc;
    UIView *_view;
    NSString *_animationStr;
    UITapGestureRecognizer *_tapRecognizer;
    UILongPressGestureRecognizer *_longpressRecognizer;
    CAGradientLayer *_bgGradientLayer;
}

@property(retain, nonatomic) CAGradientLayer *bgGradientLayer; // @synthesize bgGradientLayer=_bgGradientLayer;
@property(retain, nonatomic) UILongPressGestureRecognizer *longpressRecognizer; // @synthesize longpressRecognizer=_longpressRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) NSString *animationStr; // @synthesize animationStr=_animationStr;
@property(nonatomic) float transition; // @synthesize transition=_transition;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) __weak FBDocument *doc; // @synthesize doc=_doc;
- (void).cxx_destruct;
- (void)setNodeAttr:(id)arg1 withValue:(id)arg2;
- (void)fireEvent:(id)arg1 withValue:(id)arg2;
- (void)addAnimation:(id)arg1;
- (void)onLayout;
- (void)onTouchCancel:(id)arg1 pointInRootView:(struct CGPoint)arg2;
- (void)onTouchMoved:(id)arg1 pointInRootView:(struct CGPoint)arg2;
- (void)onTouchDown:(id)arg1 pointInRootView:(struct CGPoint)arg2;
- (void)onTouchUp:(id)arg1 pointInRootView:(struct CGPoint)arg2;
- (void)onClicked:(id)arg1;
- (void)onTouchUpInside:(id)arg1 pointInRootView:(struct CGPoint)arg2;
- (void)onLongPress:(id)arg1;
- (id)FBRootView;
- (void)updateAttr:(id)arg1 withValue:(id)arg2;
- (void)updateFunc:(id)arg1 withValue:(id)arg2;
- (void)updateEvent:(id)arg1 withValue:(id)arg2;
- (void)applyAttrOverFlow:(_Bool)arg1 andValue:(id)arg2;
- (void)setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (void)updateCSS:(id)arg1 withValue:(id)arg2;
- (void)updateRect;
- (struct fb_node *)getFbNode;
- (void)removeFromSuperview;
- (void)addSubview:(id)arg1;
- (id)initWithNode:(struct fb_node *)arg1 withParam:(id)arg2 withDocument:(id)arg3 withView:(id)arg4;
- (id)initWithNode:(struct fb_node *)arg1 withDocument:(id)arg2 withView:(id)arg3;
- (struct CGRect)getNodeRect;
- (void)associateNode:(struct fb_node *)arg1;
- (void)invalidateNode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
