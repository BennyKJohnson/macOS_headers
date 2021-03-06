//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoPrintProduct/NSObject-Protocol.h>

@class KHThemeCatalog, KHThemeProviderConfig, NSArray, NSError, NSString;

@protocol KHThemeCatalogDelegate <NSObject>
- (void)themeCatalogLoadWasCancelled:(KHThemeCatalog *)arg1;
- (void)themeCatalogDidFinishLoading:(KHThemeCatalog *)arg1;
- (void)themeCatalog:(KHThemeCatalog *)arg1 themeProviderConfigFailedToLoad:(KHThemeProviderConfig *)arg2 error:(NSError *)arg3;
- (void)themeCatalog:(KHThemeCatalog *)arg1 readyThemeConfigurations:(NSArray *)arg2 indicies:(NSArray *)arg3;
- (void)themeCatalog:(KHThemeCatalog *)arg1 changedFilterToCompletedThemeConfigurations:(NSArray *)arg2;
- (void)themeCatalog:(KHThemeCatalog *)arg1 changedCategory:(NSString *)arg2 completedThemeConfigurations:(NSArray *)arg3;
- (void)themeCatalogDidBeginLoading:(KHThemeCatalog *)arg1 withCompletedThemeConfigurations:(NSArray *)arg2;
@end

