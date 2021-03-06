//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSColor;

@interface KeyColorButton : NSButton
{
    NSColor *_baseColor;
    weak_ptr_6c08e9cc _owner;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) weak_ptr_6c08e9cc owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSColor *baseColor; // @synthesize baseColor=_baseColor;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)drawFocusRingMask;
- (struct CGRect)focusRingMaskBounds;
- (struct CGSize)intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)currentFillColor;
- (void)commonSetup;
- (shared_ptr_d213862f)frontingView;
- (shared_ptr_18c9bb0b)accessibleObject;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

