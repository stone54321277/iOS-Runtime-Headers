/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSCache, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, TSUPointerKeyDictionary;

@interface TSDTileStorage : NSObject <NSCacheDelegate> {
    NSCache *mCache;
    NSMutableDictionary *mCacheKeysByBucket;
    NSObject<OS_dispatch_queue> *mCacheKeysQueue;
    TSUPointerKeyDictionary *mReverseCacheKeys;
    NSObject<OS_dispatch_semaphore> *mReverseCacheKeysLock;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)contentsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 contentsScale:(float)arg2 forTileAtLocation:(struct { unsigned int x1; unsigned int x2; })arg3 inBucket:(id)arg4;
- (void)dealloc;
- (id)init;
- (id)p_cacheKeyForImageInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 contentsScale:(float)arg2 tileLocation:(struct { unsigned int x1; unsigned int x2; })arg3;
- (void)removeAllContents;
- (void)removeImagesInBucket:(id)arg1;
- (void)storeContents:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 contentsScale:(float)arg3 forTileAtLocation:(struct { unsigned int x1; unsigned int x2; })arg4 inBucket:(id)arg5;

@end
