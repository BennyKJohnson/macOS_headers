//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPMacHyperlinkController.h"

@class NSPopUpButton, NSTextField, TPBookmarkController, TPInteractiveCanvasController, TPMacBookmarkPopUpButtonController;

@interface TPMacHyperlinkController : TSWPMacHyperlinkController
{
    NSPopUpButton *_editBookmarkPopUp;
    NSTextField *_editBookmarkLabel;
    TPInteractiveCanvasController *_tpICC;
    TPBookmarkController *_bookmarkController;
    TPMacBookmarkPopUpButtonController *_bookmarkPopUpButtonController;
    BOOL _isShowingBookmarkStyleChooserSheet;
}

- (void).cxx_destruct;
- (BOOL)popoverShouldClose:(id)arg1;
- (void)open:(id)arg1;
- (void)p_popUpSelected:(id)arg1;
- (void)p_setRepresentedURLFromBookmark:(id)arg1;
- (BOOL)p_openButtonIsReallyRemoveBookmark;
- (void)p_updateInterfaceForURL:(id)arg1;
- (id)p_representedBookmark;
- (BOOL)p_representsValidBookmark;
- (id)p_bookmarkViewVariableBindings;
- (id)p_bookmarkMenuItem;
- (void)i_updateOpenButton;
- (void)i_resetUIItems:(BOOL)arg1;
- (void)switchToEditApplicationView:(int)arg1;
- (id)openURLDisplayString;
- (id)openButtonString;
- (int)linkScheme;
- (int)linkSchemeForIndex:(long long)arg1;
- (BOOL)hyperlinkFieldsAreValidForCurrentType;
- (id)applicationLinkTitles;
- (BOOL)supportsApplicationLinkScheme:(int)arg1;
- (BOOL)supportsApplicationLinks;
- (id)localizedBookmarkMenuItemName;
- (void)loadView;

@end

