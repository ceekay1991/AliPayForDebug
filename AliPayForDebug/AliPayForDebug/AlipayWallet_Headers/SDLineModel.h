//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SDLineModel : NSObject
{
    float _width;
    unsigned long long _tag;
    NSMutableArray *_datas;
    unsigned long long _decimalNum;
    unsigned long long _color;
    unsigned long long _yAxisDirection;
}

@property(nonatomic) unsigned long long yAxisDirection; // @synthesize yAxisDirection=_yAxisDirection;
@property(nonatomic) float width; // @synthesize width=_width;
@property(nonatomic) unsigned long long color; // @synthesize color=_color;
@property(nonatomic) unsigned long long decimalNum; // @synthesize decimalNum=_decimalNum;
@property(retain, nonatomic) NSMutableArray *datas; // @synthesize datas=_datas;
@property(nonatomic) unsigned long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)init;

@end
