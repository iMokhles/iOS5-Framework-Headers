/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIKeyboardImpl.h>

@interface UIKeyboardImpl (TestingSupport)
- (void)_releaseInputManager;
- (void)_resetInputLocation;
- (BOOL)_needsCandidates;
- (void)_setNeedsCandidates:(BOOL)arg1;
- (int)_positionInCandidateList:(id)arg1;
- (BOOL)_hasCandidates;
- (id)_getAutocorrection;
- (void)_setAutocorrects:(BOOL)arg1;
- (id)_getLocalizedInputMode;
- (id)_getCurrentKeyboardName;
- (id)_getCurrentKeyplaneName;
@end

