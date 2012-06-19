/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <QuartzCore/CAAnimation.h>

@class CAValueFunction, NSString;

@interface CAPropertyAnimation : CAAnimation
{
}

+ (id)animationWithKeyPath:(id)arg1;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (BOOL)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
@property(getter=isAdditive) BOOL additive;
@property(copy) NSString *keyPath;
@property(getter=isCumulative) BOOL cumulative;
@property(retain) CAValueFunction *valueFunction;
- (BOOL)additive;
- (BOOL)cumulative;

@end

