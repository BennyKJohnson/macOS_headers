//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSDictionary, NSMutableDictionary, NSSet;

@interface HMBLocalSQLContextQueryTable : HMFObject
{
    NSSet *_columnNames;
    NSMutableDictionary *_mutableIndexes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *mutableIndexes; // @synthesize mutableIndexes=_mutableIndexes;
@property(readonly, nonatomic) NSSet *columnNames; // @synthesize columnNames=_columnNames;
- (id)description;
@property(readonly, nonatomic) NSDictionary *indexes;
- (id)initWithColumnNames:(id)arg1;

@end

