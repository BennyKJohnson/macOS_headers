//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface UGCPhotoThumbnailCollectionViewCell : UICollectionViewCell
{
    UIImageView *_photoImageView;
    NSString *_assetIdentifier;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
- (void)prepareForReuse;
- (id)contentImageView;
@property(retain, nonatomic) UIImage *image;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

