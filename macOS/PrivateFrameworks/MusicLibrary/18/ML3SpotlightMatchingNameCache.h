//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3MusicLibrary, NSString;

__attribute__((visibility("hidden")))
@interface ML3SpotlightMatchingNameCache : NSObject
{
    unordered_set_da619913 _matchingSet;
    NSString *_matchString;
    BOOL _idle;
    ML3MusicLibrary *_library;
}

+ (void)loadFromLibrary:(id)arg1 namesMatchingString:(id)arg2 cancelHandler:(CDUnknownBlockType)arg3;
+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_initWithLibrary:(id)arg1 matchString:(id)arg2 cancelHandler:(CDUnknownBlockType)arg3;

@end

