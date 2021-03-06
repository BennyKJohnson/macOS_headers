//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CNContact, CNLabeledValue, GEOMapServiceTraits, MKSharingController, MKTransitAttributionDetailsViewController, NSArray, NSString, _MKPlaceViewController;
@protocol GEOTransitConnectionInfo, MKTransitLineMarker, _MKPlaceItem;

@protocol _MKPlaceViewControllerDelegate <NSObject>

@optional
- (void)placeViewControllerDidUpdateHeight:(_MKPlaceViewController *)arg1;
- (int)mapTypeForPlaceViewController:(_MKPlaceViewController *)arg1;
- (void)placeViewController:(_MKPlaceViewController *)arg1 hasFavoriteForPlaceItem:(id <_MKPlaceItem>)arg2 result:(void (^)(BOOL))arg3;
- (void)placeViewController:(_MKPlaceViewController *)arg1 removeFavoriteForPlaceItem:(id <_MKPlaceItem>)arg2 result:(void (^)(NSArray *, NSError *))arg3;
- (void)placeViewController:(_MKPlaceViewController *)arg1 addFavoriteForPlaceItem:(id <_MKPlaceItem>)arg2 result:(void (^)(NSArray *, NSError *))arg3;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectTransitLine:(id <MKTransitLineMarker>)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectAttributionController:(MKTransitAttributionDetailsViewController *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 showTransitIncidents:(NSArray *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectTransitConnectionInformation:(id <GEOTransitConnectionInfo>)arg2;
- (void)placeViewControllerDidDismiss:(_MKPlaceViewController *)arg1;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didBecomeContact:(CNContact *)arg2;
- (void)placeViewControllerDidSelectMoreInfo:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectWriteAReview:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectOneReview:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectOnePhoto:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectDisplayedHomePage:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectDisplayedPhoneNumber:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectShowBrandCard:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectInlineMap:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectDisplayedAddress:(_MKPlaceViewController *)arg1;
- (BOOL)placeViewController:(_MKPlaceViewController *)arg1 shouldOpenHomePage:(CNLabeledValue *)arg2;
- (void)placeViewControllerDidSelectShareLocation:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectReportAProblem:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectFlyover:(_MKPlaceViewController *)arg1;
- (void)placeViewController:(_MKPlaceViewController *)arg1 verticalScrollerInsetDidChangeDuringLayoutPhase:(long long)arg2;
- (void)placeViewControllerDidSelectHeader:(_MKPlaceViewController *)arg1;
- (BOOL)isReportAProblemAvailable;
- (void)didSelectAction:(unsigned long long)arg1 sender:(id)arg2;
- (void)placeViewControllerDidSelectDirectionsFromAddress:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectDirectionsToAddress:(_MKPlaceViewController *)arg1;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectActivityOfType:(NSString *)arg2 completed:(BOOL)arg3;
- (GEOMapServiceTraits *)traitsForPlaceViewController:(_MKPlaceViewController *)arg1;
- (MKSharingController *)sharingControllerForPlaceViewController:(_MKPlaceViewController *)arg1;
@end

