/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class UIView;

@protocol UITextMagnifier <NSObject>
@property(nonatomic) struct CGPoint animationPoint;
@property(nonatomic) struct CGPoint magnificationPoint;
@property(readonly, nonatomic) BOOL terminalPointPlacedCarefully;
@property(readonly, nonatomic) struct CGPoint terminalPoint;
@property(readonly, nonatomic) UIView *target;
- (void)autoscrollWillNotStart;
- (void)setAutoscrollDirections:(int)arg1;
- (void)postAutoscrollPoint:(struct CGPoint)arg1;
- (void)stopMagnifying:(BOOL)arg1;
- (void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(struct CGPoint)arg3 offset:(struct CGPoint)arg4 animated:(BOOL)arg5;
@end

