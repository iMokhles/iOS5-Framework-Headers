/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MessageUI/MFComposeHeaderView.h>

@class UISegmentedControl;

@interface MFComposeImageSizeView : MFComposeHeaderView
{
    UISegmentedControl *_segmentedControl;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (unsigned long)_segmentIndexForScale:(int)arg1;
- (void)setSizeDescription:(id)arg1 forScale:(int)arg2;
- (void)setScale:(int)arg1;
- (void)segmentedControlChanged;

@end

