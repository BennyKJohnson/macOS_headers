//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSPopUpButton;

@interface SFExportIconsetController : NSViewController
{
    int _iconsetType;
    NSPopUpButton *_popupButton;
}

@property(retain) NSPopUpButton *popupButton; // @synthesize popupButton=_popupButton;
@property int iconsetType; // @synthesize iconsetType=_iconsetType;
- (void).cxx_destruct;
- (void)iconsetTypeChanged:(id)arg1;
- (void)viewDidLoad;

@end

