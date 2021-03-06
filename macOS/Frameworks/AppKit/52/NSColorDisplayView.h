//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer, NSColor;

__attribute__((visibility("hidden")))
@interface NSColorDisplayView : NSView
{
    NSColor *_color;
    CALayer *_diagonalLayer;
    CALayer *_transparentColorLayer;
    CALayer *_colorLayer;
}

+ (id)keyPathsForValuesInvalidatingDisplay;
@property(copy) NSColor *color; // @synthesize color=_color;
- (void)layout;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)_shouldDoLayerPerformanceUpdates;

@end

