//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSColorPicker.h>

#import <AppKit/NSColorPickingCustom-Protocol.h>

@interface NSColorPickerCrayon : NSColorPicker <NSColorPickingCustom>
{
    id crayonView;
    id colorTextField;
    id containerView;
}

- (void)setColor:(id)arg1;
- (id)buttonToolTip;
- (struct CGSize)minContentSize;
- (double)_insertionOrder;
- (id)provideNewView:(BOOL)arg1;
- (long long)currentMode;
- (BOOL)supportsMode:(long long)arg1;
- (void)changeDisplayedColorName:(id)arg1;
- (void)changeColor:(id)arg1;
- (id)initWithPickerMask:(unsigned long long)arg1 colorPanel:(id)arg2;

@end

