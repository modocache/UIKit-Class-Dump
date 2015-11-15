//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "NSCoding.h"
#import "UIAppearance.h"
#import "UIAppearanceContainer.h"
#import "UIDynamicItem.h"

@class CALayer, NSArray, NSISEngine, NSISVariable, NSMutableArray, NSString, UIColor, UIViewController;

@interface UIView : UIResponder <NSCoding, UIAppearance, UIAppearanceContainer, UIDynamicItem>
{
    CALayer *_layer;
    id _gestureInfo;
    NSMutableArray *_gestureRecognizers;
    NSArray *_subviewCache;
    float _charge;
    long long _tag;
    UIViewController *_viewDelegate;
    NSString *_backgroundColorSystemColorName;
    unsigned long long _countOfMotionEffectsInSubtree;
    struct {
        unsigned int userInteractionDisabled:1;
        unsigned int implementsDrawRect:1;
        unsigned int implementsDidScroll:1;
        unsigned int implementsMouseTracking:1;
        unsigned int hasBackgroundColor:1;
        unsigned int isOpaque:1;
        unsigned int becomeFirstResponderWhenCapable:1;
        unsigned int interceptMouseEvent:1;
        unsigned int deallocating:1;
        unsigned int debugFlash:1;
        unsigned int debugSkippedSetNeedsDisplay:1;
        unsigned int debugScheduledDisplayIsRequired:1;
        unsigned int isInAWindow:1;
        unsigned int isAncestorOfFirstResponder:1;
        unsigned int dontAutoresizeSubviews:1;
        unsigned int autoresizeMask:6;
        unsigned int patternBackground:1;
        unsigned int fixedBackgroundPattern:1;
        unsigned int dontAnimate:1;
        unsigned int superLayerIsView:1;
        unsigned int layerKitPatternDrawing:1;
        unsigned int multipleTouchEnabled:1;
        unsigned int exclusiveTouch:1;
        unsigned int hasViewController:1;
        unsigned int needsDidAppearOrDisappear:1;
        unsigned int gesturesEnabled:1;
        unsigned int deliversTouchesForGesturesToSuperview:1;
        unsigned int chargeEnabled:1;
        unsigned int skipsSubviewEnumeration:1;
        unsigned int needsDisplayOnBoundsChange:1;
        unsigned int hasTiledLayer:1;
        unsigned int hasLargeContent:1;
        unsigned int unused:1;
        unsigned int traversalMark:1;
        unsigned int appearanceIsInvalid:1;
        unsigned int monitorsSubtree:1;
        unsigned int hostsAutolayoutEngine:1;
        unsigned int constraintsAreClean:1;
        unsigned int subviewLayoutConstraintsAreClean:1;
        unsigned int intrinsicContentSizeConstraintsAreClean:1;
        unsigned int potentiallyHasDanglyConstraints:1;
        unsigned int doesNotTranslateAutoresizingMaskIntoConstraints:1;
        unsigned int autolayoutIsClean:1;
        unsigned int subviewsAutolayoutIsClean:1;
        unsigned int layoutFlushingDisabled:1;
        unsigned int layingOutFromConstraints:1;
        unsigned int wantsAutolayout:1;
        unsigned int subviewWantsAutolayout:1;
        unsigned int isApplyingValuesFromEngine:1;
        unsigned int isInAutolayout:1;
        unsigned int isUpdatingAutoresizingConstraints:1;
        unsigned int isUpdatingConstraints:1;
        unsigned int stayHiddenAwaitingReuse:1;
        unsigned int stayHiddenAfterReuse:1;
        unsigned int skippedLayoutWhileHiddenForReuse:1;
        unsigned int hasMaskView:1;
        unsigned int hasVisualAltitude:1;
        unsigned int hasBackdropMaskViews:1;
        unsigned int backdropMaskViewFlags:3;
        unsigned int delaysTouchesForSystemGestures:1;
        unsigned int subclassShouldDelayTouchForSystemGestures:1;
        unsigned int hasMotionEffects:1;
        unsigned int backdropOverlayMode:2;
        unsigned int tintAdjustmentMode:2;
        unsigned int isReferenceView:1;
    } _viewFlags;
    long long _retainCount;
    long long _tintAdjustmentDimmingCount;
    _Bool _shouldArchiveUIAppearanceTags;
    UIColor *_interactionTintColor;
    NSISEngine *_layoutEngine;
    NSISVariable *_boundsWidthVariable;
    NSISVariable *_boundsHeightVariable;
    NSISVariable *_minXVariable;
    NSISVariable *_minYVariable;
    NSMutableArray *_internalConstraints;
    NSArray *_constraintsExceptingSubviewAutoresizingConstraints;
}

+ (void)_setShouldEnableUIKitParallaxEffects:(_Bool)arg1;
+ (_Bool)_shouldEnableUIKitDefaultParallaxEffects;
+ (void)_recenterMotionEffects;
+ (_Bool)_motionEffectsEnabled;
+ (_Bool)_motionEffectsSupported;
+ (void)_endSuspendingMotionEffectsForReason:(id)arg1;
+ (void)_beginSuspendingMotionEffectsForReason:(id)arg1;
+ (id)_motionEffectEngine;
+ (Class)layerClass;
+ (_Bool)_preventsAppearanceProxyCustomization;
+ (void)_performCustomizableAppearanceModifications:(CDUnknownBlockType)arg1;
+ (id)appearanceMatchingProperties:(id)arg1 whenContainedIn:(Class)arg2;
+ (id)_appearanceRecorderWhenContainedIn:(Class)arg1;
+ (id)appearanceWhenContainedIn:(Class)arg1;
+ (id)_appearanceWhenContainedIn:(id)arg1;
+ (id)_appearanceRecorder;
+ (id)appearance;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic, setter=_setShouldArchiveUIAppearanceTags:) _Bool _shouldArchiveUIAppearanceTags; // @synthesize _shouldArchiveUIAppearanceTags;
@property(readonly, nonatomic) NSArray *_constraintsExceptingSubviewAutoresizingConstraints; // @synthesize _constraintsExceptingSubviewAutoresizingConstraints;
@property(retain, nonatomic, setter=_setInternalConstraints:) NSMutableArray *_internalConstraints; // @synthesize _internalConstraints;
@property(readonly, nonatomic) NSISVariable *_minYVariable; // @synthesize _minYVariable;
@property(readonly, nonatomic) NSISVariable *_minXVariable; // @synthesize _minXVariable;
@property(readonly, nonatomic) NSISVariable *_boundsHeightVariable; // @synthesize _boundsHeightVariable;
@property(readonly, nonatomic) NSISVariable *_boundsWidthVariable; // @synthesize _boundsWidthVariable;
@property(retain, nonatomic, setter=_setLayoutEngine:) NSISEngine *_layoutEngine; // @synthesize _layoutEngine;
@property(retain, nonatomic, setter=_setInteractionTintColor:) UIColor *_interactionTintColor; // @synthesize _interactionTintColor;
- (id)resizableSnapshotViewFromRect:(struct CGRect)arg1 withCapInsets:(struct UIEdgeInsets)arg2;
- (id)snapshotView;
- (_Bool)drawViewHierarchyInRect:(struct CGRect)arg1;
- (id)resizableSnapshotFromRect:(struct CGRect)arg1 withCapInsets:(struct UIEdgeInsets)arg2;
- (id)snapshot;
- (_Bool)drawViewHierarchyInRect:(struct CGRect)arg1 afterScreenUpdates:(_Bool)arg2;
- (_Bool)_drawViewHierarchyInRect:(struct CGRect)arg1;
- (_Bool)_imageSnapshotCapturedAllContent;
- (id)resizableSnapshotViewFromRect:(struct CGRect)arg1 afterScreenUpdates:(_Bool)arg2 withCapInsets:(struct UIEdgeInsets)arg3;
- (id)snapshotViewAfterScreenUpdates:(_Bool)arg1;
- (struct CGRect)_visualAltitudeSensitiveBoundsWithVisualAltitude:(double)arg1 edges:(unsigned long long)arg2;
- (double)_touchSloppinessFactor;
@property(nonatomic) struct CGAffineTransform transform;
- (void)_reestablishConstraintsForTransformChange;
@property(nonatomic) struct CGPoint center;
@property(readonly, nonatomic) struct CGRect bounds;
- (long long)_currentUserInterfaceIdiom;
- (void)_addPossibleRespondersToArray:(id)arg1;
- (struct CGRect)_responderSelectionRectForWindow:(id)arg1;
- (double)_convertVisualAltitude:(double)arg1 toView:(id)arg2;
- (double)_convertVisualAltitude:(double)arg1 fromView:(id)arg2;
- (void)_setVisualAltitudeBias:(struct CGSize)arg1;
- (struct CGSize)_visualAltitudeBias;
- (void)_setVisualAltitude:(double)arg1;
- (void)_updateParallaxEffectWithAltitude:(double)arg1 bias:(struct CGSize)arg2;
- (id)_parallaxMotionEffect;
- (double)_visualAltitude;
- (void)_recursivelyReconsiderMotionEffectSuspension;
- (void)_recursivelyConsiderResumingMotionEffects;
- (void)_recursivelySuspendMotionEffects;
- (unsigned long long)_countOfMotionEffectsInSubtree;
- (_Bool)_motionEffectsAreSuspended;
- (void)setMotionEffects:(id)arg1;
- (id)_motionEffects;
- (id)motionEffects;
- (void)_endSuspendingMotionEffects;
- (void)_beginSuspendingMotionEffects;
- (void)_unregisterAllMotionEffects;
- (void)_removeMotionEffect:(id)arg1;
- (void)removeMotionEffect:(id)arg1;
- (void)_addMotionEffect:(id)arg1;
- (void)addMotionEffect:(id)arg1;
- (void)_modifyMotionEffectCountOfSelfAndAncestorsBy:(long long)arg1;
- (_Bool)_isInVisibleHierarchy;
- (void)_updateBackdropMaskViewsInScrollView:(id)arg1;
- (void)_updateBackdropMaskFrames;
- (void)_recursivelySetHiddenForBackdropMaskViews:(_Bool)arg1;
- (void)_setHiddenForBackdropMaskViews:(_Bool)arg1;
- (void)_setTransformForBackdropMaskViews:(struct CGAffineTransform)arg1;
- (void)_setCenterForBackdropMaskViews:(struct CGPoint)arg1 convertPoint:(_Bool)arg2;
- (void)_setCenterForBackdropMaskViews:(struct CGPoint)arg1;
- (void)_setBoundsForBackdropMaskViews:(struct CGRect)arg1;
- (void)_setFrameForBackdropMaskViews:(struct CGRect)arg1 convertFrame:(_Bool)arg2;
- (void)_setFrameForBackdropMaskViews:(struct CGRect)arg1;
- (id)_anyBackdropMaskView;
- (void)_removeBackdropMaskViews;
- (id)_backdropMaskViewForFlag:(long long)arg1;
- (void)_setBackdropMaskView:(id)arg1 forFlag:(long long)arg2;
- (id)_generateBackdropMaskViewForFlag:(long long)arg1;
- (id)_generateBackdropMaskImage;
@property(readonly, nonatomic) NSArray *_backdropMaskViews; // @dynamic _backdropMaskViews;
- (void)_setBackdropMaskViewForFilters:(id)arg1;
@property(readonly, nonatomic) UIView *_backdropMaskViewForFilters; // @dynamic _backdropMaskViewForFilters;
- (void)_setBackdropMaskViewForColorTint:(id)arg1;
@property(readonly, nonatomic) UIView *_backdropMaskViewForColorTint; // @dynamic _backdropMaskViewForColorTint;
- (void)_setBackdropMaskViewForGrayscaleTint:(id)arg1;
@property(readonly, nonatomic) UIView *_backdropMaskViewForGrayscaleTint; // @dynamic _backdropMaskViewForGrayscaleTint;
- (void)_setBackdropMaskViewFlags:(long long)arg1;
- (long long)_backdropMaskViewFlags;
@property(retain, nonatomic, setter=_setMaskView:) UIView *_maskView;
- (void)_setDrawsAsBackdropOverlayWithBlendMode:(long long)arg1;
- (void)_setDrawsAsBackdropOverlay:(_Bool)arg1;
- (_Bool)_drawsAsBackdropOverlay;
- (void)_endOcclusion:(id)arg1;
- (void)_beginOcclusion:(id)arg1;
- (_Bool)_hasNormalTintAdjustmentMode;
- (void)interactionTintColorDidChange;
- (id)tintColor;
- (id)_normalInheritedTintColor;
@property(retain, nonatomic) UIColor *interactionTintColor;
- (void)tintColorDidChange;
- (void)setTintAdjustmentMode:(long long)arg1;
- (long long)tintAdjustmentMode;
- (long long)_defaultTintAdjustmentMode;
- (void)setTintColor:(id)arg1;
- (id)_inheritedInteractionTintColor;
- (id)_tintColorArchivingKey;
- (void)_setAppearanceIsInvalid:(_Bool)arg1;
- (_Bool)_appearanceIsInvalid;
- (void)_invalidateAppearanceForSubviewsOfClass:(Class)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (struct CGColor *)_backgroundCGColor;
- (id)_backgroundColorSystemColorName;
- (void)_setBackgroundColorSystemColorName:(id)arg1;
- (_Bool)_hasOpaqueBackground;
- (_Bool)cancelTouchTracking;
- (_Bool)cancelMouseTracking;
- (void)stopHeartbeat:(SEL)arg1;
- (void)startHeartbeat:(SEL)arg1 inRunLoopMode:(id)arg2;
- (_Bool)_supportsBecomeFirstResponderWhenPossible;
- (_Bool)_canBecomeFirstResponderWhenPossible;
- (_Bool)_becomeFirstResponderWhenPossible;
- (void)_clearBecomeFirstResponderWhenCapable;
- (id)_previousKeyResponder;
- (id)_nextKeyResponder;
- (long long)_topToBottomLeftToRightViewCompare:(id)arg1;
- (id)nextResponder;
- (id)tapDelegate;
- (void)setTapDelegate:(id)arg1;
- (_Bool)_isChargeEnabled;
- (void)_setChargeEnabled:(_Bool)arg1;
- (float)charge;
- (void)setCharge:(float)arg1;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_createLayerWithFrame:(struct CGRect)arg1;
- (id)init;
- (Class)_appearanceGuideClass;
- (id)_appearanceContainer;
- (double)_baselineOffsetFromBottom;
- (void)_didRemoveDependentConstraint:(id)arg1;
- (void)_didAddDependentConstraint:(id)arg1;
- (id)_constraintsArray;
- (id)nsli_contentHeightVariable;
- (id)nsli_contentWidthVariable;
- (id)nsli_minYVariable;
- (id)nsli_minXVariable;
- (id)nsli_boundsHeightVariable;
- (id)nsli_boundsWidthVariable;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)_contentHeightVariable;
- (id)_contentWidthVariable;

@end

