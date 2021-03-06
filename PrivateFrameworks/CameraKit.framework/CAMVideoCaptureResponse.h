/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class NSString, UIImage;

@interface CAMVideoCaptureResponse : CAMCaptureResponse {
    short _assetSubtype;
    BOOL _didCompleteUnexpectedly;
    double _duration;
    int _recordingStoppedReason;
    BOOL _unplayable;
    NSString *_videoCapturePath;
    UIImage *_videoPreviewImage;
}

@property short assetSubtype;
@property BOOL didCompleteUnexpectedly;
@property double duration;
@property int recordingStoppedReason;
@property(getter=isSuccessful,readonly) BOOL successful;
@property(getter=isUnplayable) BOOL unplayable;
@property(copy) NSString * videoCapturePath;
@property(retain) UIImage * videoPreviewImage;

+ (double)minimumVideoCaptureDuration;

- (void).cxx_destruct;
- (short)assetSubtype;
- (BOOL)didCompleteUnexpectedly;
- (double)duration;
- (id)init;
- (BOOL)isSuccessful;
- (BOOL)isUnplayable;
- (int)recordingStoppedReason;
- (void)setAssetSubtype:(short)arg1;
- (void)setDidCompleteUnexpectedly:(BOOL)arg1;
- (void)setDuration:(double)arg1;
- (void)setRecordingStoppedReason:(int)arg1;
- (void)setUnplayable:(BOOL)arg1;
- (void)setVideoCapturePath:(id)arg1;
- (void)setVideoPreviewImage:(id)arg1;
- (id)videoCapturePath;
- (id)videoPreviewImage;

@end
