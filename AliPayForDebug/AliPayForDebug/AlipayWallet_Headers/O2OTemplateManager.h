//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface O2OTemplateManager : NSObject
{
}

+ (void)deserializeTemplateJson:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (id)defaultManager;
- (void)downloadRawData:(struct NSDictionary *)arg1 withCompletion:(CDUnknownBlockType)arg2 pageName:(id)arg3 bundleName:(id)arg4;
- (void)downloadTemplates:(struct NSDictionary *)arg1 withCompletion:(CDUnknownBlockType)arg2 templateSource:(unsigned long long)arg3 page:(id)arg4 bundleName:(id)arg5;
- (id)managerForSource:(unsigned long long)arg1;
- (id)resultsForSections:(id)arg1 templates:(id)arg2 hasFailed:(_Bool *)arg3;
- (void)bindNativeId:(id)arg1 withTemplates:(id)arg2;
- (id)processItems:(id)arg1 templates:(id)arg2 hasFailed:(_Bool *)arg3;
- (void)loadLocalTemplateWithItems:(id)arg1 bundleName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadTemplates:(id)arg1 withItems:(id)arg2 completion:(CDUnknownBlockType)arg3 page:(id)arg4 bundleName:(id)arg5 forceSilent:(_Bool)arg6 downGrade:(_Bool)arg7;
- (void)downloadTemplate:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 page:(id)arg3 bundleName:(id)arg4 downGrade:(_Bool)arg5;
- (void)downloadTemplates:(id)arg1 withItems:(id)arg2 completion:(CDUnknownBlockType)arg3 page:(id)arg4 bundleName:(id)arg5 downGrade:(_Bool)arg6;

@end

