//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIActivityIndicatorView;

@interface FRFeedSpinnerCollectionViewCell : UICollectionViewCell
{
    UIActivityIndicatorView *_spinner;
}

@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)stopAnimating;
- (void)startAnimating;
- (id)initWithFrame:(struct CGRect)arg1;

@end

