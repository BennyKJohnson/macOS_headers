//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/AVVideoCompositionInstruction-Protocol.h>
#import <NeutrinoCore/NSCopying-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, NUColorSpace, NUComposition, NURenderContext, NURenderJob;

@interface NUVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction, NSCopying>
{
    NSMutableDictionary *_sourceIdentifiersByTrackID;
    NSArray *_requiredSourceTrackIDs;
    NURenderJob *_renderJob;
    NURenderContext *_renderContext;
    NUComposition *_adjustmentComposition;
    NSArray *_pipelineFilters;
    NUColorSpace *_colorSpace;
    CDStruct_1e2b2e48 _renderScale;
    CDStruct_1b6d18a9 _livePhotoKeyFrameTime;
    CDStruct_e83c9415 _timeRange;
}

+ (id)instructionFromBase:(id)arg1;
@property(retain, nonatomic) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(nonatomic) CDStruct_912cb5d2 renderScale; // @synthesize renderScale=_renderScale;
@property(retain, nonatomic) NSArray *pipelineFilters; // @synthesize pipelineFilters=_pipelineFilters;
@property(retain, nonatomic) NUComposition *adjustmentComposition; // @synthesize adjustmentComposition=_adjustmentComposition;
@property(retain) NURenderContext *renderContext; // @synthesize renderContext=_renderContext;
@property(nonatomic) __weak NURenderJob *renderJob; // @synthesize renderJob=_renderJob;
@property(retain, nonatomic) NSArray *requiredSourceTrackIDs; // @synthesize requiredSourceTrackIDs=_requiredSourceTrackIDs;
@property(nonatomic) CDStruct_1b6d18a9 livePhotoKeyFrameTime; // @synthesize livePhotoKeyFrameTime=_livePhotoKeyFrameTime;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (void).cxx_destruct;
- (BOOL)isEqualToInstruction:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)sourceIdentifierForTrackID:(id)arg1;
- (void)setSourceIdentifier:(id)arg1 forTrackID:(id)arg2;
@property(readonly, nonatomic) int passthroughTrackID;
@property(readonly, nonatomic) BOOL containsTweening;
@property(readonly, nonatomic) BOOL enablePostProcessing;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

