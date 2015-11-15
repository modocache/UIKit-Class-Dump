//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "NSCoding.h"
#import "UIAppearanceContainer.h"

@class NSArray, NSBundle, NSDictionary, NSMutableArray, NSString, UIBarButtonItem, UIDimmingView, UIDropShadowView, UINavigationItem, UIPopoverController, UISearchDisplayController, UIStoryboard, UITabBarItem, UITransitionView, UIView;

@interface UIViewController : UIResponder <NSCoding, UIAppearanceContainer>
{
    UIView *_view;
    UITabBarItem *_tabBarItem;
    UINavigationItem *_navigationItem;
    NSArray *_toolbarItems;
    NSString *_title;
    NSString *_nibName;
    NSBundle *_nibBundle;
    UIViewController *_parentViewController;
    UIViewController *_childModalViewController;
    UIViewController *_parentModalViewController;
    UIViewController *_previousRootViewController;
    UIView *_modalTransitionView;
    UIResponder *_modalPreservedFirstResponder;
    UIResponder *_defaultFirstResponder;
    UIDimmingView *_dimmingView;
    UIDropShadowView *_dropShadowView;
    id _currentAction;
    UIStoryboard *_storyboard;
    NSArray *_storyboardSegueTemplates;
    NSDictionary *_externalObjectsTableForViewLoading;
    UIView *_savedHeaderSuperview;
    UIView *_savedFooterSuperview;
    UIBarButtonItem *_editButtonItem;
    UISearchDisplayController *_searchDisplayController;
    int _modalTransitionStyle;
    int _modalPresentationStyle;
    int _lastKnownInterfaceOrientation;
    UIPopoverController *_popoverController;
    UIView *_containerViewInSheet;
    struct CGSize _contentSizeForViewInPopover;
    struct CGSize _formSheetSize;
    CDUnknownBlockType _afterAppearance;
    int _explicitAppearanceTransitionLevel;
    struct {
        unsigned int appearState:2;
        unsigned int isEditing:1;
        unsigned int isPerformingModalTransition:1;
        unsigned int hidesBottomBarWhenPushed:1;
        unsigned int autoresizesArchivedViewToFullSize:1;
        unsigned int viewLoadedFromControllerNib:1;
        unsigned int isRootViewController:1;
        unsigned int isSheet:1;
        unsigned int isSuspended:1;
        unsigned int wasApplicationFrameAtSuspend:1;
        unsigned int wantsFullScreenLayout:1;
        unsigned int shouldUseFullScreenLayout:1;
        unsigned int allowsAutorotation:1;
        unsigned int searchControllerRetained:1;
        unsigned int oldModalInPopover:1;
        unsigned int isModalInPopover:1;
        unsigned int restoreDeepestFirstResponder:1;
        unsigned int isInWillRotateCallback:1;
        unsigned int disallowMixedOrientationPresentations:1;
        unsigned int isFinishingModalTransition:1;
        unsigned int definesPresentationContext:1;
        unsigned int providesPresentationContextTransitionStyle:1;
        unsigned int containmentSupport:1;
        unsigned int isSettingAppearState:1;
        unsigned int isInAnimatedVCTransition:1;
        unsigned int presentationIsChanging:1;
        unsigned int containmentIsChanging:1;
        unsigned int explicitTransitionIsAppearing:1;
        unsigned int disableAppearanceTransitions:1;
        unsigned int needsDidMoveCleanup:1;
        unsigned int suppressesBottomBar:1;
        unsigned int disableRootPromotion:1;
        unsigned int interfaceOrientationReentranceGuard:1;
        unsigned int isExecutingAfterAppearance:1;
    } _viewControllerFlags;
    NSMutableArray *_childViewControllers;
}

+ (void)attemptRotationToDeviceOrientation;
+ (BOOL)_doesOverrideLegacyShouldAutorotateMethod;
+ (double)durationForTransition:(int)arg1;
+ (double)customTransitionDuration;
+ (void)setCustomTransitionDuration:(double)arg1;
+ (BOOL)_optsOutOfPopoverControllerHierarchyCheck;
+ (BOOL)_isViewSizeFullScreen:(id)arg1 inWindow:(id)arg2;
+ (BOOL)_isViewSizeFullScreen:(id)arg1 inWindow:(id)arg2 ignoreInWindowCheck:(BOOL)arg3;
+ (id)_allDescriptions;
+ (void)setViewController:(id)arg1 forView:(id)arg2;
+ (void)removeViewControllerForView:(id)arg1;
+ (id)viewControllerForView:(id)arg1;
+ (int)_keyboardDirectionForTransition:(int)arg1 isOrderingIn:(BOOL)arg2;
+ (id)existingNibNameMatchingClassName:(id)arg1 bundle:(id)arg2;
+ (struct CGSize)defaultFormSheetSize;
+ (BOOL)doesOverrideViewControllerMethod:(SEL)arg1;
+ (BOOL)_shouldUseLegacyModalViewControllers;
+ (BOOL)_isNestedViewControllerSupportDisabled;
+ (void)_disableNestedViewControllerSupport:(BOOL)arg1;
+ (void)_forceLegacyModalViewControllers:(BOOL)arg1;
@property(nonatomic) int modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
@property(nonatomic) int modalTransitionStyle; // @synthesize modalTransitionStyle=_modalTransitionStyle;
@property(nonatomic) UIViewController *parentModalViewController; // @synthesize parentModalViewController=_parentModalViewController;
@property(retain, nonatomic) UIDropShadowView *dropShadowView; // @synthesize dropShadowView=_dropShadowView;
@property(readonly, nonatomic) NSArray *storyboardSegueTemplates; // @synthesize storyboardSegueTemplates=_storyboardSegueTemplates;
- (void)_setStoryboard:(id)arg1;
@property(retain, nonatomic) UIStoryboard *storyboard; // @synthesize storyboard=_storyboard;
@property(retain, nonatomic) NSBundle *nibBundle; // @synthesize nibBundle=_nibBundle;
@property(readonly, nonatomic) UIView *savedHeaderSuperview; // @synthesize savedHeaderSuperview=_savedHeaderSuperview;
@property(copy, nonatomic) NSString *nibName; // @synthesize nibName=_nibName;
@property(copy, nonatomic) CDUnknownBlockType afterAppearanceBlock; // @synthesize afterAppearanceBlock=_afterAppearance;
@property(nonatomic) NSMutableArray *mutableChildViewControllers; // @synthesize mutableChildViewControllers=_childViewControllers;
- (BOOL)isMovingFromParentViewController;
- (BOOL)isMovingToParentViewController;
- (BOOL)isBeingDismissed;
- (BOOL)isBeingPresented;
@property(nonatomic) BOOL searchBarHidNavBar;
- (void)_setSearchDisplayControllerUnretained:(id)arg1;
@property(retain, nonatomic) UISearchDisplayController *searchDisplayController; // @dynamic searchDisplayController;
- (void)_setSearchDisplayController:(id)arg1 retain:(BOOL)arg2;
- (id)defaultPNGName;
- (void)accessibilityLargeTextDidChange;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)window:(id)arg1 didRotateFromInterfaceOrientation:(int)arg2;
- (void)_didRotateFromInterfaceOrientation:(int)arg1 forwardToChildControllers:(BOOL)arg2 skipSelf:(BOOL)arg3;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)window:(id)arg1 willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)arg2 duration:(double)arg3;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1;
- (void)window:(id)arg1 didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg2;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)window:(id)arg1 willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg2 duration:(double)arg3;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)window:(id)arg1 willAnimateRotationToInterfaceOrientation:(int)arg2 duration:(double)arg3;
- (void)_willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 forwardToChildControllers:(BOOL)arg3 skipSelf:(BOOL)arg4;
- (void)window:(id)arg1 resizeFromOrientation:(int)arg2;
- (struct CGAffineTransform)tranformForScreenOriginRotation:(float)arg1;
- (void)_getRotationContentSettings:(CDStruct_19ba41f1 *)arg1;
- (void)getRotationContentSettings:(CDStruct_19ba41f1 *)arg1 forWindow:(id)arg2;
- (BOOL)_shouldUseOnePartRotation;
- (BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)window:(id)arg1 willRotateToInterfaceOrientation:(int)arg2 duration:(double)arg3;
- (void)_willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 forwardToChildControllers:(BOOL)arg3 skipSelf:(BOOL)arg4;
@property(nonatomic, getter=isInWillRotateCallback) BOOL inWillRotateCallback;
- (struct CGRect)_boundsForOrientation:(int)arg1;
- (struct CGPoint)_centerForOrientation:(int)arg1;
- (BOOL)_isViewControllerInWindowHierarchy;
- (void)_updateLastKnownInterfaceOrientationOnPresentionStack:(int)arg1;
@property(nonatomic) int interfaceOrientation;
- (void)_setInterfaceOrientationOnModalRecursively:(int)arg1;
- (void)_clearLastKnownInterfaceOrientation;
- (int)_lastKnownInterfaceOrientation;
- (id)rotatingFooterView;
- (id)rotatingFooterViewForWindow:(id)arg1;
- (id)rotatingContentViewForWindow:(id)arg1;
- (id)rotatingHeaderView;
- (id)rotatingHeaderViewForWindow:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)_setAllowsAutorotation:(BOOL)arg1;
- (BOOL)_allowsAutorotation;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(int)arg2;
- (void)_updateInterfaceOrientationAnimated:(BOOL)arg1;
- (BOOL)_isInterfaceAutorotationDisabled;
- (void)_endDisablingInterfaceAutorotation;
- (void)_beginDisablingInterfaceAutorotation;
- (id)viewControllerForRotation;
- (double)durationForTransition:(int)arg1;
- (id)_backgroundColorForModalFormSheet;
- (BOOL)_shouldIgnoreTouchesForModalFormSheet;
- (BOOL)disablesAutomaticKeyboardDismissal;
- (BOOL)_shouldAutoPinInputViewsForModalFormSheet;
@property(nonatomic) BOOL disableRootPromotion;
- (void)_setDisallowMixedOrientationPresentations:(BOOL)arg1;
- (BOOL)_disallowMixedOrientationPresentations;
- (void)_handleDismiss;
- (void)_clearDismissButton;
- (void)_addDismissButton;
@property(readonly, nonatomic) UIViewController *presentingViewController;
@property(readonly, nonatomic) UIViewController *presentedViewController;
@property(nonatomic) BOOL providesPresentationContextTransitionStyle;
- (BOOL)_isPresentationContextByDefault;
@property(nonatomic) BOOL definesPresentationContext;
- (void)_legacyModalDismissTransitionDidComplete;
- (void)_didFinishDismissTransition;
- (void)_legacyModalPresentTransitionDidComplete;
- (void)_didFinishPresentTransition;
- (BOOL)transitionViewShouldUseViewControllerCallbacks;
- (void)_startPresentCustomTransitionWithDuration:(double)arg1;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (void)_dismissViewControllerWithTransition:(int)arg1 from:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissModalViewControllerWithTransition:(int)arg1;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resetViewController;
- (void)_legacyDismissModalViewController:(id)arg1 withTransition:(int)arg2;
- (void)presentModalViewController:(id)arg1 animated:(BOOL)arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentModalViewController:(id)arg1 withTransition:(int)arg2;
- (void)presentViewController:(id)arg1 withTransition:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (int)_transitionForModalTransitionStyle:(int)arg1 appearing:(BOOL)arg2;
@property(readonly, nonatomic) BOOL _useSheetRotation;
@property(readonly, nonatomic) BOOL _isPresentedModally;
@property(readonly, nonatomic) BOOL _isModalSheet;
@property(readonly, nonatomic) BOOL _isPresentedFormSheet;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
@property(readonly, nonatomic) BOOL _isDimmingBackground;
- (int)_preferredInterfaceOrientationGivenCurrentOrientation:(int)arg1;
- (void)_legacyPresentModalViewController:(id)arg1 withTransition:(int)arg2;
- (void)_notifyPopOverThatView:(id)arg1 isTransitioning:(BOOL)arg2;
- (void)userDidCancelPopoverView:(id)arg1;
- (struct CGRect)_frameForContainerViewInSheetForBounds:(struct CGRect)arg1;
- (struct CGRect)_frameForContainerViewInSheetForBounds:(struct CGRect)arg1 displayingTopView:(BOOL)arg2 andBottomView:(BOOL)arg3;
- (BOOL)_ancestorViewControllerIsInPopover;
- (id)_popoverController;
- (void)_setPopoverController:(id)arg1;
- (void)_sheetPresentAnimationDidStop;
- (void)setIsSheet:(BOOL)arg1;
- (BOOL)isSheet;
- (void)_overlayPresentAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (CDUnknownBlockType)_completionBlock;
- (id)currentAction;
@property(readonly, nonatomic) UIViewController *modalViewController;
@property(retain, nonatomic) UIViewController *childModalViewController;
@property(retain, nonatomic) UITransitionView *modalTransitionView;
@property(nonatomic, getter=isFinishingModalTransition) BOOL finishingModalTransition;
- (void)setPerformingModalTransition:(BOOL)arg1;
- (BOOL)isPerformingModalTransition;
@property(nonatomic) BOOL wantsFullScreenLayout;
- (BOOL)_reallyWantsFullScreenLayout;
- (BOOL)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2;
- (BOOL)_shouldChildViewControllerUseFullScreenLayout:(id)arg1;
- (BOOL)_shouldUseFullScreenLayout;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)applicationWantsViewsToDisappear;
- (id)_visibleView;
- (BOOL)_isViewInWindowWithoutParentViewController;
- (void)purgeMemoryForReason:(int)arg1;
- (BOOL)_canReloadView;
- (void)didReceiveMemoryWarning;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (id)_descriptionWithChildren:(int)arg1;
- (id)_description;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewWillMoveToWindow:(id)arg1;
@property(readonly, nonatomic) BOOL inExplicitAppearanceTransition;
- (BOOL)_doesSelfOrAncestorPassPredicate:(CDUnknownBlockType)arg1;
- (BOOL)_didSelfOrAncestorBeginAppearanceTransition;
- (void)_resignRootViewController;
- (BOOL)_tryBecomeRootViewControllerInWindow:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)_endAppearanceTransitionToViewController:(id)arg1;
- (void)_beginAppearanceTransitionToViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)endAppearanceTransition;
- (void)_executeAfterAppearanceBlock;
@property(nonatomic) BOOL needsDidMoveCleanup;
@property(nonatomic) BOOL appearanceTransitionsAreDisabled;
- (void)cancelBeginAppearanceTransition;
- (BOOL)_endAppearanceTransition:(CDUnknownBlockType)arg1;
- (BOOL)beginAppearanceTransition:(BOOL)arg1 animated:(BOOL)arg2;
- (void)__viewDidDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)__viewWillDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)__viewDidAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)__viewWillAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_setViewAppearState:(int)arg1 isAnimating:(BOOL)arg2;
@property(nonatomic, getter=isInAnimatedVCTransition) BOOL inAnimatedVCTransition;
- (BOOL)_skipDefaultAppearStateCallbacks;
- (BOOL)forwardRotationMethods;
@property(readonly, nonatomic) BOOL isSettingAppearState;
- (BOOL)isUsingLegacyContainment;
- (void)setUseLegacyContainment:(BOOL)arg1;
- (void)setContainmentSupport:(BOOL)arg1;
- (BOOL)containmentSupport;
- (BOOL)_hasAppeared;
- (void)_setAppearState:(int)arg1;
- (int)_appearState;
- (BOOL)_isAppearingOrAppeared;
- (void)_setPreviousRootViewController:(id)arg1;
- (id)_previousRootViewController;
- (id)_ancestorViewControllerOfClass:(Class)arg1 allowModalParent:(BOOL)arg2;
- (BOOL)isViewControllerModallyPresented;
- (id)_modalPresenter:(int)arg1;
- (id)_rootAncestorViewController;
- (id)_nonModalAncestorViewController;
- (id)_nonModalAncestorViewControllerStopAtIsPresentationContext:(BOOL)arg1;
- (id)_nonModalParentViewController;
@property(readonly, nonatomic) unsigned int childViewControllersCount;
@property(nonatomic) UIViewController *parentViewController;
@property(readonly, nonatomic) UIViewController *_parentModalViewController;
@property(readonly, nonatomic) UIViewController *_parentViewController;
- (void)removeChildViewController:(id)arg1;
- (void)removeChildViewController:(id)arg1 notifyDidMove:(BOOL)arg2;
- (void)_addChildViewController:(id)arg1 performHierarchyCheck:(BOOL)arg2;
- (void)_addChildViewController:(id)arg1;
- (void)_removeChildViewController:(id)arg1;
- (void)_enumerateVisibleChildControllers:(BOOL)arg1 includePresentedChildren:(BOOL)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)updateTitleForViewController:(id)arg1;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)performSegueWithIdentifier:(id)arg1 sender:(id)arg2;
- (id)_segueTemplateWithIdentifier:(id)arg1;
- (BOOL)_containsFirstResponder;
- (void)autoresizeArchivedView;
- (void)setAutoresizesArchivedViewToFullSize:(BOOL)arg1;
- (BOOL)autoresizesArchivedViewToFullSize;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)window:(id)arg1 willAnimateFromContentFrame:(struct CGRect)arg2 toContentFrame:(struct CGRect)arg3;
- (id)_existingTabBarItem;
- (void)_setExistingTabBarItem:(id)arg1;
- (id)_existingNavigationItem;
- (void)_setExistingNavigationItem:(id)arg1;
- (id)contentScrollView;
- (id)_existingView;
- (id)existingView;
- (BOOL)isViewLoaded;
@property(retain, nonatomic) UIView *view;
- (void)viewDidUnload;
- (void)viewWillUnload;
- (void)unloadViewForced:(BOOL)arg1;
- (void)unloadViewIfReloadable;
- (void)unloadView;
- (void)forceUnloadView;
- (void)viewDidLoad;
- (void)loadView;
- (float)_statusBarHeightForCurrentInterfaceOrientation;
- (struct CGRect)_defaultInitialViewFrame;
- (void)_loadViewFromNibNamed:(id)arg1 bundle:(id)arg2;
- (id)_appearanceContainer;
- (id)defaultFirstResponder;
- (void)setDefaultFirstResponder:(id)arg1;
- (id)nextResponder;
- (id)_firstResponder;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)_shouldPersistViewWhenCoding;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_doCommonSetup;
- (void)_prepareForDismissalInPopover:(id)arg1;
- (void)_prepareForPresentationInPopover:(id)arg1;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_willResignContentViewControllerOfPopover:(id)arg1;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (id)_viewForModalPresentationInPopover;
- (id)_viewForContentInPopover;
@property(nonatomic) BOOL modalInPopover;
- (BOOL)isModalInPopover;
- (void)_endModalPresentationInPopover;
- (void)_startModalPresentationInPopover;
@property(nonatomic) struct CGSize contentSizeForViewInPopover; // @synthesize contentSizeForViewInPopover=_contentSizeForViewInPopover;
- (struct CGSize)contentSizeForViewInPopoverView;
- (void)setFormSheetSize:(struct CGSize)arg1;
- (struct CGSize)formSheetSize;

@end

