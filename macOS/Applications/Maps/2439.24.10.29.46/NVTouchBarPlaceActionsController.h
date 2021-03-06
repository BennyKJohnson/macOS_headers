//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSSharingServiceDelegate-Protocol.h"
#import "NSSharingServicePickerDelegate-Protocol.h"

@class NSImage, NSString, NVTouchBarButton;
@protocol NVTouchBarPlaceActionsTarget;

__attribute__((visibility("hidden")))
@interface NVTouchBarPlaceActionsController : NSViewController <NSSharingServiceDelegate, NSSharingServicePickerDelegate>
{
    id <NVTouchBarPlaceActionsTarget> _target;
    NSImage *_favoriteOffImage;
    NSImage *_favoriteOnImage;
    BOOL _infoButtonEnabled;
    NVTouchBarButton *_directionsButton;
    NVTouchBarButton *_openHomepageButton;
    NVTouchBarButton *_callButton;
    NVTouchBarButton *_favoritesButton;
    NVTouchBarButton *_infoButton;
    unsigned long long _directionsButtonTransportType;
    NSString *_directionsButtonDistanceString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *directionsButtonDistanceString; // @synthesize directionsButtonDistanceString=_directionsButtonDistanceString;
@property(nonatomic) unsigned long long directionsButtonTransportType; // @synthesize directionsButtonTransportType=_directionsButtonTransportType;
@property(nonatomic, getter=isInfoButtonEnabled) BOOL infoButtonEnabled; // @synthesize infoButtonEnabled=_infoButtonEnabled;
@property(readonly, nonatomic) NVTouchBarButton *infoButton; // @synthesize infoButton=_infoButton;
@property(readonly, nonatomic) NVTouchBarButton *favoritesButton; // @synthesize favoritesButton=_favoritesButton;
@property(readonly, nonatomic) NVTouchBarButton *callButton; // @synthesize callButton=_callButton;
@property(readonly, nonatomic) NVTouchBarButton *openHomepageButton; // @synthesize openHomepageButton=_openHomepageButton;
@property(readonly, nonatomic) NVTouchBarButton *directionsButton; // @synthesize directionsButton=_directionsButton;
@property(nonatomic) BOOL isPlaceInFavorites;
- (void)updateButtonsForPlace:(id)arg1;
- (void)_updateFavoriteButtonImage;
- (void)toggleSelectedPlaceInFavorites:(id)arg1;
- (id)buttonWithImage:(id)arg1 action:(SEL)arg2 width:(double)arg3;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTarget:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

