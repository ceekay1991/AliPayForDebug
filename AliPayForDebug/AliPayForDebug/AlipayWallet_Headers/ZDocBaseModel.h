//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ZDocBaseModel : NSObject
{
    NSString *_className;
}

+ (id)defaultModel;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
- (void).cxx_destruct;
- (id)dictionaryToJsonString:(id)arg1;
- (id)jsonStringToDic:(id)arg1;
- (id)getPropertyValueByObj:(id)arg1;
- (id)initWithDict:(id)arg1 className:(id)arg2;
- (id)initWithJsonString:(id)arg1;
- (id)modelJson;
- (id)modelDictionary;
- (id)modelFromDict:(id)arg1;
- (id)modelFromJson:(id)arg1;

@end
