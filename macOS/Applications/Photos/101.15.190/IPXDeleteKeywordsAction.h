//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXKeywordAction.h"

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface IPXDeleteKeywordsAction : IPXKeywordAction
{
    NSArray *_keywordsToDelete;
    NSDictionary *_keywordTitleToAssetsMap;
}

@property(retain, nonatomic) NSDictionary *keywordTitleToAssetsMap; // @synthesize keywordTitleToAssetsMap=_keywordTitleToAssetsMap;
@property(retain, nonatomic) NSArray *keywordsToDelete; // @synthesize keywordsToDelete=_keywordsToDelete;
- (void).cxx_destruct;
- (id)defaultActionNameLocalizationKey;
- (void)performRedo:(CDUnknownBlockType)arg1;
- (void)performUndo:(CDUnknownBlockType)arg1;
- (void)performAction:(CDUnknownBlockType)arg1;
- (id)initWithKeywords:(id)arg1;

@end

