//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface DFLoadingPageManager : NSObject
{
    NSMutableArray *_loadingPageHandlers;
    NSMutableArray *_loadingViewList;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *loadingViewList; // @synthesize loadingViewList=_loadingViewList;
@property(retain, nonatomic) NSMutableArray *loadingPageHandlers; // @synthesize loadingPageHandlers=_loadingPageHandlers;
- (void).cxx_destruct;
- (id)findLoadingInfoWithAppId:(id)arg1;
- (void)removeLoadingViewForInfo:(id)arg1;
- (void)cancelStartLoading;
- (_Bool)checkStartLoading:(id)arg1 params:(id)arg2 sourceId:(id)arg3;
- (id)findLoading:(id)arg1;
- (_Bool)stopLoading:(id)arg1;
- (_Bool)startLoading:(id)arg1 params:(id)arg2 sourceId:(id)arg3;
- (void)unregisterLoadingPageHandler:(id)arg1;
- (void)registerLoadingPageHandler:(id)arg1;
- (id)init;

@end
