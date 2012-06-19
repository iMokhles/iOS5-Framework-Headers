/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKTableViewCell.h>

@class GKCellBackgroundView, NSArray;

@interface GKMultiColumnTableViewCell : GKTableViewCell
{
    unsigned int _columnCount;
    NSArray *_contentsArray;
    int _selectedColumn;
    int _highlightedColumn;
    float _columnSeparatorWidth;
    SEL _columnCountSetter;
    SEL _selectedColumnSetter;
    BOOL _multiCellEnabled;
}

@property(nonatomic) BOOL multiCellEnabled; // @synthesize multiCellEnabled=_multiCellEnabled;
@property(nonatomic) SEL selectedColumnSetter; // @synthesize selectedColumnSetter=_selectedColumnSetter;
@property(nonatomic) SEL columnCountSetter; // @synthesize columnCountSetter=_columnCountSetter;
@property(copy, nonatomic) NSArray *contentsArray; // @synthesize contentsArray=_contentsArray;
@property(nonatomic) float columnSeparatorWidth; // @synthesize columnSeparatorWidth=_columnSeparatorWidth;
@property(nonatomic) int highlightedColumn; // @synthesize highlightedColumn=_highlightedColumn;
@property(nonatomic) int selectedColumn; // @synthesize selectedColumn=_selectedColumn;
@property(nonatomic) unsigned int columnCount; // @synthesize columnCount=_columnCount;
- (void)configureBackgroundView;
- (void)updateBackgroundViews;
@property(readonly, nonatomic) GKCellBackgroundView *selectedCellBackgroundView;
@property(readonly, nonatomic) GKCellBackgroundView *cellBackgroundView;
- (int)conditionalActiveColumn:(BOOL)arg1;
@property(readonly, nonatomic) int activeColumn;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelectedColumn:(int)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlightedColumn:(int)arg1 highlighted:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_updateHighlightColorsForView:(id)arg1 highlighted:(BOOL)arg2;
- (void)multiColumnHighlight:(BOOL)arg1 view:(id)arg2;
- (void)_multiColumnHighlight:(BOOL)arg1 view:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 tableViewStyle:(int)arg3 backgroundStyle:(int)arg4;

@end

