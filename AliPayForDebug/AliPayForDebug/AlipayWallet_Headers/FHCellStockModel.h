//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FHCellBaseModel.h"

@class FHLogModel, NSArray, NSString;

@interface FHCellStockModel : FHCellBaseModel
{
    _Bool _isCache;
    _Bool _isExpanding;
    _Bool _isIndexDegrade;
    NSArray *_stockToolList;
    NSArray *_indexList;
    NSArray *_newsList;
    NSArray *_indexExpandList;
    FHLogModel *_toggleLogModel;
    NSString *_entrancePicture;
    NSString *_entranceUrl;
    FHLogModel *_entranceLogModel;
    NSString *_indexMoreUrl;
    FHLogModel *_indexMoreLogModel;
    unsigned long long _templateStockVersion;
}

@property(nonatomic) unsigned long long templateStockVersion; // @synthesize templateStockVersion=_templateStockVersion;
@property(nonatomic) _Bool isIndexDegrade; // @synthesize isIndexDegrade=_isIndexDegrade;
@property(nonatomic) _Bool isExpanding; // @synthesize isExpanding=_isExpanding;
@property(retain, nonatomic) FHLogModel *indexMoreLogModel; // @synthesize indexMoreLogModel=_indexMoreLogModel;
@property(retain, nonatomic) NSString *indexMoreUrl; // @synthesize indexMoreUrl=_indexMoreUrl;
@property(retain, nonatomic) FHLogModel *entranceLogModel; // @synthesize entranceLogModel=_entranceLogModel;
@property(copy, nonatomic) NSString *entranceUrl; // @synthesize entranceUrl=_entranceUrl;
@property(copy, nonatomic) NSString *entrancePicture; // @synthesize entrancePicture=_entrancePicture;
@property(retain, nonatomic) FHLogModel *toggleLogModel; // @synthesize toggleLogModel=_toggleLogModel;
@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(retain, nonatomic) NSArray *indexExpandList; // @synthesize indexExpandList=_indexExpandList;
@property(retain, nonatomic) NSArray *newsList; // @synthesize newsList=_newsList;
@property(retain, nonatomic) NSArray *indexList; // @synthesize indexList=_indexList;
@property(retain, nonatomic) NSArray *stockToolList; // @synthesize stockToolList=_stockToolList;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isValid;
@property(readonly, nonatomic) _Bool isExpandable;
- (double)heightForGuessTrendingView;
- (double)cellHeight;
- (id)initWithDataModelV2:(id)arg1 card:(id)arg2 obFloor:(id)arg3 isCache:(_Bool)arg4;
- (id)initWithDataModel:(id)arg1 card:(id)arg2 obFloor:(id)arg3 isCache:(_Bool)arg4;

@end

