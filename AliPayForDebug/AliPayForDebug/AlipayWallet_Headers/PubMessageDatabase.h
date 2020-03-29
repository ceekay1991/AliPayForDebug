//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PubDBDAOProxy;

@interface PubMessageDatabase : NSObject
{
    id <PubDBDAOProxy> _daoProxy;
    NSString *_userID;
    long long _maxMsgId;
}

+ (void)onCleanDB;
+ (id)sharedInstance;
+ (id)formatWhereConditions:(id)arg1;
+ (id)formatDictToString:(id)arg1 joinMark:(id)arg2;
+ (id)formatValue:(id)arg1;
@property long long maxMsgId; // @synthesize maxMsgId=_maxMsgId;
@property(retain) NSString *userID; // @synthesize userID=_userID;
@property(retain) id <PubDBDAOProxy> daoProxy; // @synthesize daoProxy=_daoProxy;
- (void).cxx_destruct;
- (void)deleteMessageWithConditions:(id)arg1 beforeTime:(long long)arg2;
- (void)deleteRecordWithConditions:(id)arg1;
- (void)deleteMessageWithPublicID:(id)arg1 userId:(id)arg2 beforeTime:(long long)arg3;
- (void)deleteMessageWithBizID:(id)arg1;
- (void)deleteMessageWithMID:(id)arg1;
- (void)deletePPChatMessageWithPublicId:(id)arg1;
- (void)deleteTargetIdMessage:(id)arg1 targetExtra:(id)arg2;
- (void)updateMessagePosed:(id)arg1 idInfo:(id)arg2;
- (void)updateMsgToReadBeforeDay:(long long)arg1;
- (void)updateMsgToReadBeforeTime:(long long)arg1;
- (void)updateUserAllMessageToReadWithUserId:(id)arg1;
- (void)updateAllMessageToReadWithTarget:(id)arg1 userId:(id)arg2;
- (void)updateMessageSendingToFail;
- (void)updateMessageReadWithTargetId:(id)arg1 targetExtra:(id)arg2;
- (void)updateRecordWithData:(id)arg1 conditions:(id)arg2;
- (void)updateMessageRead:(id)arg1;
- (void)updateMessageWithDic:(id)arg1 dic:(id)arg2;
- (void)updateMessage:(id)arg1;
- (void)saveMessageToDB:(id)arg1;
- (void)saveMessage:(id)arg1;
- (id)queryMessageWithBizID:(id)arg1;
- (id)queryRecordWithConditions:(id)arg1 mId:(id)arg2 count:(id)arg3 extraConditions:(id)arg4;
- (id)queryLifeChat:(id)arg1 mId:(id)arg2 count:(id)arg3;
- (id)queryPPHistoryConvert:(id)arg1;
- (id)queryRecordWithConditions:(id)arg1 currCount:(id)arg2 count:(id)arg3;
- (id)queryPublicMessage:(id)arg1 targetExtra:(id)arg2 currCount:(id)arg3 count:(id)arg4;
- (id)queryAllTargetIdAbstractInfo:(id)arg1 userId:(id)arg2;
- (id)queryUnreadList:(id)arg1 userId:(id)arg2;
- (id)queryUnreadCount:(id)arg1 userId:(id)arg2;
- (id)queryUnreadChatMessageList:(id)arg1 userId:(id)arg2;
- (id)queryUnreadChatMessageCount:(id)arg1 userId:(id)arg2;
- (id)queryLastChatMessageWithPublicId:(id)arg1 userId:(id)arg2;
- (id)queryAbstractInfo:(id)arg1 userId:(id)arg2;
- (id)queryPublicMessageCount:(id)arg1 targetExtra:(id)arg2 mId:(id)arg3 count:(id)arg4;
- (long long)queryPPChatMessageCount:(id)arg1;
- (id)getMessageWithDic:(id)arg1;
- (void)loadMaxMsgId;
- (void)setUserId:(id)arg1;
- (void)dealloc;
- (void)copyDBToDocWithCompletion:(CDUnknownBlockType)arg1;
- (id)getCurrentDBPath;
- (id)getOldDBPath;
- (void)setDbPath:(id)arg1;
- (id)init;
- (id)queryUnreadTemplateMessageList:(id)arg1;
- (id)queryFeedsMessageMidBiggerThanOrEqualTo:(id)arg1;
- (void)updateFeedsMessageRead;
- (void)deleteCCMessageWithBizMsgIds:(id)arg1 targetId:(id)arg2 userId:(id)arg3;
- (id)queryChatMessageWithMId:(id)arg1 targetId:(id)arg2 userId:(id)arg3;
- (id)queryCCMessageWithbizMsgId:(id)arg1 targetId:(id)arg2 userId:(id)arg3;
- (id)queryOnePageCCMessages:(id)arg1 time:(long long)arg2 limit:(long long)arg3 userId:(id)arg4;
- (id)queryCCMessage:(id)arg1;
- (void)clearCCMessage:(id)arg1 userId:(id)arg2;
- (id)queryUnreadCCMessageList:(id)arg1 currCount:(id)arg2 count:(id)arg3;
- (void)setCCMessageRead:(id)arg1 userId:(id)arg2;
- (id)queryUnreadCCMessageCount:(id)arg1 userId:(id)arg2;

@end
