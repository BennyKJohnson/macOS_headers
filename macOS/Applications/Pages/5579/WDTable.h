//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "WDBlock.h"

@class NSMutableArray, WDTableProperties;

@interface WDTable : WDBlock
{
    WDTableProperties *mProperties;
    NSMutableArray *mRows;
}

- (void).cxx_destruct;
- (id)description;
- (id)breakIntoTablesWithMaxSize:(unsigned long long)arg1;
- (id)newRunIterator;
- (id)runIterator;
- (id)newCellIterator;
- (id)cellIterator;
- (id)newRowIterator;
- (id)rowIterator;
- (int)nestingLevel;
- (int)blockType;
- (void)clearRows;
- (id)insertRowAtIndex:(unsigned long long)arg1;
- (id)addRow;
- (id)rowAt:(unsigned long long)arg1;
- (unsigned long long)rowCount;
- (void)clearProperties;
- (id)properties;
- (id)initWithText:(id)arg1;
- (id)initWithText:(id)arg1 properties:(id)arg2 rows:(id)arg3;

@end

