//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXFeedLayoutGenerator.h>

@interface PXHorizontalFeedLayoutGenerator : PXFeedLayoutGenerator
{
    struct CGPoint _origin;
    double _referenceHeight;
}

@property(nonatomic) double referenceHeight; // @synthesize referenceHeight=_referenceHeight;
- (BOOL)_addSpecialSequenceBlock:(struct PXTileInfo *)arg1;
- (BOOL)_addColumnWithTiles:(struct PXTileInfo *)arg1 imageFrames:(struct CGRect *)arg2 count:(long long)arg3;
- (void)_enumerateColumnFramesWithContiguousTiles:(struct PXTileInfo *)arg1 count:(long long)arg2 useMagneticGuidelines:(BOOL)arg3 block:(CDUnknownBlockType)arg4;
- (BOOL)_addColumnWithContiguousTiles:(struct PXTileInfo *)arg1 count:(long long)arg2;
- (BOOL)_isAtEndOfColumn;
- (BOOL)_hasLeftSuboptimalColumn;
- (BOOL)_scanNonPanoramaSequence:(struct PXTileInfo *)arg1 count:(long long)arg2;
- (BOOL)_scanSpecialSequenceColumn:(struct PXTileInfo *)arg1 count:(long long *)arg2;
- (BOOL)_scanSpecialSequenceBlock:(struct PXTileInfo *)arg1;
- (BOOL)_scanTripletWithLargeLead:(struct PXTileInfo *)arg1;
- (BOOL)_parseSpecialSubsequenceWithColumnRequired:(BOOL)arg1 columnParsed:(char *)arg2;
- (BOOL)_parseSpecialSequence;
- (BOOL)_parseSpecialTileTriplet;
- (BOOL)_parseTileTriplet;
- (BOOL)_parseTilePair;
- (BOOL)_parseSingleTile;
- (double)referenceDistanceForMagneticGuidelines;
- (BOOL)parseNextTiles;
- (void)willParseTiles;

@end

