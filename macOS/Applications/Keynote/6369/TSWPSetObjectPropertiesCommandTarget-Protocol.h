//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSString, TSWPObjectProperty;

@protocol TSWPSetObjectPropertiesCommandTarget
- (void)setObjectProperty:(TSWPObjectProperty *)arg1;
- (TSWPObjectProperty *)objectPropertyForPropertyWithName:(NSString *)arg1;
- (BOOL)validateObjectProperties:(NSArray *)arg1;

@optional
- (void)setDrawableTagObjectProperty:(TSWPObjectProperty *)arg1;
- (TSWPObjectProperty *)drawableTagObjectProperty;
- (BOOL)shouldPropagateChangesToProperty:(TSWPObjectProperty *)arg1;
- (int)propagationPropertyForObjectProperty:(TSWPObjectProperty *)arg1;
@end

