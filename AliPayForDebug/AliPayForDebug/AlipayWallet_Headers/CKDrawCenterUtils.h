//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CKDrawCenterUtils : NSObject
{
}

+ (long long)maxLineNumber;
+ (double)getScreenScale;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 drawString:(id)arg2 numberOflines:(long long)arg3 maxFont:(id)arg4 lineHeight:(double)arg5 lineSpacing:(double)arg6 framesetter:(struct __CTFramesetter *)arg7 getDrawItems:(CDUnknownBlockType)arg8;
+ (void)drawALine:(struct CGContext *)arg1 from:(struct CGPoint)arg2 to:(struct CGPoint)arg3 color:(id)arg4;
+ (void)drawALineThroughCTLine:(struct CGContext *)arg1 ctLine:(struct __CTLine *)arg2 xOffset:(double)arg3 yOffset:(double)arg4 lineColor:(id)arg5;
+ (long long)drawText:(struct __CFArray *)arg1 displayRect:(struct CGRect)arg2 lineOrigins:(struct CGPoint *)arg3 context:(struct CGContext *)arg4 rect:(struct CGRect)arg5 attributedString:(id)arg6 maxFont:(id)arg7 lineBreak:(unsigned char)arg8 lineHeight:(double)arg9 lineSpace:(double)arg10 numberOffLines:(long long)arg11 alpha:(double)arg12 isCancelled:(CDUnknownBlockType)arg13;
+ (id)drawAttachments:(id)arg1 attachments:(id)arg2 lines:(struct __CFArray *)arg3 lineOrigins:(struct CGPoint *)arg4 numberOffLines:(long long)arg5 rect:(struct CGRect)arg6 font:(id)arg7 maxFont:(id)arg8 lineHeight:(double)arg9 ctlineSpacing:(double)arg10 lineBreak:(unsigned char)arg11 alpha:(double)arg12 isCancelled:(CDUnknownBlockType)arg13;
+ (unsigned long long)drawTextLines:(struct CGSize)arg1 lineHeight:(double)arg2 maxFont:(id)arg3 numberOffLines:(long long)arg4;

@end

