//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIWebTiledView.h>

#import "UIGestureRecognizerDelegate.h"
#import "UIKeyInput.h"
#import "UIKeyboardInput.h"
#import "UIModalViewDelegate.h"
#import "UITextInputTokenizer.h"
#import "UITextSelection.h"

@class CALayer, DOMElement, DOMHTMLElement, DOMNode, NSArray, NSDictionary, NSMutableSet, NSTimer, UIAutoscroll, UIColor, UIImage, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPopoverController, UIReferenceLibraryViewController, UIResponder<UITextSelection>, UITapGestureRecognizer, UITextChecker, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange, UITextSelectionView, UIView, UIView<UITextSelectingContent>, UIWebRotatingSheet, UIWebSelectionAssistant, WebThreadSafeUndoManager, WebView, WebViewReachabilityObserver;

@interface UIWebDocumentView : UIWebTiledView <UIGestureRecognizerDelegate, UIKeyboardInput, UIKeyInput, UIModalViewDelegate, UITextInputTokenizer, UITextSelection>
{
    int _retainCount;
    struct WKWindow *_wkWindow;
    WebView *_webView;
    WebViewReachabilityObserver *_reachabilityObserver;
    id m_parentTextView;
    id _delegate;
    id _textSuggestionDelegate;
    struct CGRect _doubleTapRect;
    struct CGRect _mainDocumentDoubleTapRect;
    struct CGPoint _scrollPoint;
    struct CGPoint _doubleTapStartPosition;
    double _doubleTapStartTime;
    struct CGSize _pendingSize;
    int _orientation;
    DOMHTMLElement *_standaloneEditingElement;
    struct CGPoint _mouseDownPoint;
    double _mouseDownTime;
    UIAutoscroll *_autoscroll;
    struct __CFDictionary *_plugInViews;
    int m_selectionGranularity;
    CALayer *_contentLayersHostingLayer;
    CALayer *_flattenedRotatingContentLayer;
    NSMutableSet *_overflowScrollViewsPendingInsertion;
    NSMutableSet *_overflowScrollViewsPendingDeletion;
    NSMutableSet *_overflowScrollViews;
    NSArray *_additionalSubviews;
    UITextInputTraits *_traits;
    id <UITextInputDelegate> _inputDelegate;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    UITapGestureRecognizer *_twoFingerDoubleTapGestureRecognizer;
    UILongPressGestureRecognizer *_highlightLongPressGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIPanGestureRecognizer *_twoFingerPanGestureRecognizer;
    struct {
        NSTimer *timer;
        struct CGPoint location;
        char isBlocked;
        char isCancelled;
        char isOnWebThread;
        char isDisplayingHighlight;
        char attemptedClick;
        struct CGPoint lastPanTranslation;
        DOMNode *element;
        id delegate;
        UIWebRotatingSheet *interactionSheet;
        NSArray *elementActions;
        char allowsImageSheet;
        char allowsDataDetectorsSheet;
        char allowsLinkSheet;
        char acceptsFirstResponder;
    } _interaction;
    struct UIWebDocumentViewViewportConfiguration _defaultViewportConfigurations[5];
    struct UIWebDocumentViewViewportConfiguration _currentViewportConfiguration;
    struct CGSize _minimumSize;
    int _documentType;
    float _documentScale;
    float _previousDocumentScale;
    struct CGRect _documentBounds;
    struct CGSize _fixedLayoutOriginRoundingDelta;
    struct CGSize _fixedLayoutSizeRoundingDelta;
    unsigned int _customConfigurations;
    unsigned int _mouseDownCount;
    unsigned int _dataDetectorTypes;
    unsigned int _webCoreNeedsSetNeedsDisplay:1;
    unsigned int _webCoreNeedsDraw:1;
    unsigned int _ignoresFocusingMouse:1;
    unsigned int _ignoresKeyEvents:1;
    unsigned int _autoresizes:1;
    unsigned int _ignoresViewportOverflowWhenAutoresizing:1;
    unsigned int _updatingSize:1;
    unsigned int _scalesToFit:1;
    unsigned int _updatesScrollView:1;
    unsigned int _hasCustomScale:1;
    unsigned int _shouldRestoreScrollPosition:1;
    unsigned int _pageNeedsReset:1;
    unsigned int _hasScrollPoint:1;
    unsigned int _gesturesDisabled:1;
    unsigned int _doubleTapRectIsReplaced:1;
    unsigned int _standaloneEditableView:1;
    unsigned int _widgetEditingView:1;
    unsigned int _mouseDragged:1;
    unsigned int _mouseReentrancyGuard:1;
    unsigned int _isShowingFullScreenPlugIn:1;
    unsigned int _isSettingRedrawFrame:1;
    unsigned int _needsScrollNotifications:1;
    unsigned int _loadsSynchronously:1;
    unsigned int _mouseDown:1;
    unsigned int _usePreTimberlineTransparencyBehavior:1;
    unsigned int _geolocationDialogAllowed:1;
    unsigned int _usingMinimalTilesDuringLoading:1;
    unsigned int _sheetsCount:2;
    unsigned int _didFirstVisuallyNonEmptyLayout:1;
    unsigned int _loadInProgress:1;
    unsigned int _uiwdvIsResigningFirstResponder:1;
    unsigned int _classicViewportMode:1;
    unsigned int _sizeUpdatesSuspended:1;
    unsigned int _sizeUpdateOccurredWhileSuspended:1;
    unsigned int _shouldOnlyRecognizeGesturesOnActiveElements:1;
    unsigned int _shouldIgnoreCustomViewport:1;
    unsigned int _ignoresFocusEventFromFirstResponderChange:1;
    unsigned int _shouldCloseWebViewAtDealloc:1;
    unsigned int _shouldRemoveUserStyleSheet:1;
    unsigned int _hasDrawnTiles:1;
    unsigned int _showingTextStyleOptions:1;
    unsigned int _subviewCachesNeedUpdate:1;
    unsigned int _avoidFixedPositionUpdateOnZoomStart:1;
    WebThreadSafeUndoManager *_undoManager;
    UIWebSelectionAssistant *_webSelectionAssistant;
    UITextInteractionAssistant *_textSelectionAssistant;
    UITextSelectionView *_textSelectionView;
    UITextChecker *_textChecker;
    struct UIEdgeInsets _caretInsets;
    int _selectionAffinity;
    UIPopoverController *_definePopoverController;
    UIReferenceLibraryViewController *_defineViewController;
    DOMElement *_dictationResultPlaceholder;
    id _dictationResultPlaceholderRemovalObserver;
}

+ (id)standardTextViewPreferences;
+ (void)initialize;
+ (double)getTimestamp;
+ (Class)layerClass;
- (int)documentType;
- (id)_documentUrl;
@property(readonly, nonatomic) UIResponder<UITextSelection> *textDocument;
- (id)rectsForRange:(id)arg1;
@property(nonatomic) int selectionGranularity;
@property(nonatomic) int selectionAffinity;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
- (struct CGRect)caretRectForPosition:(id)arg1;
@property(nonatomic) id <UITextInputDelegate> inputDelegate;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
- (struct CGRect)_lastRectForRange:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(int)arg2 inDirection:(int)arg3;
- (void)_scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (BOOL)isPosition:(id)arg1 withinTextUnit:(int)arg2 inDirection:(int)arg3;
- (id)positionFromPosition:(id)arg1 toBoundary:(int)arg2 inDirection:(int)arg3;
- (BOOL)isPosition:(id)arg1 atBoundary:(int)arg2 inDirection:(int)arg3;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)_positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3 withAffinityDownstream:(BOOL)arg4;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)rangeOfEnclosingWord:(id)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textInRange:(id)arg1;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (void)unmarkText;
@property(readonly, nonatomic) UITextRange *markedTextRange;
- (void)setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
@property(copy) UITextRange *selectedTextRange;
- (BOOL)hasText;
- (id)_textSelectingContainer;
- (int)selectionState;
- (void)detachInteractionAssistant;
- (void)detachSelectionView;
- (BOOL)hasSimpleTextOnlyStructure;
- (BOOL)containsOnlySelectableElements;
- (void)setTileUpdatesDisabled:(BOOL)arg1;
- (void)_restoreFlattenedContentLayers;
- (void)_flattenAndSwapContentLayersInRect:(struct CGRect)arg1;
- (void *)_createIOSurfaceFromRect:(struct CGRect)arg1;
- (BOOL)_shouldFlattenContentLayersForRect:(struct CGRect)arg1;
- (unsigned int)_contentSizeInExposedRect:(struct CGRect)arg1 topLayer:(id)arg2 visibleLayerCount:(int *)arg3;
- (void)didEndZoom;
- (void)didZoom;
- (void)willStartZoom;
- (void)scrollViewWasRemoved;
- (void)didEndScroll;
- (void)_updateFixedPositioningObjectsLayoutAfterScroll;
- (void)willStartScrollToTop;
- (void)willStartScroll;
- (void)useSelectionAssistantWithMode:(int)arg1;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (BOOL)becomesEditableWithGestures;
- (BOOL)playsNicelyWithGestures;
- (struct CGRect)autoscrollContentFrame;
- (struct CGRect)autoscrollDragFrame;
- (struct CGRect)visibleContentFrame;
- (struct CGRect)visibleFrame;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)isCaretInEmptyParagraph;
- (id)webSelectionAssistant;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (void)replace:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (void)paste:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)_define:(id)arg1;
- (void)_showTextStyleOptions:(id)arg1;
- (void)_underline:(id)arg1;
- (void)_italicize:(id)arg1;
- (void)_bold:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (struct CGRect)selectionClipRect;
- (void)updateSelection;
- (void)endSelectionChange;
- (void)beginSelectionChange;
@property(readonly, nonatomic, getter=isEditing) BOOL editing;
@property(readonly, nonatomic, getter=isEditable) BOOL editable;
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
@property(readonly, nonatomic) UITextSelectionView *selectionView;
@property(readonly, nonatomic) UIView<UITextSelectingContent> *content;
- (void)takeTraitsFrom:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)textInputTraits;
- (void)webView:(id)arg1 willAddPlugInView:(id)arg2;
- (BOOL)hasPlugInSubviews;
- (BOOL)isShowingFullScreenPlugInUI;
- (void)didRemovePlugInView:(id)arg1;
- (void)webView:(id)arg1 didHideFullScreenForPlugInView:(id)arg2;
- (void)webView:(id)arg1 willShowFullScreenForPlugInView:(id)arg2;
- (id)webView:(id)arg1 plugInViewWithArguments:(id)arg2 fromPlugInPackage:(id)arg3;
- (void)setPaused:(BOOL)arg1 withEvents:(BOOL)arg2;
- (void)setPaused:(BOOL)arg1;
- (void)handleKeyWebEvent:(id)arg1;
- (BOOL)requiresKeyEvents;
- (void)setBottomBufferHeight:(float)arg1;
- (id)automaticallySelectedOverlay;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputChanged:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)implementationWebView;
- (struct CGRect)convertCaretRect:(struct CGRect)arg1;
- (void)setCaretChangeListener:(id)arg1;
- (BOOL)hasContent;
- (id)text;
- (void)setText:(id)arg1;
- (void)selectAll;
- (void)moveForward:(unsigned int)arg1;
- (void)moveBackward:(unsigned int)arg1;
- (BOOL)selectionAtWordStart;
- (BOOL)selectionAtDocumentStart;
- (BOOL)hasSelection;
- (void)extendCurrentSelection:(int)arg1;
- (id)rangeByExtendingCurrentSelection:(int)arg1;
- (id)rangeByMovingCurrentSelection:(int)arg1;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(BOOL)arg2;
- (id)selectedDOMRange;
- (struct _NSRange)selectionRange;
- (struct _NSRange)_markedTextNSRange;
- (void)replaceSelectionWithWebArchive:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3;
- (int)wordOffsetInRange:(id)arg1;
- (void)expandSelectionToStartOfWordContainingCaretSelection;
- (id)wordContainingCaretSelection;
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (id)previousUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (id)wordRangeContainingCaretSelection;
- (struct CGRect)rectContainingCaretSelection;
- (id)rectsForNSRange:(struct _NSRange)arg1;
- (struct CGRect)rectForNSRange:(struct _NSRange)arg1;
- (id)textColorForCaretSelection;
- (id)fontForCaretSelection;
- (unsigned short)characterAfterCaretSelection;
- (unsigned short)characterBeforeCaretSelection;
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;
- (id)markedText;
- (void)confirmMarkedText:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setMarkedText:(id)arg1;
- (void)replaceCurrentWordWithText:(id)arg1;
- (void)replaceRangeWithText:(struct _NSRange)arg1 replacementText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (id)dictationInterpretations;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertText:(BOOL)arg2;
- (void)_finishedUsingDictationPlaceholder;
- (id)insertDictationResultPlaceholder:(struct CGSize)arg1;
- (BOOL)_dictationPlaceholderHasBeenRemoved;
- (BOOL)hasRangedSelection;
- (id)dictationResultMetadataForRange:(id)arg1;
- (id)metadataDictionariesForDictationResults;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (BOOL)isEditingSingleLineElement;
- (void)insertText:(id)arg1;
- (void)deleteBackward;
- (void)deleteFromInput;
- (void)addInputString:(id)arg1;
- (void)addInputString:(id)arg1 fromVariantKey:(BOOL)arg2;
- (id)delegate;
- (void)setContinuousSpellCheckingEnabled:(BOOL)arg1;
- (void)_setParentTextView:(id)arg1;
- (id)_parentTextView;
- (id)undoManager;
- (id)undoManagerForWebView:(id)arg1;
- (void)_undoManagerDidRedo:(id)arg1;
- (void)_undoManagerDidUndo:(id)arg1;
- (void)setInteractionAssistantGestureRecognizers;
- (void)ensureSelection;
- (BOOL)clearWKFirstResponder;
- (BOOL)makeWKFirstResponder;
- (id)_responderForBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)deferredBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)updateKeyboardStateOnResponderChanges;
- (BOOL)isWidgetEditingView;
- (void)setIsWidgetEditingView:(BOOL)arg1;
- (id)standaloneEditingElement;
- (void)setStandaloneEditingElement:(id)arg1;
- (BOOL)isStandaloneEditableView;
- (void)setIsStandaloneEditableView:(BOOL)arg1;
- (id)textFormElement;
- (id)formElement;
- (id)_requestWithUDIDHeaderIfAppropriate:(id)arg1;
- (void)_clearAllConsoleMessages;
- (void)_resetFormDataForFrame:(id)arg1;
- (void)assistFormNode:(id)arg1;
- (BOOL)doubleTapRectIsReplaced;
- (struct CGRect)doubleTapRect;
- (void)_handleTwoFingerDoubleTapAtLocation:(struct CGPoint)arg1;
- (void)_handleDoubleTapAtLocation:(struct CGPoint)arg1;
- (float)_clampScale:(float)arg1 toScrollView:(id)arg2;
- (void)_handleDoubleTapAtPoint:(struct CGPoint)arg1 inWebHTMLView:(id)arg2 outRenderRect:(struct CGRect *)arg3;
- (float)_doubleTapScaleForSize:(float)arg1 isWidth:(BOOL)arg2 isPDF:(BOOL)arg3;
@property(nonatomic, getter=isDoubleTapEnabled) BOOL doubleTapEnabled;
@property(nonatomic) BOOL mediaPlaybackAllowsAirPlay;
@property(nonatomic) BOOL shouldOnlyRecognizeGesturesOnActiveElements;
- (void)sendOrientationEventForOrientation:(int)arg1;
- (void)updateInteractionElements;
- (void)redrawScaledDocument;
- (void)_reshapePlugInViews;
- (id)checkSpellingOfString:(id)arg1;
- (void)webViewDidDrawTiles:(id)arg1;
- (id)subviews;
- (BOOL)_shouldUpdateSubviewCachesForPlugins;
- (void)_updateSubviewCaches;
- (BOOL)_hasSubviewContainingWebContent:(id)arg1;
- (void)_overflowScrollView:(id)arg1 didEndScrollingForNode:(id)arg2;
- (void)_overflowScrollView:(id)arg1 scrollOffsetChangedForNode:(id)arg2;
- (void)_overflowScrollView:(id)arg1 willStartScrollingForNode:(id)arg2;
- (void)webView:(id)arg1 willRemoveScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 forNode:(id)arg4;
- (void)webView:(id)arg1 didCreateOrUpdateScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 scrollSize:(id)arg4 forNode:(id)arg5;
- (void)webViewDidCommitCompositingLayerChanges:(id)arg1;
- (void)_removeAdditionalSubview:(id)arg1;
- (void)_addAdditionalSubview:(id)arg1;
- (void)_setSubviewCachesNeedUpdate:(BOOL)arg1;
- (void)_noteOverflowScrollViewPendingDeletion:(id)arg1;
- (void)_noteOverflowScrollViewPendingInsertion:(id)arg1;
- (void)_webthread_webView:(id)arg1 attachRootLayer:(id)arg2;
- (void)revealedSelectionByScrollingWebFrame:(id)arg1;
- (id)readDataFromPasteboard:(id)arg1 withIndex:(int)arg2;
- (id)supportedPasteboardTypesForCurrentSelection;
- (id)_supportedPasteboardTypesForCurrentSelection;
- (BOOL)isUnperturbedDictationResultMarker:(id)arg1;
- (int)getPasteboardChangeCount;
- (BOOL)performsTwoStepPaste:(id)arg1;
- (BOOL)fragmentContainsRichContent:(id)arg1;
- (BOOL)hasRichlyEditableSelection;
- (int)getPasteboardItemsCount;
- (void)writeDataToPasteboard:(id)arg1;
- (void)_updateFixedPositionContent;
- (struct CGRect)_adjustedLayoutRectForFixedPositionObjects;
- (void)_updateFixedPositionedObjectsLayoutRectUsingWebThread:(BOOL)arg1;
- (struct CGRect)_layoutRectForFixedPositionObjects;
- (struct CGRect)_documentViewVisibleRect;
- (void)_notifyContentHostingLayersOfScaleChange;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_notifyPlugInViewsOfScaleChange;
- (void)_notifyPlugInViewsOfDidZoom;
- (void)_notifyPlugInViewsOfDidEndZooming;
- (void)_notifyPlugInViewsOfWillBeginZooming;
- (BOOL)_isSubviewOfPlugInView:(id)arg1;
- (void)_didScroll;
- (void)_cancelLongPressGestureRecognizer;
- (void)setTilingArea:(int)arg1;
- (void)setIgnoresKeyEvents:(BOOL)arg1;
- (void)setIgnoresFocusingMouse:(BOOL)arg1;
- (BOOL)cancelTouchTracking;
- (BOOL)cancelMouseTracking;
- (struct CGImage *)newSnapshotWithRect:(struct CGRect)arg1;
- (struct CGImage *)createSnapshotWithRect:(struct CGRect)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)setSmoothsFonts:(BOOL)arg1;
- (void)layoutSubviews;
- (void)forceLayout;
- (void)_showPendingContentLayers;
- (BOOL)webView:(id)arg1 shouldScrollToPoint:(struct CGPoint)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 restoreStateFromHistoryItem:(id)arg2 forFrame:(id)arg3 force:(BOOL)arg4;
- (void)webView:(id)arg1 saveStateToHistoryItem:(id)arg2 forFrame:(id)arg3;
- (void)saveStateToCurrentHistoryItem;
- (void)_saveStateToHistoryItem:(id)arg1;
- (void)_resetForNewPage;
- (void)_restoreScrollPointForce:(BOOL)arg1;
- (BOOL)updatesScrollView;
- (void)setUpdatesScrollView:(BOOL)arg1;
- (void)setAllowsUserScaling:(BOOL)arg1 forDocumentTypes:(int)arg2;
- (void)setMaximumScale:(float)arg1 forDocumentTypes:(int)arg2;
- (void)setMinimumScale:(float)arg1 forDocumentTypes:(int)arg2;
- (void)setInitialScale:(float)arg1 forDocumentTypes:(int)arg2;
- (void)setViewportSize:(struct CGSize)arg1 forDocumentTypes:(int)arg2;
- (void)setMinimumSize:(struct CGSize)arg1;
- (void)setIgnoresViewportOverflowWhenAutoresizing:(BOOL)arg1;
- (void)setAutoresizes:(BOOL)arg1;
- (struct CGRect)documentBounds;
- (void)_WAKViewSizeDidChange:(id)arg1;
- (void)webView:(id)arg1 didReceiveDocTypeForFrame:(id)arg2;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webViewDidEndOverflowScroll:(id)arg1;
- (void)webViewDidStartOverflowScroll:(id)arg1;
- (void)_editableSelectionLayoutChangedByScrolling:(BOOL)arg1;
- (void)_selectionLayoutChangedByScrolling:(BOOL)arg1;
- (void)webThreadWebViewDidLayout:(id)arg1;
- (void)webThreadWebViewDidLayout:(id)arg1 byScrolling:(BOOL)arg2;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)resetTilingAfterLoadComplete;
- (void)sendScrollEventIfNecessary;
- (void)enclosingScrollerDidScroll;
- (BOOL)needsScrollNotifications;
- (void)webView:(id)arg1 needsScrollNotifications:(id)arg2 forFrame:(id)arg3;
- (BOOL)isClassicViewportMode;
- (void)webView:(id)arg1 didReceiveViewportArguments:(id)arg2 forFrame:(id)arg3;
- (unsigned int)_applyViewportArguments:(id)arg1;
@property(nonatomic) BOOL shouldIgnoreCustomViewport;
- (void)_clearDoubleTapRect;
- (void)_updateSize;
@property(nonatomic) BOOL sizeUpdatesSuspended;
- (void)_setDocumentType:(int)arg1;
- (void)_setDocumentType:(int)arg1 overrideCustomConfigurations:(BOOL)arg2 viewportArguments:(id)arg3;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromFrame:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toFrame:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromFrame:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toFrame:(id)arg2;
- (void)viewportConfigurationsDidChange:(unsigned int)arg1;
- (void)_updateScrollViewBoundaryZoomScales;
- (float)_zoomedDocumentScale;
- (float)minimumScale;
- (float)maximumScale;
- (float)initialScale;
- (float)minimumScaleForMinimumSize:(struct CGSize)arg1;
- (float)viewportHeight;
- (float)viewportWidth;
- (float)_documentScale;
- (void)_setDocumentScale:(float)arg1;
- (float)integralScaleForScale:(float)arg1;
- (float)integralScaleForScale:(float)arg1 keepingPointFixed:(struct CGPoint *)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setUsePreTimberlineTransparencyBehavior;
- (unsigned int)dataDetectorTypes;
- (void)setDataDetectorTypes:(unsigned int)arg1;
- (unsigned int)effectiveDataDetectorTypes;
- (BOOL)_dataDetectionIsActivated;
- (BOOL)detectsPhoneNumbers;
- (void)setDetectsPhoneNumbers:(BOOL)arg1;
- (void)setUserStyleSheet:(id)arg1;
- (id)_focusedOrMainFrame;
- (id)_groupName;
- (id)webView;
- (BOOL)loadsSynchronously;
- (void)setLoadsSynchronously:(BOOL)arg1;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)_cleanUpFrameStateAndLoad:(CDUnknownBlockType)arg1;
- (void)_runLoadBlock:(CDUnknownBlockType)arg1;
- (void)setDelegate:(id)arg1;
- (void)stopLoading:(id)arg1;
- (void)setUsesUIScrollView;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)_reachabilityManagerNotifiedIsReachable:(BOOL)arg1;
- (BOOL)hasDrawnTiles;
- (BOOL)didFirstVisuallyNonEmptyLayout;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (void)dealloc;
- (void)_removeDefinitionController:(BOOL)arg1;
- (void)resetShowingTextStyle:(id)arg1;
- (void)enableReachability;
- (id)initWithWebView:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initSimpleHTMLDocumentWithStyle:(id)arg1 frame:(struct CGRect)arg2 preferences:(id)arg3 groupName:(id)arg4;
- (struct CGRect)webViewFrameForUIFrame:(struct CGRect)arg1;
- (void)_restoreViewportSettingsWithSize:(struct CGSize)arg1;

// Remaining properties
@property(nonatomic) BOOL acceptsEmoji; // @dynamic acceptsEmoji;
@property(nonatomic) BOOL acceptsFloatingKeyboard;
@property(nonatomic) BOOL acceptsSplitKeyboard;
@property(nonatomic) int autocapitalizationType; // @dynamic autocapitalizationType;
@property(nonatomic) int autocorrectionType; // @dynamic autocorrectionType;
@property(nonatomic) BOOL contentsIsSingleValue; // @dynamic contentsIsSingleValue;
@property(nonatomic) BOOL displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) BOOL enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property(nonatomic) BOOL forceEnableDictation;
@property(retain, nonatomic) UIColor *insertionPointColor; // @dynamic insertionPointColor;
@property(nonatomic) unsigned int insertionPointWidth; // @dynamic insertionPointWidth;
@property(nonatomic) int keyboardAppearance; // @dynamic keyboardAppearance;
@property(nonatomic) int keyboardType; // @dynamic keyboardType;
@property(nonatomic) BOOL learnsCorrections;
@property(nonatomic) BOOL returnKeyGoesToNextResponder;
@property(nonatomic) int returnKeyType; // @dynamic returnKeyType;
@property(nonatomic, getter=isRichText) BOOL richText;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // @dynamic secureTextEntry;
@property(retain, nonatomic) UIColor *selectionBarColor; // @dynamic selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage; // @dynamic selectionDragDotImage;
@property(retain, nonatomic) UIColor *selectionHighlightColor; // @dynamic selectionHighlightColor;
@property(nonatomic) int shortcutConversionType; // @dynamic shortcutConversionType;
@property(nonatomic) int spellCheckingType; // @dynamic spellCheckingType;
@property(nonatomic) BOOL suppressReturnKeyStyling;
@property(readonly, nonatomic) UIView *textInputView;
@property(nonatomic) int textLoupeVisibility; // @dynamic textLoupeVisibility;
@property(nonatomic) int textSelectionBehavior; // @dynamic textSelectionBehavior;
@property(nonatomic) id textSuggestionDelegate; // @dynamic textSuggestionDelegate;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet; // @dynamic textTrimmingSet;

@end

