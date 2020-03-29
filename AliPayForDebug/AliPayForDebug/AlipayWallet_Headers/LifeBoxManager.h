//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LifeBoxSourceFollow, LifeBoxSourceModel, LifeBoxSourceService;

@interface LifeBoxManager : NSObject
{
    LifeBoxSourceFollow *_lifeFollow;
    LifeBoxSourceService *_service;
    LifeBoxSourceModel *_lifeBoxModel;
}

+ (void)updateAnimitionDate;
+ (_Bool)needAnimition;
+ (void)updateFriendTabLifeGroup;
+ (void)updateFriendTabLifeGroup_Inner;
+ (id)sharedInstance;
@property(retain, nonatomic) LifeBoxSourceModel *lifeBoxModel; // @synthesize lifeBoxModel=_lifeBoxModel;
@property(retain, nonatomic) LifeBoxSourceService *service; // @synthesize service=_service;
@property(retain, nonatomic) LifeBoxSourceFollow *lifeFollow; // @synthesize lifeFollow=_lifeFollow;
- (void).cxx_destruct;
- (void)friendTabChanged;
- (_Bool)needUpdateLifeGroupCell:(id)arg1;
- (void)updateLifeGroup:(id)arg1;
- (id)init;

@end
