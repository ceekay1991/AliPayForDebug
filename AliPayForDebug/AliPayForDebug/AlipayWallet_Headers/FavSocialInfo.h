//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSMutableDictionary, PublicPlatformBizService;

@interface FavSocialInfo : NSObject
{
    NSMutableArray *_needSyncGroupsInfo;
    NSMutableArray *_needSyncChatroomsInfo;
    NSMutableDictionary *_needSyncUsersInfo;
    NSLock *_lock;
    PublicPlatformBizService *_ppService;
}

+ (id)shareSocialInfo;
@property(retain, nonatomic) PublicPlatformBizService *ppService; // @synthesize ppService=_ppService;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *needSyncUsersInfo; // @synthesize needSyncUsersInfo=_needSyncUsersInfo;
@property(retain, nonatomic) NSMutableArray *needSyncChatroomsInfo; // @synthesize needSyncChatroomsInfo=_needSyncChatroomsInfo;
@property(retain, nonatomic) NSMutableArray *needSyncGroupsInfo; // @synthesize needSyncGroupsInfo=_needSyncGroupsInfo;
- (void).cxx_destruct;
- (void)triggerSync;
- (void)queryLatestUserInfoWithUserId:(id)arg1 userLoginId:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)queryUserInfoWithUserId:(id)arg1 userLoginId:(id)arg2;
- (id)queryChatroomInfoWithChatroomId:(id)arg1;
- (id)queryGroupInfoWithGroupId:(id)arg1;
- (id)queryUserInfoWithPublicId:(id)arg1;

@end

