//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLgPluginWindow.h"

#import "DisabledFontSoothingWindow.h"

@class MAHUDWindowFrame;

@interface LgHUDPluginWindow : CLgPluginWindow <DisabledFontSoothingWindow>
{
    MAHUDWindowFrame *mCustomFrame;
    BOOL clampAlphaValue;
}

- (void)setClampAlphaValue:(BOOL)arg1;
- (BOOL)clampAlphaValue;
- (id)_findFirstKeyViewInDirection:(unsigned long long)arg1 forKeyLoopGroupingView:(id)arg2;
- (void)buildUIWithAlternateBorder:(BOOL)arg1;
- (void)buildCustomFrameWithAlternateBorder:(BOOL)arg1;
- (id)standardWindowButton:(unsigned long long)arg1;
- (id)closeButton;
- (id)toolbarButton;
- (void)setWindowName:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)showsToolbarButton;
- (void)setShowsToolbarButton:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)performClose:(id)arg1;
- (void)resignKeyWindow;
- (void)becomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (void)cancel:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (struct CGRect)frameRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1;
- (id)initWithFrameRect:(struct CGRect)arg1;
- (id)initWithFrameRect:(struct CGRect)arg1 WithAlternateBorder:(BOOL)arg2;

@end

