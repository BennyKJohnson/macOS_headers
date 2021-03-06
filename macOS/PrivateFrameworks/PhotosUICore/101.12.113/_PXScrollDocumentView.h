//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@protocol _PXScrollDocumentViewAccessibilityDelegate;

@interface _PXScrollDocumentView : NSView
{
    BOOL _acceptsFirstResponder;
    id <_PXScrollDocumentViewAccessibilityDelegate> _accessibilityDelegate;
}

@property(nonatomic) __weak id <_PXScrollDocumentViewAccessibilityDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
@property(nonatomic) BOOL acceptsFirstResponder; // @synthesize acceptsFirstResponder=_acceptsFirstResponder;
- (void).cxx_destruct;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityFocusedUIElement;
- (struct CGRect)accessibilityFrameInParentSpace;
- (void)setAccessibilitySelectedCells:(id)arg1;
- (id)accessibilitySelectedCells;
- (void)setAccessibilitySelectedChildren:(id)arg1;
- (id)accessibilitySelectedChildren;
- (id)accessibilityVisibleChildren;
- (id)accessibilityChildren;
- (id)accessibilityRoleDescription;
- (id)accessibilitySubrole;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (id)description;
- (BOOL)clipsToBounds;
- (BOOL)isFlipped;

@end

