//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSource.h>

@class PXAssetsDataSource;

@interface PXCuratedLibraryInlineHeadersDataSource : PXSectionedDataSource
{
    long long _numberOfSections;
    unsigned long long _level;
    CDStruct_2ec95fd7 *_sectionInfos;
    PXAssetsDataSource *_assetsDataSource;
}

@property(readonly, nonatomic) PXAssetsDataSource *assetsDataSource; // @synthesize assetsDataSource=_assetsDataSource;
@property(readonly, nonatomic) CDStruct_2ec95fd7 *sectionInfos; // @synthesize sectionInfos=_sectionInfos;
@property(readonly, nonatomic) unsigned long long level; // @synthesize level=_level;
@property(readonly, nonatomic) long long numberOfSections; // @synthesize numberOfSections=_numberOfSections;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAssetsDataSource:(id)arg1 level:(unsigned long long)arg2 numberOfSections:(long long)arg3 sections:(CDStruct_2ec95fd7 *)arg4;

@end

