//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, QEngineCommonInfo;

@interface QEgngineCommonList : NSObject
{
    NSArray *_rows;
    NSDictionary *_columns;
    QEngineCommonInfo *_info;
}

@property(retain, nonatomic) QEngineCommonInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) NSDictionary *columns; // @synthesize columns=_columns;
@property(retain, nonatomic) NSArray *rows; // @synthesize rows=_rows;
- (void).cxx_destruct;

@end

