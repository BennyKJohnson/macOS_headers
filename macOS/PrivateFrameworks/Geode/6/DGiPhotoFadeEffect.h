//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIFilter;

@interface DGiPhotoFadeEffect : NSObject
{
    CIFilter *_saturationFilter;
    CIFilter *_temperatureFilter;
    CIFilter *_exposureFilter;
    float _level;
    float _saturation;
    float _temperature;
    float _exposure;
}

- (void).cxx_destruct;
- (void)resetValues;
- (id)processImage:(id)arg1 scale:(float)arg2;
- (void)setSaturation:(float)arg1 andTemperature:(float)arg2 andExposure:(float)arg3;
- (void)setLevel:(float)arg1;
- (id)init;

@end

