//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CCCard-Protocol.h"
#import "CSCard-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface CCard : NSObject <NSCoding, CCCard, CSCard>
{
    _Bool _accessibilityInside;
    int _groupType;
    NSString *_template_code;
    NSString *_template_data;
    id _template_data_json_value;
    NSString *_card_id;
    NSString *_client_card_id;
    NSString *_ext;
    NSString *_backup_data;
    NSString *_fileId;
    NSString *_version;
    NSString *_md5;
    NSString *_bizCode;
    id _originBizData;
    NSDictionary *_template_dataDict;
    NSMutableDictionary *_extDict;
    NSString *_mQuickId;
    NSString *_mVersion;
    NSString *_mResource;
    NSString *_layoutType;
    NSString *_tplType;
    NSString *_downgrade;
}

@property(copy, nonatomic) NSString *downgrade; // @synthesize downgrade=_downgrade;
@property(copy, nonatomic) NSString *tplType; // @synthesize tplType=_tplType;
@property(copy, nonatomic) NSString *layoutType; // @synthesize layoutType=_layoutType;
@property(copy, nonatomic) NSString *mResource; // @synthesize mResource=_mResource;
@property(copy, nonatomic) NSString *mVersion; // @synthesize mVersion=_mVersion;
@property(retain, nonatomic) NSString *mQuickId; // @synthesize mQuickId=_mQuickId;
@property(retain) NSMutableDictionary *extDict; // @synthesize extDict=_extDict;
@property(readonly) NSDictionary *template_dataDict; // @synthesize template_dataDict=_template_dataDict;
@property(nonatomic) _Bool accessibilityInside; // @synthesize accessibilityInside=_accessibilityInside;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
@property(retain, nonatomic) id originBizData; // @synthesize originBizData=_originBizData;
@property(copy, nonatomic) NSString *bizCode; // @synthesize bizCode=_bizCode;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(copy, nonatomic) NSString *backup_data; // @synthesize backup_data=_backup_data;
@property(copy, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(copy, nonatomic) NSString *client_card_id; // @synthesize client_card_id=_client_card_id;
@property(copy, nonatomic) NSString *card_id; // @synthesize card_id=_card_id;
@property(retain, nonatomic) id template_data_json_value; // @synthesize template_data_json_value=_template_data_json_value;
@property(copy, nonatomic) NSString *template_data; // @synthesize template_data=_template_data;
@property(copy, nonatomic) NSString *template_code; // @synthesize template_code=_template_code;
- (void).cxx_destruct;
- (void)dealloc;
- (id)cardBaseAddress;
- (id)environmentInfo;
- (id)allTemplates;
- (id)ccTemplate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)updateWithSOOptionCount:(id)arg1;
- (id)convertToCCSection;
- (void)updateTemplateDataDic:(id)arg1;
- (id)templateData_infoArea;
- (id)openSchemeMonitorInfo:(id)arg1;
- (id)baseCardMonitorInfo;
- (id)bizLogMonitorDic;
- (id)bizLogMonitorDicWithDic:(id)arg1;
- (id)baseLogExtContentInfo;
- (id)basedtLogMonitorInfo;
- (id)basedtLogMonitorInfo:(id)arg1;
- (id)baseLogExtInfo;
- (id)getClickCardBizLogMonitor:(id)arg1 dtLogMonitor:(id)arg2 contentsDic:(id)arg3;
- (id)getcontensInfo:(id)arg1;
- (id)getcontensFamily:(id)arg1;
- (id)getExtBizLogMonitor:(id)arg1 dtLogMonitor:(id)arg2;
- (id)dtLogMonitorInfo:(_Bool)arg1;
- (id)dtLogMonitorInfo;
- (id)bizLogMonitorInfo;
- (id)actionBizNo:(id)arg1;
- (void)setActionInfo:(id)arg1 forType:(id)arg2;
- (id)actionInfoForType:(id)arg1;
- (_Bool)updateWithSOOption:(id)arg1 action:(int)arg2 params:(id)arg3;
- (_Bool)updateWithSOOption:(id)arg1 action:(int)arg2;
- (id)dataSyncKey;
- (id)subCards;
- (void)dataSyncFromCard:(id)arg1 type:(id)arg2;
- (id)convertToHCCategoryPBVO;
@property(readonly, nonatomic) NSString *topicId;
@property(readonly, nonatomic) _Bool stickFeed;
@property(readonly, nonatomic) NSString *rewardSceneCode;
@property(readonly, nonatomic) NSString *rewardBizType;
@property(readonly, nonatomic) NSString *replySceneCode;
@property(readonly, nonatomic) NSString *replyBizType;
@property(readonly, nonatomic) NSString *praiseSceneCode;
@property(readonly, nonatomic) NSString *praiseBizType;
@property(readonly, nonatomic) NSNumber *recommendType;
@property(readonly, nonatomic) NSString *sceneCode;
@property(readonly, nonatomic) NSString *bizType;
@property(readonly, nonatomic) NSString *bizNo;
@property(readonly, nonatomic) NSString *loginId;
@property(readonly, nonatomic) NSString *userId;
@property(readonly, nonatomic) NSString *clubId;
@property(readonly, nonatomic) NSString *feedId;

// Remaining properties
@property(copy, nonatomic) NSString *cols;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

