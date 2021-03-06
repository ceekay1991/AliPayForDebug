//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface LFEntryModel : NSObject <NSCoding>
{
    _Bool _firstShow;
    _Bool _showEntrance;
    _Bool _dotShownInEntrance;
    _Bool _dotShownInFriendTabLifeGroupCell;
    NSString *_entryType;
    NSString *_entryIcon;
    NSString *_entryTitle;
    NSString *_entryMemo;
    NSString *_jumpUrl;
    long long _createTime;
    NSString *_badgeType;
    NSString *_badgeStr;
    NSString *_dataSource;
    NSString *_extInfo;
}

+ (id)entryModelFromSyncMessage:(id)arg1 source:(id)arg2;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool dotShownInFriendTabLifeGroupCell; // @synthesize dotShownInFriendTabLifeGroupCell=_dotShownInFriendTabLifeGroupCell;
@property(nonatomic) _Bool dotShownInEntrance; // @synthesize dotShownInEntrance=_dotShownInEntrance;
@property(nonatomic) _Bool showEntrance; // @synthesize showEntrance=_showEntrance;
@property(nonatomic) _Bool firstShow; // @synthesize firstShow=_firstShow;
@property(retain, nonatomic) NSString *badgeStr; // @synthesize badgeStr=_badgeStr;
@property(retain, nonatomic) NSString *badgeType; // @synthesize badgeType=_badgeType;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSString *entryMemo; // @synthesize entryMemo=_entryMemo;
@property(retain, nonatomic) NSString *entryTitle; // @synthesize entryTitle=_entryTitle;
@property(retain, nonatomic) NSString *entryIcon; // @synthesize entryIcon=_entryIcon;
@property(retain, nonatomic) NSString *entryType; // @synthesize entryType=_entryType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

