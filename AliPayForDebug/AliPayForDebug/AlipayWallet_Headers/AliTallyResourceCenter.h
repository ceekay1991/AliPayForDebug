//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AliAssetTallyCommandService, AliTallyAccountManager, AliTallyCategoryManager, AliTallyDataBaseManager, AliTallyImageCache;

@interface AliTallyResourceCenter : NSObject
{
    AliTallyDataBaseManager *_databaseManager;
    AliTallyAccountManager *_accountManager;
    AliTallyCategoryManager *_categoryManager;
    AliAssetTallyCommandService *_commandService;
    AliTallyImageCache *_imageCacheManager;
}

+ (id)sharedInstance;
@property(retain, nonatomic) AliTallyImageCache *imageCacheManager; // @synthesize imageCacheManager=_imageCacheManager;
@property(retain, nonatomic) AliAssetTallyCommandService *commandService; // @synthesize commandService=_commandService;
@property(retain, nonatomic) AliTallyCategoryManager *categoryManager; // @synthesize categoryManager=_categoryManager;
@property(retain, nonatomic) AliTallyAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(retain, nonatomic) AliTallyDataBaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
- (void).cxx_destruct;
- (void)unloadResource;
- (void)loadResource;

@end
