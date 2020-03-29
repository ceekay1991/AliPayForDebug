//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BeeLottiePlayerCacheProtocol-Protocol.h"
#import "BeeLottiePlayerLogProtocol-Protocol.h"
#import "BeeLottiePlayerProtocol-Protocol.h"

@class BeeLottieView, LottiePlayerModel, NSDictionary, NSOperationQueue, NSString;
@protocol BeeLottiePlayerCacheProtocol, BeeLottiePlayerProtocol;

@interface BeeLottiePlayer : NSObject <BeeLottiePlayerLogProtocol, BeeLottiePlayerCacheProtocol, BeeLottiePlayerProtocol>
{
    NSDictionary *_componentData;
    BeeLottieView *_containView;
    id <BeeLottiePlayerProtocol> _delegate;
    id <BeeLottiePlayerCacheProtocol> _cacheDelegate;
    NSDictionary *_bizLogParams;
    LottiePlayerModel *_model;
    long long _viewState;
    NSOperationQueue *_queue;
    CDUnknownBlockType _CompleteBlock;
}

+ (_Bool)usePlaceHolder:(id)arg1;
+ (_Bool)isL0AndFailed:(id)arg1;
+ (_Bool)stayInPlaceHolder:(id)arg1;
+ (_Bool)isDowngrade:(id)arg1;
+ (_Bool)isDeviceDowngrade:(id)arg1;
+ (id)fillModelFromDictionary:(id)arg1 withBizMap:(id)arg2;
+ (void)saveLottieView:(id)arg1 model:(id)arg2;
+ (id)cachedLottieViewByModel:(id)arg1;
+ (_Bool)checkLottieFileExist:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType CompleteBlock; // @synthesize CompleteBlock=_CompleteBlock;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) long long viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) LottiePlayerModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSDictionary *bizLogParams; // @synthesize bizLogParams=_bizLogParams;
@property(nonatomic) __weak id <BeeLottiePlayerCacheProtocol> cacheDelegate; // @synthesize cacheDelegate=_cacheDelegate;
@property(nonatomic) __weak id <BeeLottiePlayerProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BeeLottieView *containView; // @synthesize containView=_containView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateRect:(struct CGRect)arg1;
- (void)lottieAnimationOnReceiveMessage:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)fillVariableWithData:(id)arg1;
- (void)setupPlaceholderWithImage:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)fetchImageDataWithUrl:(id)arg1 isAsync:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)fetchImageDataWithModel:(id)arg1 isAsync:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (id)getLottieDataByUrl:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)sendPlaceHolderEvent:(_Bool)arg1 model:(id)arg2 placeHolder:(id)arg3;
- (void)lottieDidChangeWithData:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)lottieDidChanged:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)lottieDidChangeWithData:(id)arg1;
- (void)downgradeToPlaceHolderWithModel:(id)arg1 isAsync:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)downgradeToPlaceHolder;
- (void)updatePropertyIfNeeded:(id)arg1;
- (void)setupLottieViewWithData:(id)arg1 model:(id)arg2 isAsyncMode:(_Bool)arg3 complete:(CDUnknownBlockType)arg4;
- (void)setupLottieViewWithData:(id)arg1 model:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (long long)setupLottieViewWithJSON:(id)arg1 model:(id)arg2 resourceMap:(id)arg3 type:(long long)arg4 jsonModel:(id)arg5 error:(id *)arg6;
- (_Bool)checkQulifiedForType:(long long)arg1 jsonModel:(id)arg2 model:(id)arg3 hasErrorView:(_Bool *)arg4;
- (id)init;
- (void)dispatchCallerByMode:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (void)preLoadResource:(id)arg1 mode:(_Bool)arg2 model:(id)arg3 success:(CDUnknownBlockType)arg4 failedBlock:(CDUnknownBlockType)arg5;
- (_Bool)isBase64Str:(id)arg1;
- (id)rootPathByModel:(id)arg1;
- (void)logComponentInfoWithAction:(id)arg1 withModel:(id)arg2;
- (void)getResourceDataWitRequest:(id)arg1;
- (id)syncGetCachedResourceDataWitRequest:(id)arg1;
- (void)saveImage:(id)arg1 byIdentifier:(id)arg2;
- (id)getImageCacheById:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)getLottieViewFromCache:(id)arg1;
- (void)asyncGetLottieView:(id)arg1 bindingTo:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)checkLottieFileExist:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
