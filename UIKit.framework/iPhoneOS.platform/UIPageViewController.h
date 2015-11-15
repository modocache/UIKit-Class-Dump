//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSMutableArray, UIPanGestureRecognizer, UITapGestureRecognizer, _UIPageCurl;

@interface UIPageViewController : UIViewController <UIGestureRecognizerDelegate>
{
    id <UIPageViewControllerDelegate> _delegate;
    id <UIPageViewControllerDataSource> _dataSource;
    int _transitionStyle;
    int _navigationOrientation;
    int _spineLocation;
    BOOL _doubleSided;
    NSArray *_viewControllers;
    _UIPageCurl *_pageCurl;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    BOOL _stashingViewControllersForRotation;
    NSArray *_viewControllersStashedForRotation;
    BOOL _rotatingInterface;
    NSMutableArray *_rotationSnapshotViews;
    int _spineLocationPriorToInterfaceRotation;
    struct UIEdgeInsets _tapRegionInsets;
    struct CGSize _tapRegionBreadths;
    struct UIEdgeInsets _effectiveTapRegionInsets;
    struct CGSize _effectiveTapRegionBreadths;
    struct CGRect *_tapRegions;
    NSArray *_viewControllersStashedFromDataSource;
    struct {
        unsigned int delegateWantsTransitionCompleted:1;
        unsigned int delegateCustomizesSpineLocationForInterfaceOrientation:1;
        unsigned int dataSourceSuppliesBeforeViewController:1;
        unsigned int dataSourceSuppliesAfterViewController:1;
    } _delegateFlags;
}

+ (id)stringForSpineLocation:(int)arg1;
+ (BOOL)_isSpineLocation:(int)arg1 supportedForTransitionStyle:(int)arg2;
+ (BOOL)_isNavigationOrientation:(int)arg1 supportedForTransitionStyle:(int)arg2;
+ (BOOL)_isSupportedTransitionStyle:(int)arg1;
@property(retain, nonatomic, setter=_setViewControllersStashedForRotation:) NSArray *_viewControllersStashedForRotation; // @synthesize _viewControllersStashedForRotation;
@property(retain, nonatomic, setter=_setViewControllers:) NSArray *_viewControllers; // @synthesize _viewControllers;
- (void)_handleTapGesture:(id)arg1;
- (void)_handlePanGesture:(id)arg1;
- (BOOL)_shouldCompleteManualCurlWithSuggestedVelocity:(float *)arg1;
- (int)_navigationEndDirectionInResponseToPanGestureRecognizer:(id)arg1 suggestedVelocity:(float *)arg2;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)_shouldBeginNavigationInDirection:(int *)arg1 inResponseToPanGestureRecognizer:(id)arg2;
- (BOOL)_shouldNavigateInDirection:(int *)arg1 inResponseToVelocity:(float *)arg2 ofGestureRecognizedByPanGestureRecognizer:(id)arg3;
- (BOOL)_shouldNavigateInDirection:(int *)arg1 inResponseToTapGestureRecognizer:(id)arg2;
- (struct CGRect *)_tapRegions;
- (id)_incomingViewControllersForGestureDrivenCurlInDirection:(int)arg1;
- (void)setViewControllers:(id)arg1 direction:(int)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setViewControllers:(id)arg1 withCurlOfType:(int)arg2 fromLocation:(struct CGPoint)arg3 direction:(int)arg4 animated:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_invalidateViewControllersStashedFromDataSource;
- (void)_populateLeftAndRightViewControllersInMap:(id)arg1 withViewControllers:(id)arg2 forCurlInDirection:(int)arg3;
- (id)_viewControllersForCurlWithViewControllers:(id)arg1 direction:(int)arg2;
- (id)_viewControllerAfterViewController:(id)arg1;
- (id)_viewControllerBeforeViewController:(id)arg1;
- (id)_viewControllerBefore:(BOOL)arg1 viewController:(id)arg2;
- (BOOL)_canHandleGestures;
- (id)_validatedViewControllersForCurlWithViewControllers:(id)arg1;
- (BOOL)_isCurrentViewControllerStateValid;
- (void)_contentViewFrameDidChange;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)_viewControllersForPendingSpineLocation:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillUnload;
- (void)loadView;
- (void)_setTapRegionBreadths:(struct CGSize)arg1;
- (struct CGSize)_tapRegionBreadths;
- (struct CGSize)_effectiveTapRegionBreadths;
- (void)_setTapRegionInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)_tapRegionInsets;
- (struct UIEdgeInsets)_effectiveTapRegionInsets;
- (void)_invalidateEffectiveTapRegions;
@property(readonly, nonatomic) NSArray *viewControllers;
@property(readonly, nonatomic) NSArray *gestureRecognizers;
@property(nonatomic, getter=isDoubleSided) BOOL doubleSided;
@property(readonly, nonatomic) int spineLocation;
- (void)_setSpineLocation:(int)arg1;
@property(readonly, nonatomic) int navigationOrientation;
@property(readonly, nonatomic) int transitionStyle;
@property(nonatomic) id <UIPageViewControllerDataSource> dataSource;
@property(nonatomic) id <UIPageViewControllerDelegate> delegate;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)_shouldPersistViewWhenCoding;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTransitionStyle:(int)arg1 navigationOrientation:(int)arg2 options:(id)arg3;

@end

