//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GO2OServiceObject.h"

@class NSString;

@interface GO2OCollectInfoRequest : GO2OServiceObject
{
    NSString *_objectId;
    NSString *_objectType;
    NSString *_actionType;
    double _latitude;
    double _longitude;
    NSString *_chInfo;
}

@property(retain, nonatomic) NSString *chInfo; // @synthesize chInfo=_chInfo;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *objectType; // @synthesize objectType=_objectType;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void).cxx_destruct;

@end
