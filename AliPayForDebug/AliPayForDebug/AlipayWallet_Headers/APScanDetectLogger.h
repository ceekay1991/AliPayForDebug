//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface APScanDetectLogger : NSObject
{
    NSString *_code_value;
    NSString *_ocr_result;
    NSString *_ocr_error;
    NSString *_ocr_spend;
    NSString *_text_result;
    NSString *_text_error;
    NSString *_text_spend;
    NSString *_text_hit;
    NSString *_img_wh;
    NSString *_pattern_result;
    NSString *_pattern_hit;
    NSString *_pattern_spend;
    NSString *_pattern_error;
}

@property(retain, nonatomic) NSString *pattern_error; // @synthesize pattern_error=_pattern_error;
@property(retain, nonatomic) NSString *pattern_spend; // @synthesize pattern_spend=_pattern_spend;
@property(retain, nonatomic) NSString *pattern_hit; // @synthesize pattern_hit=_pattern_hit;
@property(retain, nonatomic) NSString *pattern_result; // @synthesize pattern_result=_pattern_result;
@property(retain, nonatomic) NSString *img_wh; // @synthesize img_wh=_img_wh;
@property(retain, nonatomic) NSString *text_hit; // @synthesize text_hit=_text_hit;
@property(retain, nonatomic) NSString *text_spend; // @synthesize text_spend=_text_spend;
@property(retain, nonatomic) NSString *text_error; // @synthesize text_error=_text_error;
@property(retain, nonatomic) NSString *text_result; // @synthesize text_result=_text_result;
@property(retain, nonatomic) NSString *ocr_spend; // @synthesize ocr_spend=_ocr_spend;
@property(retain, nonatomic) NSString *ocr_error; // @synthesize ocr_error=_ocr_error;
@property(retain, nonatomic) NSString *ocr_result; // @synthesize ocr_result=_ocr_result;
@property(retain, nonatomic) NSString *code_value; // @synthesize code_value=_code_value;
- (void).cxx_destruct;
- (void)log;
- (id)getMap;

@end
