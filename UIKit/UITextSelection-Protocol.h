/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITextInput-Protocol.h"

@protocol UITextSelection <UITextInput>
@property(readonly, nonatomic, getter=isEditing) BOOL editing;
@property(readonly, nonatomic, getter=isEditable) BOOL editable;
- (id)rectsForRange:(id)arg1;

@optional
@property(nonatomic) int selectionGranularity;
@end

