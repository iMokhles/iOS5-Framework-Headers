/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UISearchBar.h"

@class GKUITheme;

@interface GKSearchBar : UISearchBar
{
    GKUITheme *_theme;
}

+ (id)searchBarWithTheme:(id)arg1;
@property(retain, nonatomic) GKUITheme *theme; // @synthesize theme=_theme;
- (void)dealloc;
- (void)_destroyCancelButton;

@end

