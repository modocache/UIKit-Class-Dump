//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DOMNode.h"

#import "UIWebSelectionBlock.h"

@interface DOMNode (UIWebSelectionAdditions) <UIWebSelectionBlock>
- (id)lastDescendantOfAboutTheSameWidthOrHeight;
- (id)firstDescendantOfAboutTheSameWidthOrHeight;
- (id)firstDescendantOfAboutTheSameWidthOrHeightAsRect:(struct CGRect)arg1 withDescentDirection:(int)arg2;
- (id)enclosingDocument;
- (struct CGRect)boundingRectAndInsideFixedPosition:(int *)arg1;
- (struct CGRect)boundingRect;
- (BOOL)canShrinkDirectlyToTextOnly;
- (id)rangeOfContents;
- (BOOL)containsRange:(id)arg1;
- (id)asDomRange;
- (id)asDomNode;
- (BOOL)rendersAsBlock;
- (id)largerParent;
- (BOOL)strictlyContainsBlock:(id)arg1;
- (BOOL)containsBlock:(id)arg1;
- (BOOL)isSameBlock:(id)arg1;
- (BOOL)hasCustomLineHeight;
- (BOOL)selectable;
- (id)parentBlock;
- (id)webFrame;
- (id)enclosingElementIncludingSelf;
- (id)asElement;
- (BOOL)strictlyContainsNode:(id)arg1;
- (BOOL)containsNode:(id)arg1;
@end

