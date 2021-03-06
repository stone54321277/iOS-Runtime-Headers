/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface AXHARemoteMessage : AXHAMessage {
    NSString *_UUID;
    id _ackCompletion;
    BOOL _isACK;
    id _sendCompletion;
}

@property(retain) NSString * UUID;
@property(copy) id ackCompletion;
@property BOOL isACK;
@property(copy) id sendCompletion;

+ (id)messageWithPayload:(id)arg1 sendCompletion:(id)arg2 andAckCompletion:(id)arg3;

- (id)UUID;
- (id)ackCompletion;
- (void)dealloc;
- (id)initWithPayload:(id)arg1;
- (BOOL)isACK;
- (id)sendCompletion;
- (void)setAckCompletion:(id)arg1;
- (void)setIsACK:(BOOL)arg1;
- (void)setSendCompletion:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)transportPayload;

@end
