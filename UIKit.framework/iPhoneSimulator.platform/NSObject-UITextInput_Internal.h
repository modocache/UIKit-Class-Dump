//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView<UITextSelectingContainer>;

@interface NSObject (UITextInput_Internal)
- (int)selectionAffinity;
- (void)_phraseBoundaryGesture:(id)arg1;
- (id)_newPhraseBoundaryGestureRecognizer;
- (void)_unmarkText;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)_setGestureRecognizers;
@property(readonly, nonatomic) UIView<UITextSelectingContainer> *_textSelectingContainer;
- (int)_selectionAffinity;
- (void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (id)_positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3 withAffinityDownstream:(BOOL)arg4;
- (id)_moveRight:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveDown:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveUp:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfDocument:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfDocument:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfLine:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfLine:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfWord:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfWord:(BOOL)arg1 withHistory:(id)arg2;
- (id)_setHistory:(id)arg1 withExtending:(BOOL)arg2 withAnchor:(int)arg3 withAffinityDownstream:(BOOL)arg4;
- (id)_setSelectionRangeWithHistory:(id)arg1;
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (id)_fontForCaretSelection;
- (id)_textColorForCaretSelection;
- (id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
- (id)_findPleasingWordBoundaryFromPosition:(id)arg1;
- (id)_fullRange;
- (id)_rangeOfParagraphEnclosingPosition:(id)arg1;
- (id)_rangeOfLineEnclosingPosition:(id)arg1;
- (id)_rangeOfEnclosingWord:(id)arg1;
- (void)_scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (struct CGRect)_lastRectForRange:(id)arg1;
- (struct CGRect)_rectContainingCaretSelection;
- (void)_replaceCurrentWordWithText:(id)arg1;
- (void)_deleteForwardAndNotify:(BOOL)arg1;
- (void)_deleteBackwardAndNotify:(BOOL)arg1;
- (void)_deleteToEndOfLine;
- (void)_deleteToStartOfLine;
- (void)_deleteByWord;
- (void)_setCaretSelectionAtEndOfSelection;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (void)_moveCurrentSelection:(int)arg1;
- (void)_extendCurrentSelection:(int)arg1;
- (BOOL)_hasMarkedTextOrRangedSelection;
- (BOOL)_isEmptySelection;
- (BOOL)_selectionAtDocumentEnd;
- (BOOL)_selectionAtDocumentStart;
- (BOOL)_selectionAtWordStart;
- (id)_fullText;
- (id)_wordContainingCaretSelection;
- (unsigned long)_characterInRelationToRangedSelection:(int)arg1;
- (unsigned long)_characterInRelationToCaretSelection:(int)arg1;
- (unsigned long)_characterBeforeCaretSelection;
- (unsigned long)_characterAfterCaretSelection;
- (struct _NSRange)_nsrangeForTextRange:(id)arg1;
- (int)_indexForTextPosition:(id)arg1;
- (struct _NSRange)_selectionAsNSRange;
- (id)_keyInput;
- (id)_selectableText;
@end

