//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

#import "RAPPlaceCorrectionsQuestionChangeContext-Protocol.h"

@interface NSString (MapsExtra) <RAPPlaceCorrectionsQuestionChangeContext>
+ (id)distanceStringFromLocation:(id)arg1 toMapItem:(id)arg2 showsDistance:(out char *)arg3;
+ (id)_maps_stringWithRemainingTime:(double)arg1;
+ (id)_maps_formattedStringForInt:(long long)arg1;
+ (id)keyPathWithGetters:(SEL)arg1;
@property(readonly, copy, nonatomic) NSString *_maps_stringByTrimmingLeadingWhitespace;
@property(readonly, nonatomic) BOOL _maps_isOnlyWhiteSpaces;
@property(readonly, nonatomic) BOOL _maps_endsInAbbreviationPunctuation;
@property(readonly, nonatomic) struct _NSRange _maps_rangeForTimePartOfFormattedShortTimeString;
- (long long)fileCreationDateDescendingSort:(id)arg1;
- (id)_maps_prefixMatchesForSearchString:(id)arg1;
- (id)NV_trimCommasSpacesQuotes;
- (BOOL)nv_stringTokensMatchPrefix:(id)arg1;
- (struct CGSize)_maps_sizeWithFont:(id)arg1;
@property(readonly, nonatomic) NSString *_maps_sha1Hash;
@property(readonly, nonatomic) BOOL _mapstest_isCurrentLocationString;
- (id)_rap_substringWithNumberOfCharacters:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long _rap_charactersCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

