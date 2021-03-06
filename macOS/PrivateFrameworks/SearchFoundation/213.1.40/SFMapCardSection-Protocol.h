//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SearchFoundation/SFCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFColor, SFLatLng, SFMapRegion;

@protocol SFMapCardSection <SFCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSArray *pins;
@property(nonatomic) int pinBehavior;
@property(retain, nonatomic) SFMapRegion *boundingMapRegion;
@property(nonatomic) int sizeFormat;
@property(nonatomic) BOOL interactive;
@property(copy, nonatomic) NSString *footnote;
@property(copy, nonatomic) NSString *footnoteLabel;
@property(retain, nonatomic) SFColor *pinColor;
@property(retain, nonatomic) SFLatLng *location;
@property(retain, nonatomic) SFColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) BOOL hasBottomPadding;
@property(nonatomic) BOOL hasTopPadding;
@property(nonatomic) BOOL canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
@end

