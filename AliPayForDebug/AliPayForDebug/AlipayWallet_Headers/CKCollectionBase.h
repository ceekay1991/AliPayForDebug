//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@class NSMutableDictionary;

@interface CKCollectionBase : UICollectionView
{
    NSMutableDictionary *_bitmaps;
}

@property(retain, nonatomic) NSMutableDictionary *bitmaps; // @synthesize bitmaps=_bitmaps;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)bindCellBitmap:(id)arg1 image:(id)arg2;
- (id)ckCollectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)ckCollectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)ckreloadData;
- (void)storeResumeView:(id)arg1;

@end

