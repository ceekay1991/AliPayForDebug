//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAEAGLLayer, NSString;

@interface APContextConfig : NSObject
{
    _Bool _enableMSAA;
    CAEAGLLayer *_drawable;
    double _ratio;
    NSString *_canvasId;
    struct CGSize _size;
}

@property(retain, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
@property(nonatomic) _Bool enableMSAA; // @synthesize enableMSAA=_enableMSAA;
@property(nonatomic) double ratio; // @synthesize ratio=_ratio;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) CAEAGLLayer *drawable; // @synthesize drawable=_drawable;
- (void).cxx_destruct;
- (id)init;

@end

