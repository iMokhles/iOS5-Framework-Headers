/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@interface UIKBHandwritingStrokes : NSObject <NSCopying>
{
    struct KBStrokeList *_strokes;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (const struct KBStrokeList *)strokes;
- (void)dealloc;
- (id)initWithStrokes:(struct KBStrokeList *)arg1;

@end

