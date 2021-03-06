//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSLayoutConstraint, NSMutableArray, NSString, UIAlertController, UIAlertControllerVisualStyle, UICollectionView, UILabel, UIView<UIAlertControllerBackgroundView>, _UIAlertControllerCollectionViewFlowLayout, _UIAlertControllerShadowedScrollView, _UIKeyboardLayoutAlignmentView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UIScrollViewDelegate>
{
    UIAlertController *_alertController;
    UIView *_roundedCornersView;
    UICollectionView *_actionCollectionView;
    _UIAlertControllerCollectionViewFlowLayout *_flowLayout;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UILabel *_detailMessageLabel;
    UIView *_contentViewControllerContainerView;
    NSMutableArray *_actionViews;
    UIView<UIAlertControllerBackgroundView> *_backdropView;
    _UIAlertControllerShadowedScrollView *_contentScrollView;
    UIView *_contentScrollViewContentView;
    UIView *_contentView;
    UIView *_foregroundView;
    UIView *_dimmingView;
    _UIKeyboardLayoutAlignmentView *_keyboardLayoutAlignmentView;
    UIView *_keyboardLayoutAlignmentAvailableSpaceView;
    UIAlertControllerVisualStyle *_visualStyle;
    long long _layoutOrientation;
    _Bool _inPopover;
    _Bool _hasDimmingView;
    _Bool _showsCancelAction;
    _Bool _cancelActionIsDiscrete;
    _Bool _shouldHaveBackdropView;
    _Bool _alignsToKeyboard;
    NSMutableArray *_backdropViewConstraints;
    NSMutableArray *_dimmingViewConstraints;
    NSMutableArray *_dimmingViewForegroundViewTopConstraints;
    NSMutableArray *_dimmingViewForegroundViewBottomConstraints;
    NSMutableArray *_dimmingViewConstraintsForAlertStyle;
    NSMutableArray *_dimmingViewConstraintsForActionSheetStyle;
    NSMutableArray *_noDimmingViewConstraints;
    _Bool _hasCachedLargestActionDimension;
    struct CGSize _largestActionDimension;
    NSLayoutConstraint *_foregroundViewWidthConstraint;
    NSLayoutConstraint *_contentViewTopConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSLayoutConstraint *_titleLabelTopAlignmentConstraint;
    NSLayoutConstraint *_messageLabelTopAlignmentConstraint;
    NSLayoutConstraint *_detailMessageLabelTopAlignmentConstraint;
    NSLayoutConstraint *_contentViewControllerViewLeftConstraint;
    NSLayoutConstraint *_contentViewControllerViewRightConstraint;
    NSLayoutConstraint *_contentViewControllerViewTopConstraint;
    NSLayoutConstraint *_contentViewControllerViewBottomConstraint;
    NSLayoutConstraint *_contentScrollViewBottomConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewTopAlignmentConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewWidthConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewHeightConstraint;
    NSLayoutConstraint *_collectionViewTopAlignmentConstraint;
    NSLayoutConstraint *_centerXConstraint;
    NSLayoutConstraint *_centerYConstraint;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_collectionViewWidthConstraint;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    NSLayoutConstraint *_collectionViewHorizontalAlignmentConstraint;
    NSLayoutConstraint *_discreteCancelActionViewTopConstraint;
    NSLayoutConstraint *_discreteCancelActionViewLeadingConstraint;
    NSLayoutConstraint *_discreteCancelActionViewWidthConstraint;
    NSLayoutConstraint *_discreteCancelActionViewHeightConstraint;
    NSLayoutConstraint *_backdropViewBottomConstraint;
    NSLayoutConstraint *_backdropViewRightConstraint;
}

+ (_Bool)_retroactivelyRequiresConstraintBasedLayout;
+ (void)initialize;
@property(retain) NSLayoutConstraint *backdropViewRightConstraint; // @synthesize backdropViewRightConstraint=_backdropViewRightConstraint;
@property(retain) NSLayoutConstraint *backdropViewBottomConstraint; // @synthesize backdropViewBottomConstraint=_backdropViewBottomConstraint;
@property(retain) NSLayoutConstraint *discreteCancelActionViewHeightConstraint; // @synthesize discreteCancelActionViewHeightConstraint=_discreteCancelActionViewHeightConstraint;
@property(retain) NSLayoutConstraint *discreteCancelActionViewWidthConstraint; // @synthesize discreteCancelActionViewWidthConstraint=_discreteCancelActionViewWidthConstraint;
@property(retain) NSLayoutConstraint *discreteCancelActionViewLeadingConstraint; // @synthesize discreteCancelActionViewLeadingConstraint=_discreteCancelActionViewLeadingConstraint;
@property(retain) NSLayoutConstraint *discreteCancelActionViewTopConstraint; // @synthesize discreteCancelActionViewTopConstraint=_discreteCancelActionViewTopConstraint;
@property(retain) NSLayoutConstraint *collectionViewHorizontalAlignmentConstraint; // @synthesize collectionViewHorizontalAlignmentConstraint=_collectionViewHorizontalAlignmentConstraint;
@property(retain) NSLayoutConstraint *collectionViewHeightConstraint; // @synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint;
@property(retain) NSLayoutConstraint *collectionViewWidthConstraint; // @synthesize collectionViewWidthConstraint=_collectionViewWidthConstraint;
@property(retain) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain) NSLayoutConstraint *centerYConstraint; // @synthesize centerYConstraint=_centerYConstraint;
@property(retain) NSLayoutConstraint *centerXConstraint; // @synthesize centerXConstraint=_centerXConstraint;
@property(retain) NSLayoutConstraint *collectionViewTopAlignmentConstraint; // @synthesize collectionViewTopAlignmentConstraint=_collectionViewTopAlignmentConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerContainerViewHeightConstraint; // @synthesize contentViewControllerContainerViewHeightConstraint=_contentViewControllerContainerViewHeightConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerContainerViewWidthConstraint; // @synthesize contentViewControllerContainerViewWidthConstraint=_contentViewControllerContainerViewWidthConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerContainerViewTopAlignmentConstraint; // @synthesize contentViewControllerContainerViewTopAlignmentConstraint=_contentViewControllerContainerViewTopAlignmentConstraint;
@property(retain) NSLayoutConstraint *contentScrollViewBottomConstraint; // @synthesize contentScrollViewBottomConstraint=_contentScrollViewBottomConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerViewBottomConstraint; // @synthesize contentViewControllerViewBottomConstraint=_contentViewControllerViewBottomConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerViewTopConstraint; // @synthesize contentViewControllerViewTopConstraint=_contentViewControllerViewTopConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerViewRightConstraint; // @synthesize contentViewControllerViewRightConstraint=_contentViewControllerViewRightConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerViewLeftConstraint; // @synthesize contentViewControllerViewLeftConstraint=_contentViewControllerViewLeftConstraint;
@property(retain) NSLayoutConstraint *detailMessageLabelTopAlignmentConstraint; // @synthesize detailMessageLabelTopAlignmentConstraint=_detailMessageLabelTopAlignmentConstraint;
@property(retain) NSLayoutConstraint *messageLabelTopAlignmentConstraint; // @synthesize messageLabelTopAlignmentConstraint=_messageLabelTopAlignmentConstraint;
@property(retain) NSLayoutConstraint *titleLabelTopAlignmentConstraint; // @synthesize titleLabelTopAlignmentConstraint=_titleLabelTopAlignmentConstraint;
@property(retain) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property(retain) NSLayoutConstraint *contentViewTopConstraint; // @synthesize contentViewTopConstraint=_contentViewTopConstraint;
@property(retain) NSLayoutConstraint *foregroundViewWidthConstraint; // @synthesize foregroundViewWidthConstraint=_foregroundViewWidthConstraint;
@property(readonly) _UIAlertControllerCollectionViewFlowLayout *_flowLayout; // @synthesize _flowLayout;
@property(readonly) UIView *_dimmingView; // @synthesize _dimmingView;
@property(readonly) UIView *_foregroundView; // @synthesize _foregroundView;
- (id)preferredFocusedItem;
- (long long)tintAdjustmentMode;
- (void)setTintAdjustmentMode:(long long)arg1;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)_reevaluateSuperviewSizingConstraints;
- (void)willMoveToSuperview:(id)arg1;
- (void)_recomputeAlignedDescriptiveLabelTextWidth;
- (void)_sizeOfContentViewControllerChanged;
- (void)_removeContentViewController;
@property _Bool alignsToKeyboard;
@property _Bool shouldHaveBackdropView;
@property _Bool cancelActionIsDiscrete;
- (id)_cancelActionView;
@property _Bool showsCancelAction;
@property _Bool hasDimmingView;
@property _Bool inPopover;
@property long long layoutOrientation;
- (id)actionDelimiterIndices;
- (id)defaultAction;
- (id)cancelAction;
- (id)actions;
- (id)contentViewController;
- (_Bool)_shouldTreatEmptyStringsAsNil;
- (_Bool)_hasDetailMessage;
- (_Bool)_hasAttributedMessage;
- (_Bool)_hasMessage;
- (_Bool)_hasAttributedTitle;
- (_Bool)_hasTitle;
- (id)_attributedDetailMessage;
- (id)_attributedMessage;
- (id)_attributedTitle;
- (id)message;
- (id)title;
- (void)_setAttributedDetailMessage:(id)arg1;
- (void)_setAttributedMessage:(id)arg1;
- (void)_setAttributedTitle:(id)arg1;
- (void)_setMessage:(id)arg1;
- (void)_setTitle:(id)arg1;
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)_contentSizeChanged;
- (void)_updateConstraintConstants;
- (void)_updateBackdrop;
- (void)_updateCollectionViewForVisualStyleChange;
- (void)_updateActionViewStyle:(id)arg1;
- (void)_updateInsets;
- (void)_updateCornerRadius;
- (void)_updateVisualAltitude;
- (void)_updateLabelMaximumLines;
- (void)_updateLabelTextColor;
- (void)_updateLabelFontSizes;
- (void)_updateStyleForIdiomChange:(_Bool)arg1;
@property(retain, nonatomic, setter=_setVisualStyle:) UIAlertControllerVisualStyle *_visualStyle;
- (struct CGSize)_minimumSizeForAllActions;
- (double)_labelHorizontalInsets;
- (struct CGSize)_contentViewControllerSize;
- (double)_marginBetweenContentAndDiscreteCancelAction;
- (_Bool)hasDiscreteHorizontalCancelAction;
- (_Bool)_actionLayoutIsVertical;
- (_Bool)_wantsHorizontalCollectionViewLayout;
- (_Bool)_wantsHorizontalAlert;
- (_Bool)_wantsHorizontalActionSheet;
- (void)_updateDefaultAction;
- (long long)_numberOfActionsForCollectionView;
- (id)_actionViewsForCollectionView;
- (id)_orderedActionViewsForCollectionView;
- (_Bool)_shouldHaveCancelActionInCollectionView;
- (void)_actionsChanged;
- (void)_propertiesChanged;
- (void)_actionLayoutDirectionChanged;
- (_Bool)_hasDiscreteCancelAction;
- (id)_bottomMostViewToAlignDiscreteCancelActionViewTo;
- (_Bool)_canLayOutActionsHorizontally;
- (struct CGSize)_collectionViewSizeForHorizontalLayout:(_Bool)arg1 itemSize:(struct CGSize)arg2;
- (struct CGSize)_itemSizeForHorizontalLayout:(_Bool)arg1;
- (double)_idealLayoutWidth;
- (double)_idealWidth;
- (double)_layoutWidthForHorizontalLayout:(_Bool)arg1;
- (double)_availableWidthForHorizontalLayout:(_Bool)arg1;
- (_Bool)_horizontalLayoutCanUseFullWidth;
- (double)_verticalLayoutWidth;
- (struct CGSize)_sizeForLayoutWidthDetermination;
- (_Bool)_buttonsAreTopMost;
- (void)_applyContentViewControllerContainerViewConstraints;
- (void)_applyDetailMessageConstraints;
- (void)_applyMessageConstraints;
- (void)_applyTitleConstraints;
- (void)_applyKeyboardAlignmentViewsConstraints;
- (void)_prepareBackdropViewConstraints;
- (void)_prepareDimmingViewConstraints;
- (void)_applyViewConstraints;
- (void)_prepareKeyboardLayoutAlignmentViews;
- (void)_prepareDimmingView;
- (void)_invalidateFlowLayout;
- (void)_prepareActionCollectionView;
- (void)_prepareContentViewControllerContainerView;
- (void)_prepareDetailMessageLabel;
- (void)_prepareMesssageLabel;
- (void)_prepareTitleLabel;
- (void)_prepareContentScrollView;
- (void)_prepareContentView;
- (void)_prepareForegroundView;
- (void)_prepareViewsAndAddConstraints;
@property UIAlertController *alertController;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

