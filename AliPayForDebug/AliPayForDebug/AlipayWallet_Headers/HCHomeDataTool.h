//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HCHomeDataTool : NSObject
{
}

+ (_Bool)hideAmount;
+ (void)configCategory:(id)arg1 inPage:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)configCategory:(id)arg1 inPage:(id)arg2;
+ (id)configTemplates:(id)arg1;
+ (id)updateVersionAndFileIDForCategory:(id)arg1 templateInfos:(id)arg2;
+ (id)filterCategoryAfterFeedID:(id)arg1 inCardList:(id)arg2;
+ (id)removeDuplicateCardInList:(id)arg1;
+ (id)updateCategoryCards:(id)arg1 inCardList:(id)arg2;
+ (id)deleteCardWithIDList:(id)arg1 inCardList:(id)arg2;
+ (id)homeRefreshMode;

@end

