//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSError;
@protocol FPCollectionDataSource;

@protocol FPCollectionDataSourceDelegate
- (void)dataSource:(id <FPCollectionDataSource>)arg1 wasInvalidatedWithError:(NSError *)arg2;
- (void)dataSource:(id <FPCollectionDataSource>)arg1 receivedUpdatedItems:(NSArray *)arg2 deletedItems:(NSArray *)arg3 hasMoreChanges:(BOOL)arg4;
- (void)dataSource:(id <FPCollectionDataSource>)arg1 replaceContentsWithItems:(NSArray *)arg2 hasMoreChanges:(BOOL)arg3;
@end

