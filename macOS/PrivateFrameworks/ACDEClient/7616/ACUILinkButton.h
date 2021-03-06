//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSColor;

@interface ACUILinkButton : NSButton
{
    NSColor *_textColor;
}

@property(retain, nonatomic) NSColor *textColor; // @synthesize textColor=_textColor;
- (void)resetCursorRects;
- (void)updateTextColor;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)alternateTextColor;
- (void)dealloc;
- (void)awakeFromNib;

@end

