/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol PLCameraControllerDelegate <NSObject>

@optional
- (void)cameraControllerTorchAvailabilityChanged:(id)arg1;
- (void)cameraController:(id)arg1 faceMetadataDidChange:(id)arg2;
- (void)cameraControllerFocusDidEnd:(id)arg1;
- (void)cameraControllerFocusDidStart:(id)arg1;
- (void)cameraControllerWillStartAutofocus:(id)arg1;
- (void)cameraControllerVideoCaptureDidStop:(id)arg1 withReason:(int)arg2 userInfo:(id)arg3;
- (void)cameraControllerDidStopVideoCapture:(id)arg1;
- (void)cameraControllerVideoCaptureDidStart:(id)arg1;
- (void)cameraController:(id)arg1 capturedPanorama:(id)arg2 error:(id)arg3;
- (void)cameraControllerPanoramaDidStopProcessing:(id)arg1;
- (void)cameraControllerPanoramaWillStartProcessing:(id)arg1;
- (void)cameraControllerWillStopPanoramaCapture:(id)arg1;
- (void)cameraControllerDidStartPanoramaCapture:(id)arg1;
- (void)cameraController:(id)arg1 didReceivePanoramaIssue:(int)arg2;
- (void)cameraController:(id)arg1 didUpdatePanoramaPreview:(id)arg2;
- (void)cameraController:(id)arg1 didChangeCaptureAbility:(BOOL)arg2;
- (void)cameraController:(id)arg1 capturedPhoto:(id)arg2 error:(id)arg3;
- (void)cameraControllerDidTakePhoto:(id)arg1;
- (void)cameraControllerWillTakePhoto:(id)arg1;
- (void)cameraControllerModeDidChange:(id)arg1;
- (void)cameraControllerModeWillChange:(id)arg1;
- (void)cameraController:(id)arg1 cleanApertureDidChange:(struct CGRect)arg2;
- (void)cameraControllerServerDied:(id)arg1;
- (void)cameraControllerSessionInterruptionEnded:(id)arg1;
- (void)cameraControllerSessionWasInterrupted:(id)arg1;
- (void)cameraControllerSessionDidStop:(id)arg1;
- (void)cameraControllerWillStopSession:(id)arg1;
- (void)cameraControllerDidStopSession:(id)arg1;
- (void)cameraControllerSessionDidStart:(id)arg1;
- (void)cameraControllerPreviewDidStart:(id)arg1;
- (void)cameraControllerWillStartPreview:(id)arg1;
- (void)cameraControllerDidStartSession:(id)arg1;
@end

