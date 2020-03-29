//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MunionImageDataModel, NSString;

@interface MunionImageRequest : NSObject
{
    long long _requestCnt;
    NSString *_url;
    MunionImageDataModel *_userData;
    CDUnknownBlockType _successedBlock;
    CDUnknownBlockType _failedBlock;
    id _imageDownloadTask;
}

@property(nonatomic) __weak id imageDownloadTask; // @synthesize imageDownloadTask=_imageDownloadTask;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successedBlock; // @synthesize successedBlock=_successedBlock;
@property(retain, nonatomic) MunionImageDataModel *userData; // @synthesize userData=_userData;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long requestCnt; // @synthesize requestCnt=_requestCnt;
- (void).cxx_destruct;
- (void)retrySendRequest;
- (void)sendImageRequest:(id)arg1 finishedBlock:(CDUnknownBlockType)arg2 failedBlock:(CDUnknownBlockType)arg3;
- (void)initProperty:(id)arg1;
- (id)initWithUrl:(id)arg1;

@end
