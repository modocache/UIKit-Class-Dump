//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIAlertButton.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface UIAlertLabeledButton : UIAlertButton
{
    UILabel *_typeLabel;
    float _titleOffset;
}

@property(nonatomic) float titleOffset; // @synthesize titleOffset=_titleOffset;
- (void)setHighlighted:(BOOL)arg1;
- (void)dealloc;
- (void)layoutSubviews;
@property(readonly, nonatomic) UILabel *typeLabel;

@end

