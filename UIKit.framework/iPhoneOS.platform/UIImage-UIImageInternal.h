//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (UIImageInternal)
+ (void)_flushCache:(id)arg1;
+ (void)_flushSharedImageCache;
- (id)_serializedData;
- (id)_imageScaledToProportion:(double)arg1 interpolationQuality:(int)arg2;
- (id)_doubleBezeledImageWithExteriorShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 interiorShadowRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 fillRed:(double)arg9 green:(double)arg10 blue:(double)arg11 alpha:(double)arg12;
- (id)_bezeledImageWithShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 fillRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 drawShadow:(_Bool)arg9;
- (id)_flatImageWithWhite:(double)arg1 alpha:(double)arg2;
- (_Bool)_isInvisibleAndGetIsTranslucent:(_Bool *)arg1;
- (long long)_imageSetIdentifier;
- (void)_setImageSetIdentifier:(long long)arg1;
- (_Bool)_isNamed;
- (void)_setNamed:(_Bool)arg1;
- (_Bool)_isCached;
- (void)_setCached:(_Bool)arg1;
@end

