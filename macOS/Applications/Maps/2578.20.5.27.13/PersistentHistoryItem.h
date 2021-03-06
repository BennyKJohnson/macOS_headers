//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PersistentAddressBookAddress, PersistentDirectionsHistoryItem, PersistentSearchRequestHistoryItem, PersistentSearchResultHistoryItem;

__attribute__((visibility("hidden")))
@interface PersistentHistoryItem : PBCodable <NSCopying>
{
    PersistentAddressBookAddress *_addressBookItem;
    PersistentDirectionsHistoryItem *_directionsHistoryItem;
    PersistentSearchRequestHistoryItem *_searchRequestHistoryItem;
    PersistentSearchResultHistoryItem *_searchResultHistoryItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PersistentDirectionsHistoryItem *directionsHistoryItem; // @synthesize directionsHistoryItem=_directionsHistoryItem;
@property(retain, nonatomic) PersistentSearchResultHistoryItem *searchResultHistoryItem; // @synthesize searchResultHistoryItem=_searchResultHistoryItem;
@property(retain, nonatomic) PersistentSearchRequestHistoryItem *searchRequestHistoryItem; // @synthesize searchRequestHistoryItem=_searchRequestHistoryItem;
@property(retain, nonatomic) PersistentAddressBookAddress *addressBookItem; // @synthesize addressBookItem=_addressBookItem;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasDirectionsHistoryItem;
@property(readonly, nonatomic) BOOL hasSearchResultHistoryItem;
@property(readonly, nonatomic) BOOL hasSearchRequestHistoryItem;
@property(readonly, nonatomic) BOOL hasAddressBookItem;

@end

