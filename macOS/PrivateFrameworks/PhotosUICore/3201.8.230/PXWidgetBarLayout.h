//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXTilingLayout.h>

@interface PXWidgetBarLayout : PXTilingLayout
{
    struct CGRect _contentBounds;
    double _height;
}

+ (struct PXTileIdentifier)tileIdentifier;
@property(nonatomic) double height; // @synthesize height=_height;
- (BOOL)getGeometry:(out struct PXTileGeometry *)arg1 group:(out unsigned long long *)arg2 userData:(out id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)contentBounds;
- (void)prepareLayout;
- (void)setReferenceSize:(struct CGSize)arg1;

@end

