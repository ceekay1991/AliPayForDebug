//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface H5TransitionsHandler : NSObject
{
}

+ (_Bool)unifyStartApplication:(id)arg1 params:(id)arg2 appClearTop:(_Bool)arg3 launchMode:(long long)arg4 sourceId:(id)arg5 sceneParams:(id)arg6;
+ (_Bool)unifyStartApplication:(id)arg1 params:(id)arg2 appClearTop:(_Bool)arg3 launchMode:(long long)arg4 sourceId:(id)arg5 sceneParams:(id)arg6 fromSession:(id)arg7 readyTask:(CDUnknownBlockType)arg8 saveTask:(CDUnknownBlockType)arg9 destroyTask:(CDUnknownBlockType)arg10;
+ (_Bool)unifyStartApplication:(id)arg1 params:(id)arg2 launchMode:(long long)arg3 sceneParams:(id)arg4;
+ (_Bool)unifyStartApplication:(id)arg1 params:(id)arg2 animated:(_Bool)arg3 sceneParams:(id)arg4;
+ (_Bool)unifyOpenURL:(id)arg1 sceneParams:(id)arg2 fromWebView:(id)arg3;
+ (_Bool)shouldOpenURL:(id)arg1 appId:(id)arg2 from:(long long)arg3;
+ (_Bool)decideHandleOverUrl2WalletFrame:(id)arg1;

@end

