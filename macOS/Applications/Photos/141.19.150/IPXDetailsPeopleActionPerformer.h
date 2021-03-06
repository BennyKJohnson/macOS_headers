//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IPXDetailsPeopleActionPerformerDataSource;

__attribute__((visibility("hidden")))
@interface IPXDetailsPeopleActionPerformer : NSObject
{
    id <IPXDetailsPeopleActionPerformerDataSource> _dataSource;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IPXDetailsPeopleActionPerformerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_performChangePersonTypeActionForPerson:(id)arg1 targetType:(long long)arg2 undoManager:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_performToggleFavoritePersonActionWithUndoManager:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performSetKeyFaceActionWithUndoManager:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performTogglePeopleHomeActionInWindow:(id)arg1 withUndoManager:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_resetPeopleInLibrary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentAlertForHidingPerson:(id)arg1 inWindow:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performNotThisPersonActionWithUndoManager:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performActionOfType:(long long)arg1 inWindow:(id)arg2 withUndoManager:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

