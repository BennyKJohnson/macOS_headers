//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/GEOAbstractTicket.h>

#import <GeoServices/GEOMapServiceGeoIpLookupTicket-Protocol.h>

@class GEOPDPlaceRequest, NSString;

__attribute__((visibility("hidden")))
@interface _GEOMapServiceGeoIpLookupTicket : GEOAbstractTicket <GEOMapServiceGeoIpLookupTicket>
{
    GEOPDPlaceRequest *_placeRequest;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_d1a7ebee dataRequestKind;
- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 networkActivity:(CDUnknownBlockType)arg3 handlerQueue:(id)arg4;
- (id)initWithIpAddress:(id)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

