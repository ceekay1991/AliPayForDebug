//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class FinaggexpbffChildModelEntryPB, FinaggexpbffConfigModelEntryPB, FinaggexpbffDataModelEntryPB, FinaggexpbffExtModelEntryPB, FinaggexpbffLogModelEntryPB, NSArray, NSString;

@interface FinaggexpbffCardModelEntryPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;
+ (id)alt_cardModelWithDictionary:(id)arg1;
+ (id)alt_cardModelWithDictionary:(id)arg1;
- (id)description;
- (_Bool)alt_isCacheInvalidAccordingToConfigModel:(id)arg1;
- (id)alt_copy;
- (id)description;
- (_Bool)alt_isCacheInvalidAccordingToConfigModel:(id)arg1;
- (id)alt_copy;

// Remaining properties
@property(retain, nonatomic) NSString *cardTypeId; // @dynamic cardTypeId;
@property(retain, nonatomic) NSString *cellId; // @dynamic cellId;
@property(retain, nonatomic) FinaggexpbffChildModelEntryPB *childModel; // @dynamic childModel;
@property(retain, nonatomic) NSArray *children; // @dynamic children;
@property(retain, nonatomic) FinaggexpbffConfigModelEntryPB *configModel; // @dynamic configModel;
@property(retain, nonatomic) FinaggexpbffDataModelEntryPB *dataModel; // @dynamic dataModel;
@property(retain, nonatomic) FinaggexpbffExtModelEntryPB *extModel; // @dynamic extModel;
@property(readonly) _Bool hasCardTypeId; // @dynamic hasCardTypeId;
@property(readonly) _Bool hasCellId; // @dynamic hasCellId;
@property(readonly) _Bool hasChildModel; // @dynamic hasChildModel;
@property(readonly) _Bool hasConfigModel; // @dynamic hasConfigModel;
@property(readonly) _Bool hasDataModel; // @dynamic hasDataModel;
@property(readonly) _Bool hasExtModel; // @dynamic hasExtModel;
@property(readonly) _Bool hasLogModel; // @dynamic hasLogModel;
@property(retain, nonatomic) FinaggexpbffLogModelEntryPB *logModel; // @dynamic logModel;

@end

