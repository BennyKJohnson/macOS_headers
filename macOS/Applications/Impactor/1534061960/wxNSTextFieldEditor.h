//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSTextView.h"

@class NSEvent;

@interface wxNSTextFieldEditor : NSTextView
{
    NSEvent *lastKeyDownEvent;
}

- (void)insertText:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;

@end

