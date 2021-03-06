/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@class GSTemporaryStorage, NSObject<GSAdditionStoring>, NSString;

@interface GSClientManagedLibrary : NSObject <GSLibraryProtocol> {
    GSTemporaryStorage *_ts;
}

@property(readonly) NSString * nameSpace;
@property(readonly) NSObject<GSAdditionStoring> * storage;

- (void)dealloc;
- (BOOL)generationsRemove:(id)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)nameSpace;
- (struct NSObject { Class x1; }*)storage;

@end
