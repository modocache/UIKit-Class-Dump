//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface UISearchBarBackground : UIImageView
{
    UIColor *_tintColor;
    UIImage *_backgroundImage;
    unsigned int _barStyle:3;
    unsigned int _isTranslucent:1;
    unsigned int _usesEmbeddedAppearance:1;
}

@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
@property(retain, nonatomic) UIImage *backgroundImage;
- (void)_updateBackgroundImage;
@property(nonatomic) int barStyle;
@property(nonatomic) BOOL usesEmbeddedAppearance;
@property(nonatomic, getter=isTranslucent) BOOL translucent;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

