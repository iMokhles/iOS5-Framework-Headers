/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSTextCheckingResult.h>

@class NSArray, NSRegularExpression;

@interface NSRegularExpressionCheckingResult : NSTextCheckingResult
{
}

- (id)resultByAdjustingRangesWithOffset:(int)arg1;
- (unsigned long long)resultType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
@property(readonly) NSArray *rangeArray;
@property(readonly) NSRegularExpression *regularExpression;
- (id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2;
- (id)initWithRanges:(struct _NSRange *)arg1 count:(unsigned int)arg2 regularExpression:(id)arg3;

@end

