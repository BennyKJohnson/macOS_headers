//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KNAnimationInfo, KNMacEffectListViewController;

@protocol KNMacEffectListViewControllerDelegate <NSObject>
- (BOOL)effectList:(KNMacEffectListViewController *)arg1 shouldAllowPreviewOfAnimationInfo:(KNAnimationInfo *)arg2;
- (void)effectList:(KNMacEffectListViewController *)arg1 previewAnimationInfo:(KNAnimationInfo *)arg2;
- (void)effectList:(KNMacEffectListViewController *)arg1 didSelectAnimationInfo:(KNAnimationInfo *)arg2;
@end

