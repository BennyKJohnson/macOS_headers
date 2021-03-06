//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CalUIFontSmoothedTextLayer.h"

@class NSArray, NSDate;
@protocol CalUISizeBasedDateContentsTextFieldDelegate;

@interface CalUISizeBasedDateContentsTextLayer : CalUIFontSmoothedTextLayer
{
    id <CalUISizeBasedDateContentsTextFieldDelegate> _titleDelegate;
    NSDate *_titleDate;
    NSArray *_dateFormats;
    double _width;
}

@property double width; // @synthesize width=_width;
@property(retain) NSArray *dateFormats; // @synthesize dateFormats=_dateFormats;
@property(retain) NSDate *titleDate; // @synthesize titleDate=_titleDate;
@property __weak id <CalUISizeBasedDateContentsTextFieldDelegate> titleDelegate; // @synthesize titleDelegate=_titleDelegate;
- (void).cxx_destruct;
- (void)setOrderedDateFormats:(id)arg1;
- (void)setDate:(id)arg1;
- (void)updateStringValue;
- (void)setAvailableWidth:(double)arg1;

@end

