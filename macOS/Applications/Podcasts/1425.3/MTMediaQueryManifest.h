//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTPredicateManifest.h"

@class MPMediaQuery, NSArray, NSMutableDictionary;

@interface MTMediaQueryManifest : MTPredicateManifest
{
    MPMediaQuery *_query;
    NSArray *_persistentIds;
    NSMutableDictionary *_pidToUuidMapping;
}

@property(retain, nonatomic) NSMutableDictionary *pidToUuidMapping; // @synthesize pidToUuidMapping=_pidToUuidMapping;
@property(retain, nonatomic) NSArray *persistentIds; // @synthesize persistentIds=_persistentIds;
@property(retain, nonatomic) MPMediaQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)_updateSortOrder;
- (void)_processResults:(id)arg1;
- (id)initWithMediaQuery:(id)arg1 initialItem:(id)arg2;

@end

