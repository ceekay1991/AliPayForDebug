//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JscHelper : NSObject
{
}

+ (union _GLKMatrix4)calTexUVMatWithOri:(long long)arg1 pos:(long long)arg2;
+ (struct OpaqueJSValue *)makeJsJsArrayWithGL3x3Matrix:(union _GLKMatrix3)arg1 ctx:(struct OpaqueJSContext *)arg2;
+ (struct OpaqueJSValue *)makeJsJsArrayWithGL4x4Matrix:(union _GLKMatrix4)arg1 ctx:(struct OpaqueJSContext *)arg2;
+ (struct OpaqueJSValue *)makeJsHitResult:(id)arg1 ctx:(struct OpaqueJSContext *)arg2;
+ (struct OpaqueJSValue *)makeJsARCamera:(id)arg1 ctx:(struct OpaqueJSContext *)arg2;
+ (struct OpaqueJSValue *)makeJsARAnchor:(id)arg1 ctx:(struct OpaqueJSContext *)arg2;
+ (struct OpaqueJSValue *)makeJsARFrame:(id)arg1 anchorList:(id)arg2 ctx:(struct OpaqueJSContext *)arg3;
+ (struct OpaqueJSValue *)nsstringToJsValue:(struct OpaqueJSContext *)arg1 string:(id)arg2;
+ (id)jsValueToNSString:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2;

@end
