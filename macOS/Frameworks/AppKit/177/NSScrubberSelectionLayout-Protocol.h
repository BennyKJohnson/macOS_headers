//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSScrubberLayoutAttributes, NSSet, NSView;

@protocol NSScrubberSelectionLayout <NSObject>
@property long long itemAlignment;
@property BOOL floatingSelection;
- (NSScrubberLayoutAttributes *)selectionLayoutAttributesForItemAtIndex:(long long)arg1 withState:(CDStruct_99688279)arg2 inLayout:(id <NSScrubberItemLayout>)arg3 presentationItemAttributes:(NSSet *)arg4 inView:(NSView *)arg5;
- (NSSet *)selectionLayoutAttributesForState:(CDStruct_99688279)arg1 inLayout:(id <NSScrubberItemLayout>)arg2 presentationItemAttributes:(NSSet *)arg3 inView:(NSView *)arg4;
@end

