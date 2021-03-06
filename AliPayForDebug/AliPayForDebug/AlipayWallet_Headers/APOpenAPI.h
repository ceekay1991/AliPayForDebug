//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol APOpenAPIDelegate;

@interface APOpenAPI : NSObject
{
    id <APOpenAPIDelegate> _delegate;
}

+ (_Bool)sendResp:(id)arg1 toApp:(id)arg2;
+ (_Bool)sendReq:(id)arg1 toApp:(id)arg2;
+ (_Bool)sendResp:(id)arg1;
+ (_Bool)sendReq:(id)arg1;
+ (id)getParametersOfUrl:(id)arg1;
+ (_Bool)handleOpenURL:(id)arg1 delegate:(id)arg2;
+ (_Bool)openAPApp;
+ (id)getApiVersion;
+ (id)getAPAppInstallUrl;
+ (_Bool)isAPAppSupportShareTimeLine;
+ (_Bool)isAPAppSupportOpenApi;
+ (_Bool)isAPAppInstalled;
+ (_Bool)registerAppWithApp:(id)arg1;
+ (_Bool)registerApp:(id)arg1 withDescription:(id)arg2;
+ (_Bool)registerApp:(id)arg1;
+ (id)shareOpenApi;
+ (id)urlDecode:(id)arg1;
+ (id)shareUrlEncode:(id)arg1;
@property(nonatomic) __weak id <APOpenAPIDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onResp:(id)arg1;
- (void)onReq:(id)arg1;

@end

