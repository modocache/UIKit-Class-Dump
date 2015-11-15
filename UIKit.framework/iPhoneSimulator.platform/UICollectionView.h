//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UICollectionReusableView, UICollectionViewData, UICollectionViewLayout, UICollectionViewLayoutAttributes, UICollectionViewUpdate, UITouch, UIView, _UIDynamicAnimationGroup;

@interface UICollectionView : UIScrollView
{
    UICollectionViewLayout *_layout;
    id <UICollectionViewDataSource> _dataSource;
    UIView *_backgroundView;
    NSMutableSet *_indexPathsForSelectedItems;
    NSMutableDictionary *_cellReuseQueues;
    NSMutableDictionary *_supplementaryViewReuseQueues;
    NSMutableSet *_indexPathsForHighlightedItems;
    long long _reloadingSuspendedCount;
    long long _updateAnimationCount;
    UICollectionReusableView *_firstResponderView;
    UIView *_newContentView;
    long long _firstResponderViewType;
    NSString *_firstResponderViewKind;
    NSIndexPath *_firstResponderIndexPath;
    NSMutableDictionary *_allVisibleViewsDict;
    NSMutableDictionary *_clonedViewsDict;
    NSIndexPath *_pendingSelectionIndexPath;
    NSMutableSet *_pendingDeselectionIndexPaths;
    UICollectionViewData *_collectionViewData;
    UICollectionViewUpdate *_currentUpdate;
    struct CGRect _visibleBounds;
    struct CGRect _preRotationBounds;
    struct CGPoint _rotationBoundsOffset;
    long long _rotationAnimationCount;
    long long _updateCount;
    NSMutableArray *_insertItems;
    NSMutableArray *_deleteItems;
    NSMutableArray *_reloadItems;
    NSMutableArray *_moveItems;
    NSArray *_originalInsertItems;
    NSArray *_originalDeleteItems;
    UITouch *_currentTouch;
    id _updateCompletionHandler;
    NSMutableDictionary *_cellClassDict;
    NSMutableDictionary *_cellNibDict;
    NSMutableDictionary *_supplementaryViewClassDict;
    NSMutableDictionary *_supplementaryViewNibDict;
    NSMutableDictionary *_cellNibExternalObjectsTables;
    NSMutableDictionary *_supplementaryViewNibExternalObjectsTables;
    UICollectionViewLayoutAttributes *_transitionLayoutAttributes;
    _Bool _isInInteractiveTransition;
    _Bool _shouldAccumulateTrackedLayoutValues;
    NSMutableDictionary *_interactiveTransitionInfos;
    CDUnknownBlockType _interactiveCompletionHandler;
    double _currentInteractiveTransitionTimeStamp;
    double _previousInteractiveTransitionTimeStamp;
    double _startTimeStamp;
    struct CGPoint _currentCenterOffset;
    struct CGPoint _previousCenterOffset;
    double _currentInteractiveTransitionProgress;
    double _previousInteractiveTransitionProgress;
    _UIDynamicAnimationGroup *_endInteractiveTransitionAnimationGroup;
    UICollectionViewLayout *_nextLayoutForInteractiveTranstion;
    NSMutableDictionary *_interactiveTransitionValueTrackingDict;
    NSMutableArray *_trackedValuesKeys;
    struct {
        unsigned int delegateShouldHighlightItemAtIndexPath:1;
        unsigned int delegateDidHighlightItemAtIndexPath:1;
        unsigned int delegateDidUnhighlightItemAtIndexPath:1;
        unsigned int delegateShouldSelectItemAtIndexPath:1;
        unsigned int delegateShouldDeselectItemAtIndexPath:1;
        unsigned int delegateDidSelectItemAtIndexPath:1;
        unsigned int delegateDidDeselectItemAtIndexPath:1;
        unsigned int delegateSupportsMenus:1;
        unsigned int delegateDidEndDisplayingCell:1;
        unsigned int delegateDidEndDisplayingSupplementaryView:1;
        unsigned int delegateIndexForReferenceItemDuringLayoutTransition:1;
        unsigned int delegateOverrideForTransitionOffsetSize:1;
        unsigned int delegateTargetContentOffsetForProposedContentOffset:1;
        unsigned int dataSourceNumberOfSections:1;
        unsigned int dataSourceViewForSupplementaryElement:1;
        unsigned int reloadSkippedDuringSuspension:1;
        unsigned int scheduledUpdateVisibleCells:1;
        unsigned int scheduledUpdateVisibleCellLayoutAttributes:1;
        unsigned int allowsSelection:1;
        unsigned int allowsMultipleSelection:1;
        unsigned int fadeCellsForBoundsChange:1;
        unsigned int updatingLayout:1;
        unsigned int needsReload:1;
        unsigned int reloading:1;
        unsigned int skipLayoutDuringSnapshotting:1;
        unsigned int layoutInvalidatedSinceLastCellUpdate:1;
        unsigned int doneFirstLayout:1;
        unsigned int loadingOffscreenViews:1;
        unsigned int updating:1;
    } _collectionViewFlags;
    struct CGPoint _lastLayoutOffset;
    CDUnknownBlockType _navigationCompletion;
}

+ (id)_reuseKeyForSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2;
@property(copy, nonatomic, getter=_navigationCompletion, setter=_setNavigationCompletion:) CDUnknownBlockType navigationCompletion; // @synthesize navigationCompletion=_navigationCompletion;
@property(retain, nonatomic, getter=_currentTouch, setter=_setCurrentTouch:) UITouch *currentTouch; // @synthesize currentTouch=_currentTouch;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) id <UICollectionViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_layout;
- (id)_dynamicAnimationsForTrackValues;
- (void)_updateTrackedLayoutValuesWith:(id)arg1;
- (double)_trackedLayoutValueForKey:(id)arg1;
- (void)_trackLayoutValue:(double)arg1 forKey:(id)arg2;
- (long long)maximumGlobalItemIndex;
- (long long)highlightedGlobalItem;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)_moveWithEvent:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)_cellMenuDismissed;
- (void)_performAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
- (_Bool)_canPerformAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
- (_Bool)_shouldShowMenuForCell:(id)arg1;
- (struct CGPoint)_contentOffsetForNewFrame:(struct CGRect)arg1 oldFrame:(struct CGRect)arg2 newContentSize:(struct CGSize)arg3 andOldContentSize:(struct CGSize)arg4;
- (void)_scrollViewDidEndDraggingWithDeceleration:(_Bool)arg1;
- (void)didMoveToWindow;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_cancelTouches;
- (void)_selectAllSelectedItems;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_userSelectItemAtIndexPath:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)_selectableIndexPathForItemContainingHitView:(id)arg1;
- (void)_unhighlightAllItems;
- (void)_invalidateLayoutWithContext:(id)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_endUpdates;
- (void)_beginUpdates;
- (void)_updateAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_updateWithItems:(id)arg1;
- (id)_viewAnimationsForCurrentUpdate;
- (void)_prepareLayoutForUpdates;
- (void)_endItemAnimations;
- (void)_setupCellAnimations;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)_updateRowsAtIndexPaths:(id)arg1 updateAction:(int)arg2;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)reloadSections:(id)arg1;
- (void)deleteSections:(id)arg1;
- (void)insertSections:(id)arg1;
- (void)_updateSections:(id)arg1 updateAction:(int)arg2;
- (id)_arrayForUpdateAction:(int)arg1;
- (id)_currentUpdate;
- (void)_reuseSupplementaryView:(id)arg1;
- (void)_reuseCell:(id)arg1;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)_dequeueReusableViewOfKind:(id)arg1 withIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (void)_setExternalObjectTable:(id)arg1 forNibLoadingOfSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)_setExternalObjectTable:(id)arg1 forNibLoadingOfCellWithReuseIdentifier:(id)arg2;
- (void)registerNib:(id)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerNib:(id)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)_scrollViewWillEndDraggingWithVelocity:(struct CGPoint)arg1 targetContentOffset:(inout struct CGPoint *)arg2;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)_indexPathsForVisibleDecorationViewsOfKind:(id)arg1;
- (id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg1;
- (id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg1 isDecorationView:(_Bool)arg2;
- (id)_visibleDecorationViewsOfKind:(id)arg1;
- (id)_visibleSupplementaryViewsOfKind:(id)arg1;
- (id)_visibleSupplementaryViewsOfKind:(id)arg1 isDecorationView:(_Bool)arg2;
- (id)indexPathsForVisibleItems;
- (id)visibleCells;
- (id)cellForItemAtIndexPath:(id)arg1;
- (id)indexPathForSupplementaryView:(id)arg1;
- (id)indexPathForCell:(id)arg1;
- (id)_indexPathForView:(id)arg1 ofType:(unsigned long long)arg2;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)_pivotForTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)_cancelInteractiveTransitionWithFinalAnimation:(_Bool)arg1;
- (void)_finishInteractiveTransitionWithFinalAnimation:(_Bool)arg1;
- (void)_finishInteractiveTransitionShouldFinish:(_Bool)arg1 finalAnimation:(_Bool)arg2;
- (void)_cleanUpAfterInteractiveTransitionDidFinish:(_Bool)arg1;
- (void)_updateTransitionWithProgress:(double)arg1;
- (id)startInteractiveTransitionToCollectionViewLayout:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setCollectionViewLayout:(id)arg1 animated:(_Bool)arg2 isInteractive:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setCollectionViewLayout:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setCollectionViewLayout:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_visible;
- (void)layoutSubviews;
- (id)_viewControllerToNotifyOnLayoutSubviews;
- (void)_updateBackgroundView;
- (id)_doubleSidedAnimationsForView:(id)arg1 withStartingLayoutAttributes:(id)arg2 startingLayout:(id)arg3 endingLayoutAttributes:(id)arg4 endingLayout:(id)arg5 withAnimationSetup:(CDUnknownBlockType)arg6 animationCompletion:(CDUnknownBlockType)arg7 enableCustomAnimations:(_Bool)arg8 customAnimationsType:(unsigned long long)arg9;
- (void)_ensureViewsAreLoadedInRect:(struct CGRect)arg1;
- (void)_updateVisibleCellsNow:(_Bool)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (id)_createPreparedSupplementaryViewForElementOfKind:(id)arg1 atIndexPath:(id)arg2 withLayoutAttributes:(id)arg3 applyAttributes:(_Bool)arg4;
- (id)_createPreparedCellForItemAtIndexPath:(id)arg1 withLayoutAttributes:(id)arg2 applyAttributes:(_Bool)arg3;
- (struct CGRect)_visibleBounds;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_addControlledSubview:(id)arg1 atZIndex:(long long)arg2;
- (void)_setIsAncestorOfFirstResponder:(_Bool)arg1;
- (void)_invalidateLayoutIfNecessary;
- (void)reloadData;
- (void)_setNeedsVisibleCellsUpdate:(_Bool)arg1 withLayoutAttributes:(_Bool)arg2;
- (void)_resumeReloads;
- (void)_suspendReloads;
@property(nonatomic) _Bool allowsMultipleSelection;
- (_Bool)_highlightItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(long long)arg3 notifyDelegate:(_Bool)arg4;
- (void)_unhighlightItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 notifyDelegate:(_Bool)arg3;
@property(nonatomic) _Bool allowsSelection;
- (void)deselectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)_deselectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 notifyDelegate:(_Bool)arg3;
- (void)selectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;
- (void)_selectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3 notifyDelegate:(_Bool)arg4;
- (void)_deselectAllAnimated:(_Bool)arg1 notifyDelegate:(_Bool)arg2;
- (id)_visibleViewsDict;
- (id)_collectionViewData;
- (id)_layoutAttributesForItemsInRect:(struct CGRect)arg1;
- (id)indexPathsForSelectedItems;
- (_Bool)_dataSourceImplementsNumberOfSections;
- (void)_reloadDataIfNeeded;
@property(nonatomic) id <UICollectionViewDelegate> delegate; // @dynamic delegate;
- (id)_visibleDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 isDecorationView:(_Bool)arg3;
- (id)_keysForObject:(id)arg1 inDictionary:(id)arg2;
- (void)_addEntriesFromDictionary:(id)arg1 inDictionary:(id)arg2;
- (void)_addEntriesFromDictionary:(id)arg1 inDictionary:(id)arg2 andSet:(id)arg3;
- (void)_setObject:(id)arg1 inDictionary:(id)arg2 forKind:(id)arg3 indexPath:(id)arg4;
- (id)_objectInDictionary:(id)arg1 forKind:(id)arg2 indexPath:(id)arg3;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (_Bool)_indexPathIsValid:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;

@end

