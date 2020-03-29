//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LOTAssetsRetriver-Protocol.h"

@class H5CoolLoadingView, NAMAppDataSource, NSString, PSDScene;

@interface H5CoolLoadingViewManager : NSObject <LOTAssetsRetriver>
{
    PSDScene *_scene;
    H5CoolLoadingView *_loadingView;
    NAMAppDataSource *_dataSource;
    NSString *_basePath;
}

@property(copy, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(retain, nonatomic) NAMAppDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) H5CoolLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak PSDScene *scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (void)removeLoadingViewAnimated:(_Bool)arg1;
- (id)getImageOfPath:(id)arg1;
- (id)initLoadingViewForScene:(id)arg1 withLottieConfig:(id)arg2 withAppDataSource:(id)arg3 withAssetsBasePath:(id)arg4 withSolidBgColor:(id)arg5 autoCloseTimeout:(int)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
