//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UINavigationController;

@interface DTBootLoader : NSObject
{
    _Bool _windowSetupDone;
    _Bool _runonceServicesDone;
    UINavigationController *_navigationController;
}

@property(nonatomic) _Bool runonceServicesDone; // @synthesize runonceServicesDone=_runonceServicesDone;
@property(nonatomic) _Bool windowSetupDone; // @synthesize windowSetupDone=_windowSetupDone;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void).cxx_destruct;
- (id)createNavigationController;
- (id)createWindow;
- (void)didStartBootLoader;
- (void)willStartBootLoader;
- (void)start;
- (void)executePhases:(id)arg1;

@end

