//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WPTaskUnitBase.h"

@class AUParagraphInputBox;

@interface WPTaskUnitTextInput : WPTaskUnitBase
{
    AUParagraphInputBox *_weakInputBox;
}

@property(nonatomic) __weak AUParagraphInputBox *weakInputBox; // @synthesize weakInputBox=_weakInputBox;
- (void).cxx_destruct;
- (void)setCacheData:(id)arg1;
- (id)getCacheData;
- (_Bool)hasInputData:(id *)arg1;
- (id)getInputData;
- (void)loadInputBox;
- (id)initWithData:(id)arg1 width:(long long)arg2;

@end

