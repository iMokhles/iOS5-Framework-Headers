/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

#import "NSCoding-Protocol.h"

@class UIColor;

@interface UISwitch : UIControl <NSCoding>
{
    id _control;
    float _enabledAlpha;
}

@property(nonatomic) float enabledAlpha; // @synthesize enabledAlpha=_enabledAlpha;
- (void)_populateArchivedSubviews:(id)arg1;
@property(retain, nonatomic) UIColor *onTintColor;
- (id)_onTintColor;
- (void)_setOnTintColor:(id)arg1;
- (id)_onColor;
- (void)_setOnColor:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setAlpha:(float)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_onAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isOn) BOOL on; // @dynamic on;
- (void)dealloc;
- (void)_animateToOn:(BOOL)arg1 withDuration:(float)arg2 sendAction:(BOOL)arg3;
- (void)encodeWithCoder:(id)arg1;
- (void)_encodeFrameWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)_handleTapNL:(id)arg1;
- (void)_handlePanNL:(id)arg1;
- (void)_commonInitNewLook;
- (BOOL)_useOldSize;

@end

