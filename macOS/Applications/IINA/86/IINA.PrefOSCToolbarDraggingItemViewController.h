//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSPasteboardWriting-Protocol.h"

@class NSImageView, NSString, NSTextField;

@interface IINA.PrefOSCToolbarDraggingItemViewController : NSViewController <NSPasteboardWriting>
{
    // Error parsing type: , name: availableItemsView
    // Error parsing type: , name: buttonType
    // Error parsing type: , name: iconImageView
    // Error parsing type: , name: descriptionLabel
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)mouseDown:(id)arg1;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak NSTextField *descriptionLabel; // @synthesize descriptionLabel;
@property(nonatomic) __weak NSImageView *iconImageView; // @synthesize iconImageView;
@property(nonatomic, readonly) NSString *nibName;

@end

