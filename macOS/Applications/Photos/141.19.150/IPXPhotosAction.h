//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoFoundation/PFAction.h>

@class PHFetchOptions, PHPhotoLibrary;

__attribute__((visibility("hidden")))
@interface IPXPhotosAction : PFAction
{
    PHPhotoLibrary *_photoLibrary;
    unsigned long long _assetCount;
    PHFetchOptions *_standardFetchOptions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PHFetchOptions *standardFetchOptions; // @synthesize standardFetchOptions=_standardFetchOptions;
@property(readonly, nonatomic) unsigned long long assetCount; // @synthesize assetCount=_assetCount;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (id)confirmationMessage;
- (BOOL)needsConfirmation;
- (void)performChanges:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;

@end

