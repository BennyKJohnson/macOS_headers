//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/GEOAbstractTicket.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse;

__attribute__((visibility("hidden")))
@interface GEOAbstractRequestResponseTicket : GEOAbstractTicket
{
    GEOPDPlaceRequest *_request;
    GEOPDPlaceResponse *_response;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)performSubmitWithHandler:(CDUnknownBlockType)arg1 timeout:(double)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (id)initWithRequest:(id)arg1 traits:(id)arg2;

@end

