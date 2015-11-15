//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIKeyboardCandidateListDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSObject<UIKeyboardRecording><UIApplicationEventRecording>, NSString, TIKeyboardCandidateResultSet, TIKeyboardInputManagerState, TIKeyboardInputManagerStub, TIKeyboardLayout, TIKeyboardState, TIKeyboardTouchEvent, UIAlertView, UIAutocorrectInlinePrompt, UIDelayedAction, UIKeyboardAutocorrectionController, UIKeyboardLayout, UIKeyboardScheduledTask, UIKeyboardTaskQueue, UIPhysicalKeyboardEvent, UIResponder, UIResponder<UIKeyInput>, UIResponder<UITextInput>, UIResponder<UITextInputPrivate>, UITextInputArrowKeyHistory, UITextInputTraits, _UIActionWhenIdle;

@interface UIKeyboardImpl : UIView <UIKeyboardCandidateListDelegate>
{
    id <UIKeyInput> m_delegate;
    UIKeyboardTaskQueue *m_taskQueue;
    CDUnknownBlockType m_externalTask;
    TIKeyboardState *m_keyboardState;
    TIKeyboardInputManagerState *m_inputManagerState;
    UIView *m_languageIndicator;
    NSString *m_previousInputString;
    TIKeyboardInputManagerStub *m_inputManager;
    UIKeyboardAutocorrectionController *m_autocorrectionController;
    UIAutocorrectInlinePrompt *m_autocorrectPrompt;
    UIDelayedAction *m_autocorrectPromptAction;
    TIKeyboardCandidateResultSet *m_candidateResultSet;
    id <UIKeyboardCandidateList> m_candidateList;
    UIView *m_markedTextOverlay;
    id <UIKeyboardImplGeometryDelegate> m_geometryDelegate;
    NSObject<UIKeyboardRecording><UIApplicationEventRecording> *m_recorder;
    UIKeyboardLayout *m_layout;
    NSMutableDictionary *m_keyedLayouts;
    NSString *m_inputModeLastChosen;
    UIKeyboardScheduledTask *m_autoDeleteTask;
    unsigned int m_autoDeleteCount;
    double m_autoDeleteLastDelete;
    double m_autoDeleteInterval;
    unsigned int m_autoDeleteShiftCharacter;
    UIDelayedAction *m_longPressAction;
    long long m_orientation;
    long long m_originalOrientation;
    struct CGPoint m_inputPoint;
    int m_changeCount;
    double m_changeTime;
    id m_changedDelegate;
    struct __CFRunLoopObserver *m_observer;
    unsigned long long m_textInputChangingCount;
    _Bool m_textInputChangingText;
    _Bool m_textInputChangingDirection;
    _Bool m_textInputChangesIgnored;
    _Bool m_insideKeyInputDelegateCall;
    UITextInputTraits *m_defaultTraits;
    UITextInputTraits *m_traits;
    int m_returnKeyState;
    long long m_currentDirection;
    _Bool m_autoDeleteOK;
    _Bool m_autocapitalizationPreference;
    _Bool m_autocorrectPromptTimerFired;
    _Bool m_autocorrectionPreference;
    _Bool m_autoshift;
    _Bool m_caretShowingNow;
    _Bool m_changeNotificationDisabled;
    _Bool m_correctionLearningAllowed;
    _Bool m_delegateIsSMSTextView;
    _Bool m_delegateRequiresKeyEvents;
    _Bool m_doubleSpacePeriodWasAppliedInCurrentContext;
    _Bool m_doubleSpacePeriodPreference;
    _Bool m_hardwareKeyboardAttached;
    _Bool m_inDealloc;
    _Bool m_initializationDone;
    _Bool m_performanceLoggingEnabled;
    _Bool m_selecting;
    _Bool m_shift;
    _Bool m_shiftLocked;
    _Bool m_shiftLockedEnabled;
    _Bool m_settingShift;
    _Bool m_suggestionsShownForCurrentDeletion;
    _Bool m_originalShouldSkipCandidateSelection;
    _Bool m_updatingPreferences;
    _Bool m_changingGeometryWithSameOrientation;
    _Bool m_suppressGeometryChangeNotifications;
    _Bool m_acceptingCandidate;
    _Bool m_userChangedSelection;
    _Bool m_shouldChargeKeys;
    _Bool m_longPress;
    _Bool m_replacingWord;
    _Bool m_shiftNeedsUpdate;
    _Bool m_shiftPreventAutoshift;
    _Bool m_shiftHeldDownNeedsUpdated;
    _Bool m_delegateAdoptsTextInput;
    _Bool m_delegateAdoptsTextInputPrivate;
    _Bool m_delegateAdoptsKeyboardInput;
    _Bool m_clientVariantSupportEnabled;
    _Bool m_clientVariantSupportEnabledEver;
    NSMutableArray *m_keyplaneNamesPreviousDelegate;
    NSMutableArray *m_keyplaneNamesCurrentDelegate;
    UITextInputArrowKeyHistory *m_arrowKeyHistory;
    _Bool m_preRotateShift;
    _Bool m_preRotateShiftLocked;
    _Bool m_showInputModeIndicator;
    _Bool m_suppressUpdateCandidateView;
    _Bool m_shouldUpdateCacheOnInputModesChange;
    _Bool m_shouldSetInputModeInNextRun;
    _Bool m_rivenCenterFilled;
    double m_splitProgress;
    NSString *m_currentUsedInputMode;
    NSString *m_lastUsedInputMode;
    NSString *m_nextInputModeToUse;
    _Bool m_needsCandidates;
    _Bool m_shouldSkipCandidateGeneration;
    _Bool m_updateLayoutOnShowKeyboard;
    _Bool m_receivedCandidatesInCurrentInputMode;
    int _currentAlertReason;
    _Bool m_scrolling;
    _Bool m_hasInputOnAcceptCandidate;
    _Bool m_maximizing;
    unsigned long long m_previousSpaceKeyBehavior;
    unsigned long long m_previousReturnKeyBehavior;
    _Bool m_usesCandidateSelection;
    _Bool m_showsCandidateBar;
    _Bool m_showsCandidateInline;
    _Bool committingCandidate;
    _Bool geometryIsChanging;
    _Bool m_hardwareKeyboardIsSeen;
    _Bool m_softwareKeyboardShownByTouch;
    _Bool _handlingKeyCommandFromHardwareKeyboard;
    TIKeyboardTouchEvent *m_touchEventWaitingForKeyInputEvent;
    _UIActionWhenIdle *m_delayedCandidateRequest;
    _UIActionWhenIdle *m_deferredDidSetDelegateAction;
    UIPhysicalKeyboardEvent *m_hardwareRepeatEvent;
    UIKeyboardScheduledTask *m_hardwareRepeatTask;
    id <UIKeyboardTypology> typologyRecorder;
    UIAlertView *keyboardAlertView;
}

+ (void)hardwareKeyboardAvailabilityChanged;
+ (unsigned long long)convertToTextInputAutocapitalizationType:(long long)arg1;
+ (id)orientationKeyForOrientation:(long long)arg1;
+ (Class)layoutClassForInputMode:(id)arg1 keyboardType:(long long)arg2;
+ (long long)interfaceOrientationForSize:(struct CGSize)arg1;
+ (struct CGPoint)persistentDictationWindowOffset;
+ (void)setPersistentDictationWindowOffset:(struct CGPoint)arg1;
+ (void)setPersistentDictationTargetZone:(int)arg1;
+ (int)persistentDictationTargetZone;
+ (struct CGPoint)persistentOffset;
+ (void)setPersistentOffset:(struct CGPoint)arg1;
+ (void)suppressSetPersistentOffset:(_Bool)arg1;
+ (void)setPersistentSplitProgress:(double)arg1;
+ (double)splitProgress;
+ (double)persistentSplitProgress;
+ (_Bool)supportsSplit;
+ (_Bool)isSplit;
+ (_Bool)rivenTranslationPreference;
+ (_Bool)rivenPreference;
+ (_Bool)rivenInstalled;
+ (void)refreshRivenStateWithTraits:(id)arg1 isKeyboard:(_Bool)arg2;
+ (unsigned long long)translateToTextInputKeyboardType:(long long)arg1;
+ (double)additionalInstanceHeightLoadingForInterfaceOrientation:(long long)arg1;
+ (double)additionalInstanceHeightLoading;
+ (double)additionalInstanceHeight;
+ (double)additionalInstanceHeightForInterfaceOrientation:(long long)arg1;
+ (id)normalizedInputModesFromPreference;
+ (struct CGSize)keyboardSizeForInterfaceOrientation:(long long)arg1;
+ (struct CGSize)sizeForInterfaceOrientation:(long long)arg1;
+ (struct CGSize)_defaultSizeForInterfaceOrientation:(long long)arg1;
+ (struct CGSize)defaultSizeForInterfaceOrientation:(long long)arg1;
+ (Class)layoutClassForCurrentInputMode;
+ (id)keyboardScreen;
+ (void)applicationDidReceiveMemoryWarning:(id)arg1;
+ (void)applicationWillEnterForeground:(id)arg1;
+ (void)applicationDidEnterBackground:(id)arg1;
+ (void)applicationWillResignActive:(id)arg1;
+ (void)applicationWillSuspend:(id)arg1;
+ (void)releaseSharedInstance;
+ (id)activeInstance;
+ (id)sharedInstance;
@property(nonatomic) _Bool handlingKeyCommandFromHardwareKeyboard; // @synthesize handlingKeyCommandFromHardwareKeyboard=_handlingKeyCommandFromHardwareKeyboard;
@property(nonatomic) _Bool softwareKeyboardShownByTouch; // @synthesize softwareKeyboardShownByTouch=m_softwareKeyboardShownByTouch;
@property(nonatomic) _Bool hardwareKeyboardIsSeen; // @synthesize hardwareKeyboardIsSeen=m_hardwareKeyboardIsSeen;
@property(nonatomic) _Bool geometryIsChanging; // @synthesize geometryIsChanging;
@property(nonatomic) _Bool committingCandidate; // @synthesize committingCandidate;
@property(retain, nonatomic) UIAlertView *keyboardAlertView; // @synthesize keyboardAlertView;
@property(nonatomic) _Bool showsCandidateInline; // @synthesize showsCandidateInline=m_showsCandidateInline;
@property(nonatomic) _Bool receivedCandidatesInCurrentInputMode; // @synthesize receivedCandidatesInCurrentInputMode=m_receivedCandidatesInCurrentInputMode;
@property(nonatomic) _Bool showsCandidateBar; // @synthesize showsCandidateBar=m_showsCandidateBar;
@property(retain, nonatomic) NSString *nextInputModeToUse; // @synthesize nextInputModeToUse=m_nextInputModeToUse;
@property(retain, nonatomic) NSString *lastUsedInputMode; // @synthesize lastUsedInputMode=m_lastUsedInputMode;
@property(retain, nonatomic) NSString *currentUsedInputMode; // @synthesize currentUsedInputMode=m_currentUsedInputMode;
@property(retain, nonatomic) id <UIKeyboardTypology> typologyRecorder; // @synthesize typologyRecorder;
@property(nonatomic) _Bool shouldSetInputModeInNextRun; // @synthesize shouldSetInputModeInNextRun=m_shouldSetInputModeInNextRun;
@property(nonatomic) _Bool showInputModeIndicator; // @synthesize showInputModeIndicator=m_showInputModeIndicator;
@property(retain, nonatomic) UIKeyboardScheduledTask *hardwareRepeatTask; // @synthesize hardwareRepeatTask=m_hardwareRepeatTask;
@property(retain, nonatomic) UIPhysicalKeyboardEvent *hardwareRepeatEvent; // @synthesize hardwareRepeatEvent=m_hardwareRepeatEvent;
@property(retain, nonatomic) id changedDelegate; // @synthesize changedDelegate=m_changedDelegate;
@property(retain, nonatomic) _UIActionWhenIdle *deferredDidSetDelegateAction; // @synthesize deferredDidSetDelegateAction=m_deferredDidSetDelegateAction;
@property(retain, nonatomic) _UIActionWhenIdle *delayedCandidateRequest; // @synthesize delayedCandidateRequest=m_delayedCandidateRequest;
@property(retain, nonatomic) TIKeyboardTouchEvent *touchEventWaitingForKeyInputEvent; // @synthesize touchEventWaitingForKeyInputEvent=m_touchEventWaitingForKeyInputEvent;
@property(readonly, nonatomic) UIKeyboardAutocorrectionController *autocorrectionController; // @synthesize autocorrectionController=m_autocorrectionController;
@property(retain, nonatomic) TIKeyboardInputManagerState *inputManagerState; // @synthesize inputManagerState=m_inputManagerState;
@property(copy, nonatomic) CDUnknownBlockType externalTask; // @synthesize externalTask=m_externalTask;
@property(nonatomic) id <UIKeyboardImplGeometryDelegate> geometryDelegate; // @synthesize geometryDelegate=m_geometryDelegate;
@property(retain, nonatomic) UITextInputArrowKeyHistory *arrowKeyHistory; // @synthesize arrowKeyHistory=m_arrowKeyHistory;
@property(retain, nonatomic) id <UIKeyboardRecording><UIApplicationEventRecording> recorder;
- (void)trackUsageForCandidateAcceptedAction:(id)arg1;
- (void)trackUsageForPromptedCorrection:(id)arg1 inputString:(id)arg2 previousPrompt:(id)arg3;
- (void)trackUsageForAcceptedAutocorrection:(id)arg1 promptWasShowing:(_Bool)arg2;
- (_Bool)isAutoFillMode;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)needsKeyHitTestResults;
- (_Bool)canHandleKeyHitTest;
- (void)clearSelection;
- (_Bool)caretVisible;
- (_Bool)caretBlinks;
- (void)setCaretVisible:(_Bool)arg1;
- (void)setCaretBlinks:(_Bool)arg1;
- (void)startCaretBlinkIfNeeded;
- (void)remoteControlEvent:(id)arg1;
- (void)showKeyboardIfNeeded;
- (void)ejectKeyDown;
- (void)toggleSoftwareKeyboard;
- (void)completeHandleKeyEvent:(id)arg1;
- (void)handleKeyWithString:(id)arg1 forKeyEvent:(id)arg2 executionContext:(id)arg3;
- (void)handleKeyEvent:(id)arg1 executionContext:(id)arg2;
- (void)handleKeyEvent:(id)arg1;
- (void)_handleKeyEvent:(id)arg1 executionContext:(id)arg2;
- (void)flushTouchEventWaitingForKeyInputEventIfNecessary;
- (void)_remapKeyEvent:(id)arg1 withKeyEventMap:(id)arg2;
- (void)_handleWebKeyEvent:(id)arg1 withInputString:(id)arg2 executionContext:(id)arg3;
- (void)_handleWebKeyEvent:(id)arg1 withIndex:(unsigned long long)arg2 inInputString:(id)arg3 executionContext:(id)arg4;
- (void)_handleWebKeyEvent:(id)arg1 withEventType:(int)arg2 withInputString:(id)arg3 withInputStringIgnoringModifiers:(id)arg4;
- (void)updateKeyboardEventsLagging:(id)arg1;
- (_Bool)isValidKeyInput:(id)arg1;
- (void)cancelAllKeyEvents;
- (void)dismissKeyboard;
@property(nonatomic, getter=isInHardwareKeyboardMode) _Bool inHardwareKeyboardMode;
- (void)showKeyboard;
- (void)hideKeyboard;
- (void)firstHardwareAutoRepeatWithExecutionContext:(id)arg1;
- (void)hardwareKeyboardAvailabilityChanged;
- (int)changeCount;
- (void)updateChangeTimeAndIncrementCount;
- (void)clearChangeTimeAndCount;
- (void)clearTimers;
- (_Bool)isLongPress;
- (void)longPressAction;
- (void)handleDelayedActionLongPress;
- (void)clearLongPressTimer;
- (void)touchLongPressTimer;
- (void)touchLongPressTimerWithDelay:(double)arg1;
- (void)stopAutoDelete;
- (void)startAutoDeleteTimer;
- (void)completeHandleAutoDelete;
- (void)handleAutoDeleteWithExecutionContext:(id)arg1;
- (void)touchAutoDeleteTimerWithThreshold:(double)arg1;
- (void)clearAutoDeleteTimer;
- (id)generateAutocorrectionReplacements:(id)arg1;
- (void)generateCandidatesWithOptions:(int)arg1;
- (void)generateCandidates;
- (_Bool)delegateSuggestionsForCurrentInput;
- (id)autocorrectionRecordForWord:(id)arg1;
- (void)autocorrectionAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)fadeAutocorrectPrompt;
- (void)animateAutocorrection;
- (void)applyAutocorrection;
- (void)updateAutocorrectPromptDisplay:(struct CGRect)arg1;
- (void)updateAutocorrectPrompt:(id)arg1;
- (id)_autocorrectPromptRects;
- (id)_rangeForAutocorrectionText:(id)arg1;
- (void)updateAutocorrectPromptAction;
- (void)handleDelayedActionUpdateAutocorrectPrompt;
- (void)clearAutocorrectPromptTimer;
- (void)touchAutocorrectPromptTimer;
- (struct CGRect)convertRectToAutocorrectRect:(struct CGRect)arg1 delegateView:(id)arg2 container:(id)arg3;
- (void)updateTextCandidateView;
- (void)handleDelayedActionUpdateTextCandidateView;
- (id)inputOverlayContainer;
- (void)updateKeyboardConfigurations;
- (id)updateKeyBehaviors:(id)arg1 withBehaviors:(id)arg2 forState:(id)arg3;
- (id)_keyboardBehaviorState;
- (void)performKeyBehaviorConfirmFirstCandidate;
- (void)performKeyBehaviorConfirm;
- (void)_handleKeyBehavior:(unsigned long long)arg1 forKeyType:(id)arg2;
- (id)_canonicalKeyTypeForKeyType:(id)arg1;
- (void)_nop;
- (void)updateReturnKey:(_Bool)arg1;
- (void)updateReturnKey;
- (void)setReturnKeyEnabled:(_Bool)arg1;
- (_Bool)returnKeyEnabled;
- (id)returnKeyDisplayName;
- (int)returnKeyType;
- (_Bool)noContent;
- (void)setCandidates:(id)arg1;
- (void)removeAutocorrectPrompt;
- (id)autocorrectPrompt;
- (void)setAutocorrection:(id)arg1;
- (_Bool)isMinimized;
- (void)resizeCandidateBarWithDelta:(double)arg1;
- (void)updateCandidateDisplay;
- (_Bool)needsToDeferUpdateTextCandidateView;
- (void)updateCandidateDisplayAsyncWithCandidateSet:(id)arg1 documentOperation:(id)arg2;
- (_Bool)shouldIgnoreCandidateSet:(id)arg1 documentOperation:(id)arg2;
- (_Bool)displaysCandidates;
- (void)setCandidateList:(id)arg1 updateCandidateView:(_Bool)arg2;
- (_Bool)acceptWord:(id)arg1 firstDelete:(unsigned long long)arg2 forInput:(id)arg3;
- (_Bool)acceptWord:(id)arg1 firstDelete:(unsigned long long)arg2;
- (void)scheduleReplacementsWithOptions:(unsigned long long)arg1;
- (void)replaceText:(id)arg1;
- (void)clearDelegate;
- (void)clearAnimations;
- (void)clearTransientState;
- (void)completeAcceptCandidateBeforeAddingInputObject:(id)arg1 executionContext:(id)arg2;
- (void)addInputObject:(id)arg1 executionContext:(id)arg2;
- (void)addInputObject:(id)arg1;
- (void)clearInput;
- (id)candidateList;
- (void)candidateListSelectionDidChange:(id)arg1;
- (void)candidateListAcceptCandidate:(id)arg1;
- (void)revealHiddenCandidates;
- (void)jumpToCompositions;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (void)showNextCandidates;
- (void)completeAcceptCandidate:(id)arg1;
- (void)acceptCurrentCandidateIfSelectedWithExecutionContext:(id)arg1;
- (void)acceptCurrentCandidateIfSelected;
- (void)setUserSelectedCurrentCandidate:(_Bool)arg1;
- (_Bool)userSelectedCurrentCandidate;
- (void)acceptFirstCandidate;
- (void)acceptCurrentCandidateWithExecutionContext:(id)arg1;
- (void)acceptCurrentCandidate;
- (void)acceptCandidate:(id)arg1;
- (void)acceptCandidate:(id)arg1 atIndex:(unsigned long long)arg2 executionContext:(id)arg3;
- (void)acceptCandidate:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeAutocorrection;
- (void)acceptAutocorrection;
- (void)willReplaceTextInRangedSelectionWithKeyboardInput;
- (void)completeDeleteFromInput;
- (void)deleteFromInputWithExecutionContext:(id)arg1;
- (void)deleteFromInput;
- (void)completeDeleteOnceFromInputWithCharacterBefore:(unsigned int)arg1;
- (void)scheduleReplacementsAfterDeletionToEndOfWord;
- (void)moveSelectionToEndOfWord;
- (_Bool)selectionIsEndOfWord;
- (_Bool)nextCharacterIsWordCharacter;
- (void)deleteOnceFromInputWithExecutionContext:(id)arg1;
- (void)updateLayoutAndSetShift;
- (_Bool)shouldEnableShiftForDeletedCharacter:(unsigned int)arg1;
- (void)movePhraseBoundaryToDirection:(long long)arg1;
- (unsigned long long)phraseBoundary;
- (void)didChangePhraseBoundary;
- (void)completeAddInputString:(id)arg1 generateCandidates:(_Bool)arg2;
- (void)completeAddInputString:(id)arg1;
- (void)addWordTerminator:(id)arg1 afterSpace:(_Bool)arg2 elapsedTime:(double)arg3 executionContext:(id)arg4;
- (id)acceptedAutocorrectionForWordTerminator:(id)arg1;
- (void)completeAcceptCandidateBeforeAddingInput:(id)arg1 executionContext:(id)arg2;
- (void)addInputString:(id)arg1 withFlags:(unsigned long long)arg2 executionContext:(id)arg3;
- (void)addInputString:(id)arg1 withFlags:(unsigned long long)arg2;
- (_Bool)shouldAcceptCandidate:(id)arg1 beforeInputString:(id)arg2;
- (_Bool)handleDoubleSpacePeriodForInputString:(id)arg1 afterSpace:(_Bool)arg2 elapsedTime:(double)arg3;
- (void)updateDoubleSpacePeriodStateForString:(id)arg1;
- (void)updateDoubleSpacePeriodStateForCharacter:(unsigned int)arg1;
- (id)inputEventForInputString:(id)arg1;
- (void)addInputString:(id)arg1 fromVariantKey:(_Bool)arg2;
- (void)addInputString:(id)arg1;
- (void)deleteBackward;
- (void)deleteForwardAndNotify:(_Bool)arg1;
- (void)deleteBackwardAndNotify:(_Bool)arg1;
- (void)insertTextAfterSelection:(id)arg1;
- (void)insertText:(id)arg1;
- (void)setPreviousInputString:(id)arg1;
- (_Bool)acceptInputString:(id)arg1;
- (void)handleStringInput:(id)arg1 withFlags:(unsigned long long)arg2 executionContext:(id)arg3;
- (void)handleClearWithExecutionContext:(id)arg1;
- (void)handleClear;
- (void)handleDelete;
- (void)handleDeleteWithExecutionContext:(id)arg1;
- (void)handleDeleteAsRepeat:(_Bool)arg1 executionContext:(id)arg2;
- (void)setInputPoint:(struct CGPoint)arg1;
- (void)keyDeactivated;
- (void)keyActivated;
- (_Bool)supportsNumberKeySelection;
- (_Bool)suppliesCompletions;
- (void)setUsesCandidateSelection:(_Bool)arg1;
- (_Bool)usesCandidateSelection;
@property(nonatomic) _Bool shouldSkipCandidateSelection;
- (void)forceShiftUpdateIfKeyboardStateChanged;
- (void)forceShiftUpdate;
- (void)clearShiftState;
- (_Bool)shiftLockedEnabled;
- (_Bool)isShiftLocked;
- (_Bool)isAutoShifted;
- (_Bool)isShifted;
- (void)setShiftLockedForced:(_Bool)arg1;
- (void)setShiftLocked:(_Bool)arg1;
- (void)setShiftNeedsUpdate;
- (void)setShiftPreventAutoshift:(_Bool)arg1;
- (void)setShift:(_Bool)arg1 autoshift:(_Bool)arg2;
- (void)setShift:(_Bool)arg1;
- (void)toggleShift;
- (void)setShiftOffIfNeeded;
- (_Bool)isSelectionAtSentenceAutoshiftBoundary;
- (void)updateShiftState;
- (void)notifyShiftState;
- (void)updateInputManagerAutocapitalizationType;
- (void)recomputeActiveInputModesFromList:(id)arg1;
- (void)recomputeActiveInputModes;
- (_Bool)shouldSwitchInputMode:(id)arg1;
- (void)performOperations:(id)arg1;
- (void)releaseInputManagerIfInactive;
- (void)releaseInputManager;
- (void)setInputManagerFromInputMode:(id)arg1;
- (_Bool)_systemHasKbd;
@property(readonly, nonatomic) TIKeyboardInputManagerStub *inputManager;
- (void)removeAllDynamicDictionaries;
- (CDUnknownBlockType)replyHandlerForAdjustPhraseBoundaryWithExecutionContext:(id)arg1;
- (void)adjustPhraseBoundaryInForwardDirection:(_Bool)arg1 executionContext:(id)arg2;
- (void)continuePerformHitTestToKeyCode:(long long)arg1 keyCodeHandler:(CDUnknownBlockType)arg2;
- (void)handleReplyToPerformHitTestWithTask:(CDUnknownBlockType)arg1 executionContext:(id)arg2;
- (CDUnknownBlockType)replyHandlerForPerformHitTestForTouchEventWithKeyCodeHandler:(CDUnknownBlockType)arg1 executionContext:(id)arg2;
- (void)performHitTestForTouchEvent:(id)arg1 keyCodeHandler:(CDUnknownBlockType)arg2 executionContext:(id)arg3;
- (void)skipHitTestForTouchEvent:(id)arg1 delayed:(_Bool)arg2;
- (void)skipHitTestForTouchEvent:(id)arg1;
- (void)continueGenerateReplacementsForStringWithCandidates:(id)arg1 candidatesHandler:(CDUnknownBlockType)arg2;
- (void)handleReplyToGenerateReplacementsForStringWithTask:(CDUnknownBlockType)arg1 executionContext:(id)arg2;
- (CDUnknownBlockType)replyHandlerForGenerateReplacementsForStringWithCandidatesHandler:(CDUnknownBlockType)arg1 executionContext:(id)arg2;
- (void)generateReplacementsForString:(id)arg1 candidatesHandler:(CDUnknownBlockType)arg2 executionContext:(id)arg3;
- (void)continueHandleAcceptedCandidateWithOperations:(id)arg1;
- (void)handleReplyToHandleAcceptedCandidateWithTask:(CDUnknownBlockType)arg1 executionContext:(id)arg2;
- (CDUnknownBlockType)replyHandlerForHandleAcceptedCandidateWithExecutionContext:(id)arg1;
- (void)handleAcceptedCandidate:(id)arg1 executionContext:(id)arg2;
- (void)continueGenerateAutocorrectionWithOperations:(id)arg1;
- (void)handleReplyToGenerateAutocorrectionWithTask:(CDUnknownBlockType)arg1 executionContext:(id)arg2;
- (CDUnknownBlockType)replyHandlerForGenerateAutocorrectionWithExecutionContext:(id)arg1;
- (void)generateAutocorrectionWithExecutionContext:(id)arg1;
- (void)continueGenerateCandidatesAsynchronouslyWithOperations:(id)arg1;
- (void)handleReplyToGenerateCandidatesAsynchronouslyWithTask:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)replyHandlerForGenerateCandidatesAsynchronouslyWithSelectedCandidate:(id)arg1;
- (void)generateCandidatesAsynchronouslyWithRange:(struct _NSRange)arg1 selectedCandidate:(id)arg2;
- (void)generateCandidatesAsynchronously;
- (void)continueHandleKeyboardInputWithOperations:(id)arg1;
- (void)handleReplyToHandleKeyboardInputWithTask:(CDUnknownBlockType)arg1 executionContext:(id)arg2;
- (CDUnknownBlockType)replyHandlerForHandleKeyboardInputWithExecutionContext:(id)arg1;
- (void)handleKeyboardInput:(id)arg1 executionContext:(id)arg2;
- (void)continueSyncToKeyboardStateWithOperations:(id)arg1;
- (void)handleReplyToSyncToKeyboardStateWithTask:(CDUnknownBlockType)arg1 executionContext:(id)arg2;
- (CDUnknownBlockType)replyHandlerForSyncToKeyboardStateWithExecutionContext:(id)arg1;
- (void)syncInputManagerToKeyboardStateWithExecutionContext:(id)arg1;
- (void)syncInputManagerToKeyboardState;
@property(readonly, nonatomic) UIKeyboardTaskQueue *taskQueue;
- (void)deleteHandwritingStrokesAtIndexes:(id)arg1;
- (void)selectionDidChange:(id)arg1;
- (void)completeUpdateForChangedSelection:(_Bool)arg1;
- (void)updateForChangedSelectionWithExecutionContext:(id)arg1;
- (void)updateForChangedSelection;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (void)selectionWillChange:(id)arg1;
- (void)prepareForSelectionChange;
- (id)inputStringFromPhraseBoundary;
- (id)searchStringForMarkedText;
- (id)markedTextOverlay;
- (id)markedText;
- (_Bool)hasEditableMarkedText;
- (_Bool)hasMarkedText;
- (void)unmarkText:(id)arg1;
- (void)unmarkText;
- (void)clearInputForMarkedText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2 inputString:(id)arg3 searchString:(id)arg4;
- (int)_clipCornersOfView:(id)arg1;
- (void)resizeForKeyplaneSize:(struct CGSize)arg1;
- (long long)interfaceOrientation;
- (void)updateLayout;
- (void)finishLayoutChangeWithArguments:(id)arg1;
@property(readonly, nonatomic) _Bool shouldShowCandidateBar;
- (_Bool)currentKeyboardTraitsAllowCandidateBar;
- (struct CGRect)subtractKeyboardFrameFromRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)geometryChangeDone:(_Bool)arg1;
- (void)prepareForGeometryChange;
- (void)releaseSuppressUpdateCandidateView;
- (void)updateLayoutIfNeeded;
- (_Bool)handleKeyCommand:(id)arg1 repeatOkay:(_Bool *)arg2;
- (void)handleObserverCallback;
- (void)updateObserverState;
- (void)setChangeNotificationDisabled:(_Bool)arg1;
- (_Bool)changeNotificationDisabled;
- (void)setChanged;
- (void)textFrameChanged:(id)arg1;
- (void)callChanged;
- (void)callChangedSelection;
- (_Bool)callShouldDeleteWithWordCountForRapidDelete:(int)arg1 characterCountForRapidDelete:(int)arg2;
- (_Bool)callShouldReplaceExtendedRange:(unsigned long long)arg1 withText:(id)arg2 includeMarkedText:(_Bool)arg3;
- (_Bool)callShouldInsertText:(id)arg1;
- (void)enable;
- (id)textInputTraits;
- (void)setDefaultTextInputTraits:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)finishTextChanged;
- (void)textChanged:(id)arg1 executionContext:(id)arg2;
- (void)textChanged:(id)arg1;
- (void)layoutHasChanged;
- (void)textWillChange:(id)arg1;
- (void)storeDelegateConformance;
- (_Bool)autocorrectSpellingEnabled;
- (void)setAutocorrectSpellingEnabled:(_Bool)arg1;
- (_Bool)delegateSupportsCorrectionUI;
- (_Bool)delegateIsSMSTextView;
- (void)didSetDelegate;
- (void)setDelegate:(id)arg1 force:(_Bool)arg2;
@property(retain, nonatomic) UIResponder<UIKeyInput> *delegate;
@property(readonly, nonatomic) UIResponder *delegateAsResponder;
@property(readonly, nonatomic) UIResponder<UITextInput> *inputDelegate;
@property(readonly, nonatomic) UIResponder<UITextInputPrivate> *privateInputDelegate;
@property(readonly, nonatomic) id <UIKeyboardInput> legacyInputDelegate;
- (void)takeTextInputTraitsFromDelegate;
- (void)setCorrectionLearningAllowed:(_Bool)arg1;
- (void)updateLayoutToCurrentInterfaceOrientation;
- (void)prepareLayoutForInterfaceOrientation:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setOrientation;
- (void)_willMoveToWindow:(id)arg1 withAncestorView:(id)arg2;
- (void)_updateSoundPreheatingForWindow:(id)arg1;
- (id)inputModeLastChosen;
- (void)setInputModeToNextASCIICapableInPreferredList;
- (void)finishSetInputModeToNextInPreferredListWithExecutionContext:(id)arg1;
- (void)setInputModeToNextInPreferredListWithExecutionContext:(id)arg1;
- (id)getLastUsedInputMode;
- (void)updateLastUsedInputMode:(id)arg1;
- (_Bool)isAllowedInputMode:(id)arg1;
- (_Bool)isDesiredInputMode:(id)arg1;
- (void)showInternationalKeyInfoAlertIfNeeded;
- (void)showInformationalAlertIfNeededForReason:(int)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)updateInputModeIndicatorOnSingleKeyOnly:(_Bool)arg1;
- (void)updateInputModeIndicatorOnSingleKeyOnly:(_Bool)arg1 preserveIfPossible:(_Bool)arg2;
- (void)setInputModeFromPreferences;
- (void)finishSetInputMode:(id)arg1 didChangeDirection:(_Bool)arg2 executionContext:(id)arg3;
- (void)setInputMode:(id)arg1 userInitiated:(_Bool)arg2 updateIndicator:(_Bool)arg3 executionContext:(id)arg4;
- (void)setInputMode:(id)arg1 userInitiated:(_Bool)arg2;
- (void)setInputMode:(id)arg1;
- (_Bool)shiftLockPreference;
- (void)setHardwareKeyboardsSeenPreference:(id)arg1;
- (id)hardwareKeyboardsSeenPreference;
- (void)setShouldUpdateCacheOnInputModesChange:(_Bool)arg1;
- (id)inputModeLastUsedForLanguage:(id)arg1;
- (id)inputModeLastUsedPreference;
- (void)setInputModeLastChosenPreference;
- (id)inputModeLastChosenPreference;
- (id)inputModeFirstPreference;
- (id)inputModePreference;
- (void)saveInputModesPreference:(id)arg1;
- (void)setAutomaticMinimizationEnabled:(_Bool)arg1;
- (_Bool)automaticMinimizationEnabled;
- (_Bool)keyboardsExpandedPreference;
- (id)UILanguagePreference;
- (_Bool)doubleSpacePeriodPreference;
- (_Bool)swipeToTabPreference;
- (_Bool)checkSpellingPreferenceForTraits;
- (_Bool)checkSpellingPreference;
- (_Bool)autocapitalizationPreference;
- (_Bool)autocorrectionPreferenceForTraits;
- (_Bool)autocorrectionPreference;
- (_Bool)performanceLoggingPreference;
- (void)cancelSplitTransition;
- (_Bool)hideAccessoryViewsDuringSplit;
- (void)setSplitProgress:(double)arg1;
- (void)setInSplitKeyboardMode:(id)arg1;
@property(readonly, nonatomic) _Bool splitTransitionInProgress;
@property(readonly) unsigned long long minimumTouchesForTranslation;
@property _Bool rivenSplitLock;
- (void)refreshRivenPreferences;
- (struct CGSize)dragGestureSize;
- (struct CGRect)frameForKeylayoutName:(id)arg1;
@property(readonly) _Bool centerFilled;
- (void)defaultsDidChange;
- (void)selectionScrolling:(id)arg1;
- (void)applicationResumedEventsOnly:(id)arg1;
- (void)applicationSuspendedEventsOnly:(id)arg1;
- (void)removeFromSuperview;
- (void)clearLayouts;
@property(retain, nonatomic) TIKeyboardLayout *layoutForKeyHitTest;
- (void)refreshKeyboardState;
- (id)layoutState;
- (void)dealloc;
- (void)detach;
- (void)keyboardDidHide:(id)arg1;
- (void)delayedInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

