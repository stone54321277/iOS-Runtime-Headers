/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCStackQueue : NSObject {
    unsigned int _count;
    struct _SCRCStackNode { id x1; void *x2; void *x3; } *_firstNode;
    struct _SCRCStackNode { id x1; void *x2; void *x3; } *_lastNode;
}

- (unsigned int)count;
- (void)dealloc;
- (id)dequeueObject;
- (id)dequeueObjectRetained;
- (id)description;
- (void)enqueueObject:(id)arg1;
- (BOOL)isEmpty;
- (id)objectEnumerator;
- (id)popObject;
- (id)popObjectRetained;
- (void)pushArray:(id)arg1;
- (void)pushObject:(id)arg1;
- (void)removeAllObjects;
- (id)topObject;

@end
