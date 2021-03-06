//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ANXGenCodeRecord, ANXRefreshCardDataRecord;

@interface ANXMonitor : NSObject
{
    ANXGenCodeRecord *_genCodeRecord;
    ANXRefreshCardDataRecord *_refreshCardDataRecord;
}

+ (void)monitorWithSeed:(id)arg1 ucId:(id)arg2 param:(id)arg3;
+ (void)monitorWithSeed:(id)arg1 ucId:(id)arg2;
+ (void)monitorSpmClickWith:(id)arg1 tag:(id)arg2 param:(id)arg3;
+ (void)removeRecordWithDicCardInfo:(id)arg1 isSync:(_Bool)arg2;
+ (void)updateRecordWithDicDataInfo:(id)arg1 isSync:(_Bool)arg2 success:(_Bool)arg3;
+ (id)_dateFormatter;
+ (id)sharedInstance;
@property(retain, nonatomic) ANXRefreshCardDataRecord *refreshCardDataRecord; // @synthesize refreshCardDataRecord=_refreshCardDataRecord;
@property(retain, nonatomic) ANXGenCodeRecord *genCodeRecord; // @synthesize genCodeRecord=_genCodeRecord;
- (void).cxx_destruct;
- (_Bool)alreadyHasError;
- (void)setupErrorDetail:(id)arg1;
- (void)setupErrorType:(unsigned long long)arg1;
- (void)endGenCodeRecord;
- (void)startGenCodeRecordWithParam:(id)arg1;

@end

