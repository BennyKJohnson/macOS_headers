//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class AMSAudioSubdeviceWrapper, NSImageView;

@interface AMSSubDeviceTableCellView : NSTableCellView
{
    AMSAudioSubdeviceWrapper *_subdevice;
    NSImageView *_statusImage1;
    NSImageView *_statusImage2;
}

@property __weak NSImageView *statusImage2; // @synthesize statusImage2=_statusImage2;
@property __weak NSImageView *statusImage1; // @synthesize statusImage1=_statusImage1;
- (void).cxx_destruct;
- (void)updateStatusImages;
@property(retain) AMSAudioSubdeviceWrapper *subdevice; // @synthesize subdevice=_subdevice;

@end

