//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMLBaseModel.h"

@interface TFRBaseLayoutConfig : FMLBaseModel
{
    double _originX;
    double _originY;
    double _height;
    double _width;
}

@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double originY; // @synthesize originY=_originY;
@property(nonatomic) double originX; // @synthesize originX=_originX;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)frame;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
