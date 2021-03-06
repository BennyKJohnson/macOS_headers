//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FRFeedCollectionViewLayoutBlueprint, FRFeedCollectionViewLayoutBlueprintInternal, FRFontManager, NSSet;
@protocol FCNewsAppConfiguration, FRFeedLayoutStorage;

@interface FRFeedLayoutBlueprintRefreshOperation : FCOperation
{
    BOOL _lightweightOnly;
    BOOL _offlineMode;
    FRFeedCollectionViewLayoutBlueprint *_layoutBlueprint;
    id <FRFeedLayoutStorage> _feedLayoutStorage;
    id <FCNewsAppConfiguration> _appConfiguration;
    FCCloudContext *_cloudContext;
    FRFontManager *_fontManager;
    double _desiredLength;
    CDUnknownBlockType _refreshCompletionHandler;
    FRFeedCollectionViewLayoutBlueprintInternal *_resultBlueprint;
    NSSet *_resultModifiedLayoutInfoIDs;
}

- (void).cxx_destruct;
@property(retain) NSSet *resultModifiedLayoutInfoIDs; // @synthesize resultModifiedLayoutInfoIDs=_resultModifiedLayoutInfoIDs;
@property(copy) FRFeedCollectionViewLayoutBlueprintInternal *resultBlueprint; // @synthesize resultBlueprint=_resultBlueprint;
@property(copy) CDUnknownBlockType refreshCompletionHandler; // @synthesize refreshCompletionHandler=_refreshCompletionHandler;
@property BOOL offlineMode; // @synthesize offlineMode=_offlineMode;
@property BOOL lightweightOnly; // @synthesize lightweightOnly=_lightweightOnly;
@property double desiredLength; // @synthesize desiredLength=_desiredLength;
@property(retain) FRFontManager *fontManager; // @synthesize fontManager=_fontManager;
@property(retain) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(copy) id <FCNewsAppConfiguration> appConfiguration; // @synthesize appConfiguration=_appConfiguration;
@property(retain) id <FRFeedLayoutStorage> feedLayoutStorage; // @synthesize feedLayoutStorage=_feedLayoutStorage;
@property(copy) FRFeedCollectionViewLayoutBlueprint *layoutBlueprint; // @synthesize layoutBlueprint=_layoutBlueprint;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;
- (id)init;

@end

