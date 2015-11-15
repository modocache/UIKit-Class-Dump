//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface UIKBRenderConfig : NSObject
{
    _Bool _lightKeyboard;
    double _blurRadius;
    double _blurSaturation;
    double _keycapOpacity;
    double _keyborderOpacity;
}

+ (id)passcodeConfig;
+ (id)darkConfig;
+ (id)defaultConfig;
@property(nonatomic) _Bool lightKeyboard; // @synthesize lightKeyboard=_lightKeyboard;
@property(nonatomic) double keyborderOpacity; // @synthesize keyborderOpacity=_keyborderOpacity;
@property(nonatomic) double keycapOpacity; // @synthesize keycapOpacity=_keycapOpacity;
@property(nonatomic) double blurSaturation; // @synthesize blurSaturation=_blurSaturation;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(readonly, nonatomic) long long backdropStyle;
@property(readonly, nonatomic) _Bool whiteText;
- (id)description;
- (_Bool)isEqual:(id)arg1;

@end

