/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface DOMNodeIterator : DOMObject

@property (readonly) BOOL expandEntityReferences;
@property (readonly) <DOMNodeFilter> *filter;
@property (readonly) BOOL pointerBeforeReferenceNode;
@property (readonly) DOMNode *referenceNode;
@property (readonly) DOMNode *root;
@property (readonly) unsigned int whatToShow;

- (void)dealloc;
- (void)detach;
- (BOOL)expandEntityReferences;
- (id)filter;
- (id)nextNode;
- (BOOL)pointerBeforeReferenceNode;
- (id)previousNode;
- (id)referenceNode;
- (id)root;
- (unsigned int)whatToShow;

@end
