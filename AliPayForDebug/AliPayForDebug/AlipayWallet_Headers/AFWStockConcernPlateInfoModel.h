//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMLBaseModel.h"

@class NSString;

@interface AFWStockConcernPlateInfoModel : FMLBaseModel
{
    int _changeStatus;
    NSString *_plateId;
    NSString *_plateName;
    NSString *_changeRate;
    NSString *_content;
    NSString *_dateString;
    NSString *_urlSchema;
    NSString *_newsId;
}

+ (id)initWithPBModel:(id)arg1;
@property(retain, nonatomic) NSString *newsId; // @synthesize newsId=_newsId;
@property(retain, nonatomic) NSString *urlSchema; // @synthesize urlSchema=_urlSchema;
@property(retain, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) int changeStatus; // @synthesize changeStatus=_changeStatus;
@property(retain, nonatomic) NSString *changeRate; // @synthesize changeRate=_changeRate;
@property(retain, nonatomic) NSString *plateName; // @synthesize plateName=_plateName;
@property(retain, nonatomic) NSString *plateId; // @synthesize plateId=_plateId;
- (void).cxx_destruct;

@end

