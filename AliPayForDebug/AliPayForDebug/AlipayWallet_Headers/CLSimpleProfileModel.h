//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLSimpleProfileModel : NSObject
{
    _Bool _isFemale;
    _Bool _showPrivate;
    _Bool _showPost;
    _Bool _accessPrivate;
    int _tagType;
    NSString *_iconUrl;
    NSString *_sceneName;
    NSString *_loaction;
    NSString *_achiveeString;
    NSString *_praiseString;
    NSString *_refuseToast;
}

@property(copy, nonatomic) NSString *refuseToast; // @synthesize refuseToast=_refuseToast;
@property(nonatomic) _Bool accessPrivate; // @synthesize accessPrivate=_accessPrivate;
@property(nonatomic) _Bool showPost; // @synthesize showPost=_showPost;
@property(nonatomic) _Bool showPrivate; // @synthesize showPrivate=_showPrivate;
@property(nonatomic) _Bool isFemale; // @synthesize isFemale=_isFemale;
@property(copy, nonatomic) NSString *praiseString; // @synthesize praiseString=_praiseString;
@property(copy, nonatomic) NSString *achiveeString; // @synthesize achiveeString=_achiveeString;
@property(copy, nonatomic) NSString *loaction; // @synthesize loaction=_loaction;
@property(nonatomic) int tagType; // @synthesize tagType=_tagType;
@property(copy, nonatomic) NSString *sceneName; // @synthesize sceneName=_sceneName;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (void).cxx_destruct;
- (id)initWithProfileResp:(id)arg1;

@end

