//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FCLocalRegion : NSObject
{
    NSString *_identifier;
    NSArray *_autoFavoriteTagIDs;
    NSArray *_localVersionedTagIDs;
    NSString *_name;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSArray *localVersionedTagIDs; // @synthesize localVersionedTagIDs=_localVersionedTagIDs;
@property(retain, nonatomic) NSArray *autoFavoriteTagIDs; // @synthesize autoFavoriteTagIDs=_autoFavoriteTagIDs;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end

