//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "__BKIMToolbarWindowAccessibility_super.h"

@class BKIMWindowToolbarViewControllerAccessibility, NSToolbar;

@interface BKIMToolbarWindowAccessibility : __BKIMToolbarWindowAccessibility_super
{
}

+ (Class)bkaxBaseSafeCategoryClass;
+ (id)bkaxTargetClassName;
@property(readonly, nonatomic) BKIMWindowToolbarViewControllerAccessibility *bkaxToolbarViewController;
- (void)bkaxLoadAccessibilityInformation;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)setOverlayView:(id)arg1 inContainer:(BOOL)arg2 overlayAllowsResize:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSToolbar *bkaxToolbar;
@property(readonly, nonatomic) double bkaxTitlebarAlphaValue;

@end

