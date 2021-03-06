//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Tile.h"

@class NSString;

@interface DOCKTrashTile : Tile
{
    BOOL _trashFull;
    NSString *_trashString;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *trashString; // @synthesize trashString=_trashString;
- (BOOL)isRemovable;
- (BOOL)dragDrop:(struct OpaqueCoreDrag *)arg1;
- (void)dragLeave:(struct OpaqueCoreDrag *)arg1;
- (void)dragEnter:(struct OpaqueCoreDrag *)arg1;
- (void)backgroundChanged;
- (void)resetTrashIcon;
- (void)changeState:(BOOL)arg1;
- (void)render;
- (id)copyInstallDictionary:(int)arg1;
- (void)setRepacementImage:(id)arg1;
- (void)doCommand:(unsigned int)arg1;
- (struct OpaqueMenuRef *)createMenu:(CDUnknownFunctionPointerType)arg1 options:(unsigned long long)arg2;
- (void)spring:(unsigned int)arg1;
- (void)open;
- (BOOL)doAction:(unsigned int)arg1 fromKeyboard:(BOOL)arg2;
- (id)init;

@end

