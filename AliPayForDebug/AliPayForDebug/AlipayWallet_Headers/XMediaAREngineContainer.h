//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AREngineWrapper, NSMutableArray, NSMutableDictionary;

@interface XMediaAREngineContainer : NSObject
{
    NSMutableArray *vecRecEngine;
    NSMutableArray *targetDataList;
    long long processN;
    AREngineWrapper *trackEngine;
    _Bool isFuDetected;
    _Bool _isAREngineInitFailed;
    _Bool _isSpringFestival;
    _Bool _inBackground;
    NSMutableDictionary *_testInfoDict;
    double _startInitTime;
    long long _uploadImageIndex;
}

@property(nonatomic) _Bool inBackground; // @synthesize inBackground=_inBackground;
@property(nonatomic) _Bool isSpringFestival; // @synthesize isSpringFestival=_isSpringFestival;
@property(nonatomic) long long uploadImageIndex; // @synthesize uploadImageIndex=_uploadImageIndex;
@property(nonatomic) double startInitTime; // @synthesize startInitTime=_startInitTime;
@property(retain, nonatomic) NSMutableDictionary *testInfoDict; // @synthesize testInfoDict=_testInfoDict;
@property(nonatomic) _Bool isAREngineInitFailed; // @synthesize isAREngineInitFailed=_isAREngineInitFailed;
- (void).cxx_destruct;
- (void)applicationEnterForeground:(id)arg1;
- (void)applicationEnterBackground:(id)arg1;
- (id)getCurrentEng:(unsigned long long)arg1;
- (_Bool)checkEng;
- (void)resetAllEngine;
- (void)removeAllEngine;
- (_Bool)initFaceEngine:(id)arg1;
- (_Bool)initTrackEngine:(id)arg1 trackType:(unsigned long long)arg2;
- (_Bool)reloadEngineWithAddList:(id)arg1 andDeleteList:(id)arg2;
- (_Bool)initOrigAlg:(id)arg1 resourcePath:(id)arg2;
- (_Bool)RecogTrackEngine:(id)arg1 resourcePath:(id)arg2;
- (_Bool)initEngineWithMap:(id)arg1;
- (id)genPackageAndEngineInitWithImageList:(id)arg1;
- (_Bool)initEngineWithDataList:(id)arg1;
- (_Bool)initEngine:(id)arg1;
- (id)init;
- (void)dealloc;

@end
