//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColor, NSMutableArray;

@interface GChFingerImageCache : NSObject
{
    NSMutableArray *fingerReg;
    NSMutableArray *fingerOpt;
    NSMutableArray *fingerFlag;
    NSMutableArray *barreReg;
    NSMutableArray *barreOpt;
    NSMutableArray *stringPct;
    float sliceHeight;
    struct CGRect singleSliceRect;
    struct CGRect barreSliceRect;
    NSColor *topBarColor;
    NSColor *topShadowColor;
    NSColor *gridLinesColor;
    NSColor *gridShadowColor;
    NSColor *labelColor;
    BOOL canEnlarge;
    int dbgColorID;
}

- (id)fretNrColor;
- (id)labelColor;
- (id)gridShadowColor;
- (id)gridLinesColor;
- (id)topShadowColor;
- (id)topBarColor;
- (id)dbColorFromColorID;
- (void)setDbgColorID:(int)arg1;
- (int)dbgColorID;
- (BOOL)canEnlarge;
- (float)sliceHeight;
- (void)drawStringSpotAtRect:(struct CGRect)arg1 asOpen:(BOOL)arg2 dbg_drawFrames:(BOOL)arg3;
- (void)drawFingerSpotWithNumber:(int)arg1 imageRect:(struct CGRect)arg2 fingerPointType:(unsigned char)arg3 numOfStrings:(int)arg4 dbg_drawFrames:(BOOL)arg5;
- (void)drawBarreImageWithNumber1:(int)arg1 imageRect:(struct CGRect)arg2 fingerPointType:(unsigned char)arg3 isSmallBarre:(BOOL)arg4 dbg_drawFrames:(BOOL)arg5;
- (void)drawFingerImageWithNumber1:(int)arg1 imageRect:(struct CGRect)arg2 fingerPointType:(unsigned char)arg3 dbg_drawFrames:(BOOL)arg4;
- (void)dealloc;
- (id)initFingerImageCache:(int)arg1;

@end

