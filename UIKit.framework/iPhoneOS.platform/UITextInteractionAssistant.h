//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class NSMutableArray, NSMutableSet, UIFieldEditor, UILongPressGestureRecognizer, UITapGestureRecognizer, UITextChecker, UIView, UIView<UITextSelectingContainer>;

__attribute__((visibility("hidden")))
@interface UITextInteractionAssistant : NSObject <UIGestureRecognizerDelegate>
{
    UIView<UITextSelectingContainer> *_view;
    NSMutableArray *_recognizers;
    NSMutableSet *_linkGestures;
    UILongPressGestureRecognizer *_loupeGesture;
    UITapGestureRecognizer *_singleTapGesture;
    int _autoscrollRamp;
    float _autoscrollFactor;
    struct CGPoint _autoscrollBasePoint;
    struct CGPoint _autoscrollUntransformedExtentPoint;
    struct CGPoint _loupeGestureEndPoint;
    UITextChecker *_textChecker;
    BOOL _inGesture;
    BOOL _autoscrolled;
    BOOL _isTryingToHighlightLink;
}

@property(nonatomic) BOOL autoscrolled; // @synthesize autoscrolled=_autoscrolled;
@property(nonatomic) struct CGPoint autoscrollUntransformedExtentPoint; // @synthesize autoscrollUntransformedExtentPoint=_autoscrollUntransformedExtentPoint;
@property(readonly, nonatomic) UIView<UITextSelectingContainer> *view; // @synthesize view=_view;
@property(nonatomic) BOOL inGesture; // @synthesize inGesture=_inGesture;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapGesture; // @synthesize singleTapGesture=_singleTapGesture;
@property(retain, nonatomic) UILongPressGestureRecognizer *loupeGesture; // @synthesize loupeGesture=_loupeGesture;
- (BOOL)swallowsDoubleTapWithScale:(float)arg1 atPoint:(struct CGPoint)arg2;
- (void)scheduleReplacementsForRange:(id)arg1 withOptions:(unsigned int)arg2;
- (void)scheduleDictationReplacementsForAlternatives:(id)arg1 range:(id)arg2;
- (id)rangeForTextReplacement:(id)arg1;
- (BOOL)isChineseInputEnabled;
- (void)scheduleReplacementsWithOptions:(unsigned int)arg1;
- (void)cancelInteractionWithLink;
- (BOOL)tapOnLinkWithGesture:(id)arg1;
- (BOOL)isInteractingWithLink;
- (BOOL)shouldIgnoreLinkGestures;
- (void)longDelayRecognizer:(id)arg1;
- (void)smallDelayRecognizer:(id)arg1;
- (BOOL)viewCouldBecomeEditable:(id)arg1;
- (void)updateAutoscroll:(id)arg1;
- (void)autoscrollWillNotStart;
- (void)cancelAutoscroll;
- (void)startAutoscroll:(struct CGPoint)arg1;
- (void)resignedFirstResponder;
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1;
- (void)twoFingerRangedSelectGesture:(id)arg1;
- (void)twoFingerSingleTap:(id)arg1;
- (void)notifyKeyboardSelectionChanged;
- (void)clearSelection;
- (void)selectAll;
- (void)selectWordWithoutShowingCommands;
- (void)selectWord;
- (void)oneFingerTripleTap:(id)arg1;
- (void)oneFingerDoubleTap:(id)arg1;
- (void)oneFingerTapSelectsAll:(id)arg1;
- (void)oneFingerTapInUneditable:(id)arg1;
- (void)oneFingerTap:(id)arg1;
- (float)distanceBetweenPoint:(struct CGPoint)arg1 andRange:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)shouldHandleOneFingerTapInUneditable:(id)arg1;
- (BOOL)shouldHandleFormGestureAtLocation:(struct CGPoint)arg1;
- (void)doubleTapInUneditable:(id)arg1;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (void)tapAndAHalf:(id)arg1;
- (void)confirmMarkedText:(id)arg1;
- (void)loupeGesture:(id)arg1;
- (void)setFirstResponderIfNecessary;
- (void)setGestureRecognizers;
- (id)addPhraseBoundaryGestureRecognizer;
- (id)addTapAndHoldOnLinkRecognizer;
- (id)addHighlightLinkRecognizer;
- (id)addTwoFingerRangedSelectRecognizer;
- (id)addLoupeGestureRecognizer:(BOOL)arg1;
- (id)addTapAndAHalfRecognizer;
- (id)addTwoFingerSingleTapRecognizer;
- (id)addSelectionTapRecognizer;
- (id)addSelectionTapRecognizer:(SEL)arg1;
- (id)addOneFingerTripleTapRecognizer;
- (id)addOneFingerTapRecognizer;
- (id)addOneFingerTapRecognizer:(SEL)arg1;
- (id)addOneFingerDoubleTapRecognizer;
- (id)addOneFingerDoubleTapRecognizer:(SEL)arg1;
- (BOOL)useGesturesForEditableContent;
- (void)clearGestureRecognizers;
- (void)clearGestureRecognizers:(BOOL)arg1;
- (void)turnOffDrawsAsAtomIfPlainStyleAtom;
- (BOOL)containerIsPlainStyleAtom;
- (BOOL)containerIsAtom;
- (BOOL)containerIsTextField;
@property(readonly, nonatomic) UIFieldEditor *fieldEditor;
@property(readonly, nonatomic) UIView *scrollView;
- (void)attach;
- (void)detach;
- (void)detach:(BOOL)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end

