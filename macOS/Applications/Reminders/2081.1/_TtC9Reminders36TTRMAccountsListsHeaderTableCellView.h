//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSButton, NSProgressIndicator;

@interface _TtC9Reminders36TTRMAccountsListsHeaderTableCellView : NSTableCellView
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: accountID
    // Error parsing type: , name: migrateButtonState
    // Error parsing type: , name: networkActivityState
    // Error parsing type: , name: migrateButton
    // Error parsing type: , name: migratingSpinner
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak NSProgressIndicator *migratingSpinner; // @synthesize migratingSpinner;
@property(nonatomic) __weak NSButton *migrateButton; // @synthesize migrateButton;
- (id)accessibilityHelp;
- (id)accessibilityLabel;
- (id)accessibilityRoleDescription;
- (id)accessibilityChildren;
- (BOOL)isAccessibilityElement;
- (void)didTapMigrateButton:(id)arg1;
- (void)awakeFromNib;

@end

