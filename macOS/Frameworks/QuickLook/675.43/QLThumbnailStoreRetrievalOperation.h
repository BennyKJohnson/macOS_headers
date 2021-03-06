//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSData, NSDictionary, NSError, NSURL, QLThumbnailAddition;

@interface QLThumbnailStoreRetrievalOperation : NSOperation
{
    NSURL *_documentURL;
    NSError *_error;
    BOOL _finished;
    BOOL _executing;
    BOOL _allowsThumbnailGeneration;
    QLThumbnailAddition *_addition;
    struct __QLThumbnail *_thumbnailRequest;
}

@property BOOL allowsThumbnailGeneration; // @synthesize allowsThumbnailGeneration=_allowsThumbnailGeneration;
@property(nonatomic, getter=isExecuting) BOOL executing; // @synthesize executing=_executing;
@property(nonatomic, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
@property(retain) NSError *error; // @synthesize error=_error;
@property(readonly) NSData *serializedQuickLookMetadataDictionary;
@property(readonly) NSDictionary *thumbnailImagesDictionary;
- (void)_finishWithError:(id)arg1;
- (void)_afterThubmnailIsPutInGenstore;
- (void)_afterThubmnailIsGenerated;
- (void)main;
- (void)start;
- (BOOL)_finishIfCancelled;
- (void)cancel;
- (id)description;
- (void)dealloc;
- (id)initWithDocumentAtURL:(id)arg1;
- (BOOL)isConcurrent;

@end

