/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@interface EKCurrentTimeMarkerView : UIView
{
    unsigned int _showsThumb:1;
    unsigned int _showsLine:1;
}

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) BOOL showsThumb;
@property(nonatomic) BOOL showsLine;
@property(readonly, nonatomic) float markerMidHeight;
@property(readonly, nonatomic) float markerWidth;
- (id)initWithFrame:(struct CGRect)arg1;

@end

