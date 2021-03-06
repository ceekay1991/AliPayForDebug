//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CKAttributedLabelAttachment : NSObject
{
    int _imageIndex;
    int _alignment;
    double _fontAscent;
    double _fontDescent;
    struct CGSize _maxSize;
    struct UIEdgeInsets _margin;
}

+ (id)attachmentWithIndex:(int)arg1 margin:(struct UIEdgeInsets)arg2 alignment:(int)arg3 maxSize:(struct CGSize)arg4;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) double fontDescent; // @synthesize fontDescent=_fontDescent;
@property(nonatomic) double fontAscent; // @synthesize fontAscent=_fontAscent;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(nonatomic) int imageIndex; // @synthesize imageIndex=_imageIndex;
- (void)dealloc;
- (struct CGSize)attachmentSize;
- (struct CGSize)calculateContentSize;
- (struct CGSize)boxSize;

@end

