//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, PACanvasItemView, PAItemController, PAItemView;

@interface PAItemViewController : NSObject
{
    PAItemController *_itemController;
    NSObject<OS_dispatch_queue> *_readyQueue;
    CDUnknownBlockType _readyHandler;
    BOOL _ready;
    CDUnknownBlockType _errorHandler;
    PACanvasItemView *_canvasViewImpl;
}

@property(retain) PACanvasItemView *canvasViewImpl; // @synthesize canvasViewImpl=_canvasViewImpl;
@property(copy) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(readonly, getter=isReady) BOOL ready; // @synthesize ready=_ready;
- (void).cxx_destruct;
- (void)positionDecorations;
- (void)detachFromCanvasView;
- (void)attachToCanvasView;
- (id)asset;
- (id)itemController;
- (void)loadItem;
@property(readonly) PAItemView *itemView;
@property(retain) PACanvasItemView *canvasView; // @dynamic canvasView;
@property(copy) CDUnknownBlockType readyHandler;
- (void)_callReadyHandlerOnceWithSuccess:(BOOL)arg1;
- (void)notifyReadyWithSuccess:(BOOL)arg1;
- (id)initWithItemController:(id)arg1;
- (id)init;

@end

