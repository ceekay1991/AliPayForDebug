//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabaseQueue;

@interface MSSDKLocalMarkBook : NSObject
{
    FMDatabaseQueue *_dbQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) FMDatabaseQueue *dbQueue; // @synthesize dbQueue=_dbQueue;
- (void).cxx_destruct;
- (id)getLocalMarkedNumbers:(id)arg1;
- (_Bool)removeLocalMarkByNumbers:(id)arg1;
- (_Bool)addLocalMarkNumbers:(id)arg1;
- (_Bool)createLocalMarkTable;
- (void)close;
- (id)initWithDBPath:(id)arg1;

@end
