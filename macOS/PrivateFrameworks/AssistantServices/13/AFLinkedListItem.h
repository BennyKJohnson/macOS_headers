//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AFLinkedListItem : NSObject
{
    id _object;
    AFLinkedListItem *_previousItem;
    AFLinkedListItem *_nextItem;
}

@property(retain, nonatomic) AFLinkedListItem *nextItem; // @synthesize nextItem=_nextItem;
@property(retain, nonatomic) AFLinkedListItem *previousItem; // @synthesize previousItem=_previousItem;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)removeFromList;
- (void)insertAfterItem:(id)arg1;
- (void)insertBeforeItem:(id)arg1;
- (id)initWithObject:(id)arg1;

@end

