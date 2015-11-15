//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIBarButtonItem.h>

@class NSSet, UIImage, UIToolbarButton;

@interface UIBarButtonItem (UIBarButtonItemPrivate)
- (double)_width;
- (void)_setWidth:(double)arg1;
- (id)createViewForToolbar:(id)arg1;
- (id)createViewForNavigationItem:(id)arg1;
- (id)_foregroundColorForLetterpressWithView:(id)arg1;
- (void)_applyPositionAdjustmentToSegmentedControl:(id)arg1;
- (_Bool)_shouldBezelSystemButtonImage;
@property(nonatomic, setter=_setImageHasEffects:) _Bool _imageHasEffects;
@property(readonly, nonatomic) UIToolbarButton *_toolbarButton;
@property(nonatomic, getter=_miniImageInsets, setter=_setMiniImageInsets:) struct UIEdgeInsets miniImageInsets;
@property(retain, nonatomic, getter=_miniImage, setter=_setMiniImage:) UIImage *miniImage;

// Remaining properties
@property(retain, nonatomic, setter=_setItemVariation:) UIBarButtonItem *_itemVariation; // @dynamic _itemVariation;
@property(copy, nonatomic, setter=_setPossibleItemVariations:) NSSet *_possibleItemVariations; // @dynamic _possibleItemVariations;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic) _Bool isSystemItem;
@property(copy, nonatomic, getter=_possibleSystemItems, setter=_setPossibleSystemItems:) NSSet *possibleSystemItems;
@property(nonatomic) _Bool selected;
@property(readonly, nonatomic) long long systemItem;
@end

