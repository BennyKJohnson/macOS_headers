//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

@class ChatStyle, NSArray;
@protocol ChatBaseCollectionViewItemDelegate;

@interface ChatBaseCollectionViewItem : NSCollectionViewItem
{
    BOOL _bindingsSet;
    BOOL _observingRepresentedObject;
    BOOL _observingView;
    BOOL _compact;
    id <ChatBaseCollectionViewItemDelegate> _delegate;
    unsigned long long _visibility;
}

+ (id)accessibilityActionsForMessage:(id)arg1;
+ (id)accessibilityHelpTagForMessage:(id)arg1;
+ (id)accessibilityDescriptionForMessage:(id)arg1;
+ (struct CGSize)viewSizeForMessage:(id)arg1 inBounds:(struct CGRect)arg2 style:(id)arg3;
@property(nonatomic) unsigned long long visibility; // @synthesize visibility=_visibility;
@property(nonatomic, getter=isCompact) BOOL compact; // @synthesize compact=_compact;
@property(nonatomic) __weak id <ChatBaseCollectionViewItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopObservingView;
- (void)startObservingView;
- (void)stopObservingRepresentedObject;
- (void)startObservingRepresentedObject;
- (void)setRepresentedObject:(id)arg1;
@property(readonly, nonatomic) NSArray *draggableSubviews;
@property(readonly, nonatomic) NSArray *textSelectionTextFields;
@property(readonly, nonatomic) __weak ChatStyle *chatStyle;
- (void)viewVisibilityDidChange:(unsigned long long)arg1;
- (void)updateLayout;
- (void)updateBackgroundColor;
- (void)viewDidMoveToWindow;
- (void)viewDidDisappear;
- (void)viewWillReload;
- (void)validateViewMode;
- (void)viewFrameDidChange:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (void)accessibilityPerformAction:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)teardownBindings;
- (void)setupBindings;
- (void)removeBindings;
- (void)addBindings;
- (void)removeViewObservers;
- (void)addViewObservers;
- (void)removeRepresentedObjectObservers;
- (void)addRepresentedObjectObservers;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

