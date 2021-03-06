//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GWFontManager : NSObject
{
}

+ (id)replaceUnicode:(id)arg1;
+ (id)blurImageWithName:(id)arg1 fontName:(id)arg2 width:(double)arg3 color:(id)arg4 blurRadius:(double)arg5;
+ (id)imageWithUnicode:(id)arg1 width:(double)arg2;
+ (id)imageWithUnicode:(id)arg1 width:(double)arg2 color:(id)arg3;
+ (id)fontWithUnicode:(id)arg1 size:(double)arg2;
+ (id)fontNameWithUnicode:(id)arg1;
+ (id)unicodeOfChar:(unsigned short)arg1;
+ (id)unicodeOfString:(id)arg1;
+ (id)getUnicodeShown:(id)arg1;
+ (_Bool)isExistUnicodeInFontName:(id)arg1 unicode:(id)arg2;
+ (_Bool)isExistUnicode:(id)arg1;
+ (void)loadFont;
+ (id)unregisterFontWithName:(id)arg1;
+ (id)registerFontWithData:(id)arg1;
+ (id)registerFontWithPath:(id)arg1;
+ (id)standardFontName;

@end

