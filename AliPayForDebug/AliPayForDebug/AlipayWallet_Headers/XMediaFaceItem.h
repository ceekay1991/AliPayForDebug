//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData;

@interface XMediaFaceItem : NSObject
{
    unsigned long long _trackId;
    NSData *_facePose;
    NSArray *_rotAngle;
    struct CGRect _faceRect;
}

@property(retain, nonatomic) NSArray *rotAngle; // @synthesize rotAngle=_rotAngle;
@property(nonatomic) struct CGRect faceRect; // @synthesize faceRect=_faceRect;
@property(retain, nonatomic) NSData *facePose; // @synthesize facePose=_facePose;
@property(nonatomic) unsigned long long trackId; // @synthesize trackId=_trackId;
- (void).cxx_destruct;
- (id)description;

@end
