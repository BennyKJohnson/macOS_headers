//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTTokenRenderer.h"

@interface TSTCompletionTokenRenderer : TSTTokenRenderer
{
}

+ (id)p_rendererForAttachment:(id)arg1;
+ (id)strokeBottomGradientColorForAttachment:(id)arg1;
+ (id)strokeTopGradientColorForAttachment:(id)arg1;
+ (id)backgroundBottomGradientColorForAttachment:(id)arg1;
+ (id)backgroundTopGradientColorForAttachment:(id)arg1;
+ (id)columnStyleForAttachment:(id)arg1;
+ (id)dimmedActiveCharacterStyleForAttachment:(id)arg1;
+ (id)dimmedCharacterStyleForAttachment:(id)arg1;
+ (id)activeParagraphStyleForAttachment:(id)arg1;
+ (id)paragraphStyleForAttachment:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedCompletionTokenRenderer;
+ (id)_singletonAlloc;
- (struct CGRect)caretRectForAttachment:(id)arg1;
- (id)trimTokenString:(id)arg1 atFront:(BOOL)arg2;
- (id)trimTokenString:(id)arg1;
- (id)newStorageForToken:(id)arg1 withText:(id)arg2;
- (struct CGColor *)tokenStrokeColorForAttachment:(id)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

