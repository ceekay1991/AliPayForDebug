//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface O2OStorageInfo : NSObject
{
    unsigned long long _maxStorage;
    unsigned long long _freeStorage;
    unsigned long long _readSpeed;
    unsigned long long _writeSpeed;
    unsigned long long _deviceLevel;
}

@property(nonatomic) unsigned long long deviceLevel; // @synthesize deviceLevel=_deviceLevel;
@property(nonatomic) unsigned long long writeSpeed; // @synthesize writeSpeed=_writeSpeed;
@property(nonatomic) unsigned long long readSpeed; // @synthesize readSpeed=_readSpeed;
@property(nonatomic) unsigned long long freeStorage; // @synthesize freeStorage=_freeStorage;
@property(nonatomic) unsigned long long maxStorage; // @synthesize maxStorage=_maxStorage;

@end

