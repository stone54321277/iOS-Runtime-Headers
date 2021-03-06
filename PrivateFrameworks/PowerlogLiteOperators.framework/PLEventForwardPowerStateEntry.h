/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class NSArray;

@interface PLEventForwardPowerStateEntry : PLEntry {
}

@property(readonly) short event;
@property(readonly) BOOL isBasebandWake;
@property(readonly) NSArray * reason;
@property(readonly) short state;

+ (id)entryKey;
+ (void)load;

- (short)event;
- (id)initEntryWithIOMessage:(unsigned long)arg1;
- (id)initEntryWithState:(short)arg1 withEvent:(short)arg2 withReason:(id)arg3 withDate:(id)arg4;
- (BOOL)isBasebandWake;
- (id)reason;
- (short)state;

@end
