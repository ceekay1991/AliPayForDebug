//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableString.h>

@interface NSMutableString (SafeCushion)
+ (void)safeCushion_swizzleNSMutableString:(id)arg1;
- (id)safeCushion_SubstringWithRange:(struct _NSRange)arg1;
- (id)safeCushion_SubstringToIndex:(unsigned long long)arg1;
- (id)safeCushion_SubstringFromIndex:(unsigned long long)arg1;
- (void)safeCushion_DeleteCharactersInRange:(struct _NSRange)arg1;
- (void)safeCushion_InsertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)safeCushion_AppendString:(id)arg1;
@end
