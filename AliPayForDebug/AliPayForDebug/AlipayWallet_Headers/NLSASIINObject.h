//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NLSASIINObject : NSObject
{
    NSString *_uid;
    NSString *_action_src;
    NSString *_location;
    NSString *_search_id;
    NSString *_session_id;
    NSString *_search_src;
    NSString *_query_index;
    NSString *_current_city;
    NSString *_nlu_param;
}

@property(copy, nonatomic) NSString *nlu_param; // @synthesize nlu_param=_nlu_param;
@property(copy, nonatomic) NSString *current_city; // @synthesize current_city=_current_city;
@property(copy, nonatomic) NSString *query_index; // @synthesize query_index=_query_index;
@property(copy, nonatomic) NSString *search_src; // @synthesize search_src=_search_src;
@property(copy, nonatomic) NSString *session_id; // @synthesize session_id=_session_id;
@property(copy, nonatomic) NSString *search_id; // @synthesize search_id=_search_id;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *action_src; // @synthesize action_src=_action_src;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)init;

@end
