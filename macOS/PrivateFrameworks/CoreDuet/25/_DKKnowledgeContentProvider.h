//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_DKContentProvider.h"

@class NSString;

@interface _DKKnowledgeContentProvider : NSObject <_DKContentProvider>
{
    id <_DKKnowledgeQuerying> _knowledgeStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
- (void)executeQuery:(id)arg1 queue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)executeQuery:(id)arg1 error:(id *)arg2;
- (id)initWithKnowledgeStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

