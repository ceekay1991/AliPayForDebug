//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface REUtils : NSObject
{
}

+ (id)getEnvelopeIconByInfo:(id)arg1;
+ (void)showAlertWithDictionary:(id)arg1;
+ (_Bool)existItem:(id)arg1 inList:(id)arg2;
+ (id)uniqList:(id)arg1;
+ (id)fetchSceneCodeWithProdCode:(id)arg1;
+ (void)showPayFailAlertInView:(id)arg1 tips:(id)arg2;
+ (id)createLateTipsWithCrowdDuration:(int)arg1;
+ (id)fetchConfigWithKey:(id)arg1;
+ (id)walletSwitchConfigWithKey:(id)arg1;
+ (int)screenCategroy;
+ (id)queryURLParams:(id)arg1;
+ (id)stripTopAndEndBlankSpaceFromString:(id)arg1;
+ (id)fetchStatusDescriptionWith:(unsigned long long)arg1;
+ (id)restrictContainEmojiText:(id)arg1 maxLength:(long long)arg2;
+ (void)restrictRemarkInTextView:(id)arg1 maxLength:(long long)arg2;
+ (void)restrictRemarkInTextView:(id)arg1;
+ (double)convertPixelToFontSize:(double)arg1;
+ (int)convertMinutesToHours:(int)arg1;
+ (id)currentShowName;
+ (id)currentUserId;
+ (double)valueAfterScale:(double)arg1 minRatio:(double)arg2;
+ (double)valueAfterScale:(double)arg1;
+ (unsigned long long)receiveType:(id)arg1;
+ (id)findController:(Class)arg1;
+ (void)removeObjectsAfter:(id)arg1 inArray:(id)arg2;
+ (id)findInstanceWithClassName:(Class)arg1 inArray:(id)arg2;
+ (double)estimateFontSizeForText:(id)arg1 constrainedToSize:(struct CGSize)arg2;
+ (struct CGSize)estimateSize:(id)arg1 withFont:(id)arg2 constrainedToSize:(struct CGSize)arg3;
+ (_Bool)checkUserIfIsCurLoginUser:(id)arg1;
+ (_Bool)showAlertIfInvalidWithString:(id)arg1;
+ (_Bool)isValidString:(id)arg1;
+ (id)drawSplitLineInView:(id)arg1 originX:(double)arg2 originY:(double)arg3 width:(double)arg4 color:(id)arg5;
+ (id)drawSplitLineAtTopOfView:(id)arg1 color:(id)arg2;
+ (id)drawSplitLineAtBottomOfView:(id)arg1 color:(id)arg2;
+ (void)tryExitRedEnvelopeApp;
+ (_Bool)isCurrentRedEnvelopeApp;
+ (id)appVersion;
+ (id)appID;
+ (void)lottieAsyncWithPath:(id)arg1 withAssetDelegate:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)createNormalTempate;
+ (void)filterPromotionWithTemplates:(id)arg1 spaceInfo:(id)arg2;
+ (void)removeContentInsetAdjustmentBehavior:(id)arg1;
+ (id)transformGiftNewHbTemplateIntoGiftHbTemplate:(id)arg1;
+ (_Bool)handleFollowAction:(id)arg1;
+ (_Bool)safePayNeedRefreshWithRpcResult:(id)arg1;
+ (_Bool)safePayNeedRefresh:(long long)arg1 rpcResult:(id)arg2 isPayUniform:(_Bool)arg3;
+ (id)since1970TimeString;
+ (id)safeToken;
+ (int)yearFromGmtTimestamp:(long long)arg1;
+ (id)currentYear;
+ (id)superCellForView:(id)arg1;
+ (void)startProfileAppWithUserId:(id)arg1 loginId:(id)arg2 withSource:(id)arg3;
+ (void)startProfileAppWithUserInfo:(id)arg1 isSender:(_Bool)arg2 withSource:(id)arg3;
+ (void)setNewProdTemplateConfig:(id)arg1 prodCode:(id)arg2;
+ (id)newProdTemplateConfig:(id)arg1;
+ (void)excuteInMainThread:(CDUnknownBlockType)arg1;
+ (id)imageWithZeroScaleImage:(id)arg1 scaledToHeight:(float)arg2;
+ (id)imageWithImage:(id)arg1 scaledToHeight:(float)arg2;
+ (id)imageWithImage:(id)arg1 scaledToWidth:(float)arg2;
+ (_Bool)invokeErrorCodePlatformIfNeededForRpcResult:(id)arg1;
+ (void)popCertifyAlert;
+ (void)popCertifyAlert:(CDUnknownBlockType)arg1;
+ (void)writeLogWithActionId:(id)arg1 extParams:(id)arg2 seed:(id)arg3 ucId:(id)arg4;
+ (id)formatDate:(id)arg1;
+ (int)convertHexStringToInt:(id)arg1;
+ (void)openUrl:(id)arg1;
+ (id)createLabelWithFontSize:(double)arg1 color:(unsigned int)arg2 text:(id)arg3;
+ (id)createLabelWithFontSize:(double)arg1 color:(unsigned int)arg2;

@end

