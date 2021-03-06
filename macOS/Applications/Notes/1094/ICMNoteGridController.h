//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICMNoteBrowserController.h"

#import "ICMNoteGridArrayControllerDelegate-Protocol.h"

@class ICMNoteGridArrayController, ICMNoteGridCollectionView, ICMSearchNoteGridArrayController, NSCache;
@protocol ICMNoteGridControllerDelegate;

@interface ICMNoteGridController : ICMNoteBrowserController <ICMNoteGridArrayControllerDelegate>
{
    BOOL _isAnimatingNoteEditor;
    id <ICMNoteGridControllerDelegate> _delegate;
    ICMNoteGridArrayController *_noteGridArrayController;
    ICMNoteGridCollectionView *_collectionView;
    ICMSearchNoteGridArrayController *_noteGridSearchArrayController;
    NSCache *_thumbnailImageCache;
}

+ (id)keyPathsForValuesAffectingNoteItemSizeRatio;
@property(retain, nonatomic) NSCache *thumbnailImageCache; // @synthesize thumbnailImageCache=_thumbnailImageCache;
@property(nonatomic) __weak ICMSearchNoteGridArrayController *noteGridSearchArrayController; // @synthesize noteGridSearchArrayController=_noteGridSearchArrayController;
@property(nonatomic) BOOL isAnimatingNoteEditor; // @synthesize isAnimatingNoteEditor=_isAnimatingNoteEditor;
@property(nonatomic) __weak ICMNoteGridCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak ICMNoteGridArrayController *noteGridArrayController; // @synthesize noteGridArrayController=_noteGridArrayController;
@property(nonatomic) __weak id <ICMNoteGridControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateTrashFolderHeaderIfNeeded;
- (void)clearThumbnailCacheAndReloadVisibleCells;
- (void)setupCollectionView;
@property(readonly, nonatomic) double noteItemSizeRatioInterval;
- (void)fixScrollerIfNeeded;
- (void)previewImagesDidUpdate:(id)arg1;
- (void)accentColorDidChange:(id)arg1;
- (void)gridArrayController:(id)arg1 shouldShowNoteEditorWithNote:(id)arg2 fromCell:(id)arg3 animated:(BOOL)arg4;
- (BOOL)selectSearchResultsIfPossible;
- (void)searchForString:(id)arg1 suggestions:(id)arg2;
- (void)zoomReset;
- (void)zoomOut;
- (void)zoomIn;
- (void)setSelectedTreeNode:(id)arg1;
- (void)setCurrentArrayController:(id)arg1;
@property(nonatomic) double noteItemSizeRatio;
@property(readonly, nonatomic) BOOL canZoomReset;
@property(readonly, nonatomic) BOOL canZoomOut;
@property(readonly, nonatomic) BOOL canZoomIn;
- (void)dealloc;
- (void)viewWillLayout;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (id)init;

@end

