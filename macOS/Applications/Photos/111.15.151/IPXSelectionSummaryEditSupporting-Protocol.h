//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IPXSelectionSummaryEditSupporting <NSObject>
@property(readonly, nonatomic, getter=isBurst) BOOL burst;
@property(readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property(readonly, nonatomic) NSString *assetDescription;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic, getter=isReadOnly) BOOL readOnly;
@property(readonly, nonatomic) unsigned long long itemCount;
@end

