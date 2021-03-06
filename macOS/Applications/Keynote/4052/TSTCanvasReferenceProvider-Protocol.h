//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexSet, NSSet, TSDDrawableInfo, TSTCanvasReference;
@protocol TSTCanvasReferenceController;

@protocol TSTCanvasReferenceProvider <NSObject>
- (BOOL)isEditingDrawable:(TSDDrawableInfo *)arg1;
- (id <TSTCanvasReferenceController>)canvasReferenceController;
- (void)endEditing;
- (void)endEditingReference:(void *)arg1;
- (void)startEditingReference:(void *)arg1;
- (TSTCanvasReference *)editingCanvasReferenceForRange:(CDStruct_fc93c73e)arg1;
- (CDStruct_fc93c73e)resizeReference:(void *)arg1 toRange:(CDStruct_fc93c73e)arg2;
- (CDStruct_fc93c73e)moveReference:(void *)arg1 toRange:(CDStruct_fc93c73e)arg2;
- (NSSet *)references;
- (int)editingType;

@optional
- (void)endEditingWithDoubleTapAtCanvasPoint:(struct CGPoint)arg1;
- (void)setSelectedSeriesIndexes:(NSIndexSet *)arg1;
- (NSIndexSet *)selectedSeriesIndexes;
- (void)menuForSeries:(long long)arg1 canvasPoint:(struct CGPoint)arg2;
@end

