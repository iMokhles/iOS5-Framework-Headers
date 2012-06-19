/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class EKEvent, NSMutableArray, UILabel, UIScrollView;

@interface EKDayAllDayView : UIView
{
    int _orientation;
    NSMutableArray *_occurrenceViews;
    UILabel *_allDay;
    BOOL _allDayLabelHighlighted;
    UIScrollView *_scroller;
    float _occurrenceInset;
    id <EKDayAllDayViewDelegate> _delegate;
    BOOL _allowSelection;
    BOOL _showSelection;
    BOOL _dimsNonSelectedItems;
    int _maxVisibleItems;
    EKEvent *_selectedEvent;
    EKEvent *_dimmedOccurrence;
    BOOL _usesSmallText;
    UIView *_splitterView;
}

@property(retain, nonatomic) EKEvent *dimmedOccurrence; // @synthesize dimmedOccurrence=_dimmedOccurrence;
@property(nonatomic) id <EKDayAllDayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int maxVisibleItems; // @synthesize maxVisibleItems=_maxVisibleItems;
- (BOOL)isAllDayLabelHighlighted;
- (void)setAllDayLabelHighlighted:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)dayOccurrenceViewClicked:(id)arg1 atPoint:(struct CGPoint)arg2;
@property(nonatomic) BOOL showsSelection;
@property(nonatomic) BOOL allowsOccurrenceSelection;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)setOccurrences:(id)arg1;
- (float)_allDayAreaHeightForEventCount:(int)arg1;
- (void)removeAllOccurrenceViews;
- (void)setOrientation:(int)arg1;
- (void)setOccurrenceInset:(float)arg1 labelInset:(float)arg2;
@property(nonatomic) BOOL dimsNonSelectedItems;
- (void)selectEvent:(id)arg1;
- (id)selectedEvent;
- (BOOL)containsEvent:(id)arg1;
- (void)addViewToScroller:(id)arg1;
- (float)nextAvailableOccurrenceViewYOrigin;
- (id)occurrenceViewForEvent:(id)arg1;
- (float)firstEventYOffset;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

