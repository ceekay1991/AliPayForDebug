//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TEXImageOutputDelegate-Protocol.h"

@class NSString, TEXFunctor, TEXFunctorDecorator, TEXImageOutput, TEXImageSource, UIImage;

@interface TEXImageFilter : NSObject <TEXImageOutputDelegate>
{
    TEXImageSource *_source;
    TEXImageOutput *_output;
    TEXFunctorDecorator *_decorator;
    UIImage *_image;
    TEXFunctor *_filter;
}

@property(retain, nonatomic) TEXFunctor *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (void)imageOutputDidReceiveNewFrame:(id)arg1;
- (id)filterImage:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

