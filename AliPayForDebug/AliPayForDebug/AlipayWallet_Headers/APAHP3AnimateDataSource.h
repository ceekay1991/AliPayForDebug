//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APAnimateDataSource-Protocol.h"

@class Ahp3DecoderImp, NSData, NSMutableDictionary, NSString;

@interface APAHP3AnimateDataSource : NSObject <APAnimateDataSource>
{
    unsigned long long _loopCount;
    NSMutableDictionary *_delayTimesForIndexes;
    unsigned long long _frameCount;
    Ahp3DecoderImp *_ahp3Decoder;
    NSData *_ahp3Data;
    struct CGSize _size;
}

@property(readonly, nonatomic) NSData *ahp3Data; // @synthesize ahp3Data=_ahp3Data;
@property(readonly, nonatomic) Ahp3DecoderImp *ahp3Decoder; // @synthesize ahp3Decoder=_ahp3Decoder;
@property(readonly, nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
@property(readonly, nonatomic) NSMutableDictionary *delayTimesForIndexes; // @synthesize delayTimesForIndexes=_delayTimesForIndexes;
@property(readonly, nonatomic) unsigned long long loopCount; // @synthesize loopCount=_loopCount;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (_Bool)canRandomAccessFrame;
- (void)releaseResource;
- (_Bool)imagePreDrawn;
- (id)delayAtIndexFromDecoder:(unsigned long long)arg1;
- (id)imageAtIndex:(unsigned long long)arg1;
- (id)ahp3DecoderImpWithData:(id)arg1;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

